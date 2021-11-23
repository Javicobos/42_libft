/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_atoi.c                                          :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jcobos-d <jcobos-d@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/11/08 14:52:55 by jcobos-d          #+#    #+#             */
/*   Updated: 2021/11/17 18:01:45 by jcobos-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_atoi(const char *str);

int	ft_atoi(const char *str)
{
	int					neg_sign;
	unsigned long int	num_dec;

	num_dec = 0;
	neg_sign = 1;
	while (*str == ' ' || (8 < *str && *str < 14))
		str++;
	if (*str == '+' || *str == '-')
		neg_sign = 44 - *(str++);
	while (('0' <= *str && *str <= '9'))
	{
		num_dec = num_dec * 10 + (*(str++) - '0');
		if (num_dec > 9223372036854775807)
			return ((neg_sign + 1) / (-2));
	}
	return ((int)num_dec * neg_sign);
}

/*
** The atoi function takes a string (a) and convers it to an int (i).
**
** The first loop transverses an arbitrary number of space characters, 
** which can be normal whitespaces or other ascii spaces (man isspace)
**
** The "if" looks at a single positive or negative sign. It will then
** set neg_sign to 1 if the sign was positive, or to -1 if it was negative.
** This works with the seemingly random 44 there because '+' is 43 in ascii
** and '-' is 45. This is obviously way less clear than adding a condition
** for the minus, but it removes one line from the code and I wanted this
** function to look as short as possible. That's also why *(str++) is used.
** This makes the program look at the value inside str and then increase
** the value of the pointer str (not the value inside). Working with the 
** pointer itself is also faster for the computer than using an int [pos].
**
** The next loop actually makes the number. We will use an unsigned long int
** to hold the temporal value of our number so we can behave in the same way
** atoi does, which is allowing overflows if the value is between the max
** int and max long int, but giving a special error value for strings
** that exceed the max or min long int. These values come from strtol
** and are 0 for negative numbers and -1 for positive ones. 
**
** For each new digit that we encounter, we multiply the previous value of
** the number by 10 and then we add the new digit, converted from char to int.
**
** We then compare the number with the max long int to detect overflows. 
** Note that the min long int is -9223372036854775808 and that one would
** trigger the check despite being in range, however the "natural" value
** for that number is 0, the same as the "error" value. 
**
** The ((neg_sign + 1) / (-2)) maps 1 to -1 and -1 to 0, which is very
** convenient so that we can reuse the value of neg_sign to get the 
** expected error values for the big overflows. 
**
** If everything went okay, we return the number we were storing times
** its sign, which means we finally turn it to a negative if it was.
*/