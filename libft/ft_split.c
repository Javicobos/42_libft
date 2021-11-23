/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_split.c                                         :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:54:43 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 17:46:07 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		**ft_split(char const *str, char sep);
static int	word_count(const char *str, char sep);
static char	**make_words(const char *str, char sep, char **goal);
static int	make_one_word(const char *start, char sep, char **goal, int count);
static void	freedom_everyone(char **goal, int count);

char	**ft_split(char const *str, char sep)
{
	int		words;
	char	**goal;

	if (!str)
		return (0);
	words = word_count(str, sep);
	goal = malloc((words + 1) * sizeof(char *));
	if (!goal)
		return (0);
	goal = make_words(str, sep, goal);
	return (goal);
}

/*
** The ft_split function splits a string into multiply substrings that are
** (in the original) separated by the character sep- 
**
** The basic structure is that it will first count the substrings (words)
** that are needed and allocate memory for a pointer to each of them, plus
** a final null pointer that ends the array. 
**
** We'll then call the function that fills goal with the words and return it.
**
** It may seem weird that we first count the words and then we make them, but
** I found that it made sense to get the size of the needed array first and
** then create it with the needed content, something that is not easy (I think)
** to do while transversing the original string only once. 
*/

static int	word_count(const char *str, char sep)
{
	int	pos;
	int	is_word;
	int	count;

	pos = 0;
	is_word = 0;
	count = 0;
	while (str[pos])
	{
		if (str[pos] != sep && !is_word)
		{
			count++;
			is_word = 1;
		}
		else if (str[pos] == sep)
			is_word = 0;
		pos++;
	}
	return (count);
}

/*
** The word_count function will count all of the words that split has to make
** It will transverse the original string, adding one to count for each new
** word (a non-separator) if it was not already on a word. If it was already
** on a word, then it will ignore new non-separators until one is found. 
**
** Finally, it will return the number of words it found. 
*/

static int	make_one_word(const char *start, char sep, char **goal, int count)
{
	int	len;

	len = 0;
	while (start[len] != sep && start[len])
		len++;
	goal[count] = ft_substr(start, 0, (size_t)len);
	if (!(goal[count]))
		return (0);
	return (len);
}

/*
** This function will count the number of characters in a word, transversing 
** the string start until it finds a null or a separator. 
**
** It will then create a substring from the start and with that count.
**
** The function returns the length of the word it created, or zero if
** something went wrong. That way we can know where the word ends.
*/

static char	**make_words(const char *str, char sep, char **goal)
{
	int	pos;
	int	word_len;
	int	count;

	pos = 0;
	count = 0;
	while (str[pos])
	{
		if (!(str[pos] == sep))
		{
			word_len = make_one_word(str + pos, sep, goal, count);
			if (!word_len)
			{
				freedom_everyone(goal, count);
				return (0);
			}
			count++;
			pos = pos + word_len;
		}
		else
			pos++;
	}
	goal[count] = 0;
	return (goal);
}

/*
** This function "makes" the words, adding them to the goal array of strings.
** It will call the "make one word" function and save its length. If it fails,
** it will free everything with the freedom_everyone function. 
**
** If the word is created succesfully, we add its length to pos to go to the
** next separator (or the null if the string ended). When the string does end,
** we're done making words and we add a null pointer to goal[count]. 
**
** We finally return goal, or zero if there was a problem before. 
*/

static void	freedom_everyone(char **goal, int count)
{
	int	pos;

	pos = 0;
	while (pos < count)
	{
		free(goal[pos]);
		pos++;
	}
	free(goal);
}

/*
** This function frees everything if there was a problem with the memory
** allocations while making the words. If will free all words that have
** been allocated as well as the original goal pointer.
*/