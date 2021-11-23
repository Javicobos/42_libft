/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_itoa.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:53:38 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/18 17:47:22 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"

char		*ft_itoa(int n);
static int	get_digits(int n);

char	*ft_itoa(int n)
{
	int		digits;
	char	*goal;
	int		is_neg;

	digits = get_digits(n);
	is_neg = (n < 0);
	goal = malloc(digits + is_neg + 1);
	if (!goal)
		return (0);
	if (is_neg)
		goal[0] = '-';
	goal[digits-- + is_neg] = '\0';
	while (digits >= 0)
	{
		goal[digits + is_neg] = (-2 * is_neg + 1 ) * (n % 10) + '0';
		n = n / 10;
		digits--;
	}
	return (goal);
}

/*
** This function will take an int and allocate a string where it can be
** written. It will then be written there. 
**
** We first detect if the number is negative (we need to write a minus)
** and get its digits to allocate enough memory. Then we write the minus if
** we need it, in the first place of the string. We also write the null at
** the end of the string, because we'll be modifying digits so it's good 
** to put the null first. 
**
** Then we'll write the remainders of dividing by 10 (aka the digits) in
** their positions, dividing n by 10 and repeating this process until we
** get to position 1 (last digit of a negative, since there is a sign) 
** or to zero (last digit of a positive). 
**
** The (-2 * is_neg + 1 ) part of that line does this:
**		If the number is negative, is_neg is 1 so -2*1 + 1 turns into -1
**		If the number is positive, is_neg is 0 so -2*0 + 1 turns into 1
** This means we can get the n%10 normally if the number was positive and
** n%10 is also positive (oe zero), and by -(n%10) if the number was
** negative and we want to flip the sign of that remainder. 
**
** Finally the string where we wrote the number is returned. 
**
** Update: is_neg was added to digits whenever it is used as a pointer
** to make sure the address is properly offset for negatives. 
*/

static int	get_digits(int n)
{
	int	result;

	result = 1;
	while (n / 10 != 0)
	{
		result++;
		n = n / 10;
	}
	return (result);
}

/*
** This function will tell us the number of digits of an int. 
**
** The result starts at one because we need a digit for numbers like zero,
** and then counts the number of times we can divide by 10. This works for 
** both positive and negative numbers! 
*/