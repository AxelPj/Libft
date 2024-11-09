/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main_du_seigneur.c                                 :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: axelpeti <axelpeti@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/11/08 17:03:09 by axelpeti          #+#    #+#             */
/*   Updated: 2024/11/09 12:14:46 by axelpeti         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <string.h>
#include <ctype.h>
#include "libft.h"

int main (void)
{
/* 	//---------------test ft_isalpha---------------//
	printf("test a ||ft_isalpha:%i || isalpha:%i'\n", ft_isalpha('a'), isalpha('a'));
	printf("test 1 ||ft_isalpha:%i || isalpha:%i\n\n", ft_isalpha('1'), isalpha('1'));

	//---------------test ft_isdigit---------------//
	printf("test 8 || ft_isdigit:%i || isdigit:%i\n", ft_isdigit('8'), isdigit('9'));
	printf("test: a || ft_isdigit:%i || isdigit:%i\n\n", ft_isdigit('a'), isdigit('a'));
	
	//---------------test ft_isalnum---------------//
	printf("test 8 || ft_isalnum:%i || isalnum:%i\n", ft_isalnum('8'), isalnum('9'));
	printf("test: a || ft_isalnum:%i || isalnum:%i\n", ft_isalnum('a'), isalnum('a'));
	printf("test G || ft_isalnum:%i || isalnum:%i\n", ft_isalnum('G'), isalnum('G'));
	printf("test: # || ft_isalnum:%i || isalnum:%i\n\n", ft_isalnum('#'), isalnum('#'));
	
	//---------------test ft_isascii---------------//
	printf("test 8 || ft_isascii:%i || isascii:%i\n", ft_isascii('8'), isascii('8'));
    printf("test: a || ft_isascii:%i || isascii:%i\n", ft_isascii('a'), isascii('a'));
    printf("test G || ft_isascii:%i || isascii:%i\n", ft_isascii('G'), isascii('G'));
    printf("test: # || ft_isascii:%i || isascii:%i\n", ft_isascii('#'), isascii('#'));
    printf("test 200 || ft_isascii:%i || isascii:%i\n\n", ft_isascii(200), isascii(200));
	
	//---------------test ft_isprint---------------//
	printf("test 8 || ft_isprint:%i || isprint:%i\n", ft_isprint('8'), isprint('8'));
    printf("test: a || ft_isprint:%i || isprint:%i\n", ft_isprint('a'), isprint('a'));
    printf("test G || ft_isprint:%i || isprint:%i\n", ft_isprint('G'), isprint('G'));
    printf("test: # || ft_isprint:%i || isprint:%i\n", ft_isprint('#'), isprint('#'));
    printf("test 32 || ft_isprint:%i || isprint:%i\n", ft_isprint(32), isprint(32));
    printf("test 127 || ft_isprint:%i || isprint:%i\n\n", ft_isprint(127), isprint(127));
	
	//---------------test ft_strlen---------------//
	printf("test \"hello\" || ft_strlen:%zu || strlen:%zu\n", ft_strlen("hello"), strlen("hello"));
    printf("test \"\" || ft_strlen:%zu || strlen:%zu\n", ft_strlen(""), strlen(""));
    printf("test \"42\" || ft_strlen:%zu || strlen:%zu\n", ft_strlen("42"), strlen("42"));
    printf("test \"test string\" || ft_strlen:%zu || strlen:%zu\n", ft_strlen("test string"), strlen("test string"));
    printf("test \"1234567890\" || ft_strlen:%zu || strlen:%zu\n\n", ft_strlen("1234567890"), strlen("1234567890"));
	
	//---------------test ft_memset---------------//
	char str_memset[50] = "je suis un test";
	char str_ft_memset[50] = "je suis un test";
	memset(str_memset, 'x', 5);
	ft_memset(str_ft_memset, 'x', 5);
	printf("test avec 'x' sur 5 octet || ft_memset:%s || memset:%s", str_ft_memset, str_memset);
	int	int_memset = 20;
	int	int_ft_memset = 20;
	ft_memset (int_ft_memset, 3, 5);
	memset (int_memset, 3, 5);
	printf("test avec 3 sur 5 octet || ft_memset:%i || memset:%i", int_ft_memset, int_memset);
	
	//---------------test ft_bzero----------------//
	char str_bzero[50] = "je suis un test";
	bzero(str_bzero, 5);
	ft_bzero(str_bzero, 5);
	printf("test sur 5 octet || ft_memset:%s || memset:%s\n", str_bzero, str_bzero);
	bzero(str_bzero, 50);
	ft_bzero(str_bzero, 50);
	printf("test sur 50 octet || ft_memset:%s || memset:%s\n", str_bzero, str_bzero);
	
	//---------------test ft_memcpy----------------//
	 char str_src[50] = "je suis la";
	char str_dest[50] = "        la pour mama";
	char str_dest2[50] = "        la pour mama";
	printf("Avant || dest: %s || dest2: %s\n", str_dest, str_dest2);
	ft_memcpy (str_dest, str_src, 10);
	memcpy (str_dest2, str_src, 10);
	printf("Apres || ft_memcpy:%s || memcpy:%s\n", str_dest, str_dest2); 
	
	//---------------test ft_memmove---------------//
	char str_memmove[60] = "je suis un test  attention complet attention";
	char str_ft_memmove[60] = "je suis un test  attention complet attention";
	printf("Avant str_dest2: %s\n", str_memmove);
	ft_memmove (str_ft_memmove + 16, str_ft_memmove + 27 , 22);
	memmove (str_memmove + 16, str_memmove + 27 , 22);
	printf("Apres || ft_memcpy:%s || memcpy:%s\n", str_ft_memmove, str_memmove); */
	
	//---------------test ft_strlcpy---------------//
	
	
	//---------------test ft_strlcat---------------//
	
	
	//---------------test ft_toupper---------------//
	
	
	//---------------test ft_tolower---------------//
	
	
	//---------------test ft_strchr---------------//
	
	
	//---------------test ft_strrchr---------------//
	
	
	//---------------test ft_strncmp---------------//
	
	
	//---------------test ft_memchr---------------//
	
	
	//---------------test ft_memcmp---------------//
	
	
	//---------------test ft_strnstr---------------//
	
	
	//---------------test ft_atoi---------------//
	
	
	//---------------test ft_calloc---------------//
	
	
	//---------------test ft_strdup---------------//
	
				
	
}