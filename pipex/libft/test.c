/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   test.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jmilesi <marvin@42.fr>                     +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/04/12 23:52:17 by jmilesi           #+#    #+#             */
/*   Updated: 2023/04/14 16:29:49 by jmilesi          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int	main(void)
{
	printf("ft_atoi");
	printf("ft_atoi(\"1234\") = %d\n", ft_atoi("1234"));
	printf("ft_atoi(\"-1234\") = %d\n", ft_atoi("-1234"));
	// Tester la fonction ft_bzero
	char s1[] = "Hello, world!";
	ft_bzero(s1, 5);
	printf("ft_bzero(\"Hello, world!\", 5) = \"%s\"\n", s1);
	// Tester la fonction ft_calloc
	int *arr = ft_calloc(5, sizeof(int));
	for (int i = 0; i < 5; i++) {
	printf("arr[%d] = %d\n", i, arr[i]);
	}
	free(arr);
	// Tester la fonction ft_isalnum
	printf("ft_isalnum('a') = %d\n", ft_isalnum('a'));
	printf("ft_isalnum('5') = %d\n", ft_isalnum('5'));
	printf("ft_isalnum('#') = %d\n", ft_isalnum('#'));
	// Tester la fonction ft_isalpha
	printf("ft_isalpha('a') = %d\n", ft_isalpha('a'));
	printf("ft_isalpha('A') = %d\n", ft_isalpha('A'));
	printf("ft_isalpha('5') = %d\n", ft_isalpha('5'));
	printf("isalpha('a') = %d\n", isalpha('a'));
	printf("isalpha: %d\n", isalpha(-45));
	// Tester la fonction ft_isascii
	printf("ft_isascii(0) = %d\n", ft_isascii(0));
	printf("ft_isascii('a') = %d\n", ft_isascii('a'));
	printf("ft_isascii(128) = %d\n", ft_isascii(128));
	// Tester la fonction ft_isdigit
	printf("ft_isdigit('0') = %d\n", ft_isdigit('0'));
	printf("ft_isdigit('9') = %d\n", ft_isdigit('9'));
	printf("ft_isdigit('a') = %d\n", ft_isdigit('a'));
	// Tester la fonction ft_isprint
	printf("ft_isprint(32) = %d\n", ft_isprint(32));
	printf("ft_isprint(126) = %d\n", ft_isprint(126));
	printf("ft_isprint(7) = %d\n", ft_isprint(7));
	// Tester la fonction ft_itoa
	char *s2 = ft_itoa(1234);
	printf("ft_itoa(1234) = \"%s\"\n", s2);
	free(s2);
	// Tester la fonction ft_memccpy
	char s3[] = "Hello, world!";
	char s4[6];
	ft_memccpy(s4, s3, 'o', 6);
	printf("ft_memccpy(\"Hello, world!\", 'o', 6) = \"%s\"\n", s4);
	// Tester la fonction ft_memchr
	char s5[] = "Hello, world!";
	void* p = ft_memchr(s5, 'o', strlen(s5));
	printf("ft_memchr(\"Hello, world!\", 'o') = \"%s\"\n", (char *)p);
	return (0);
}
