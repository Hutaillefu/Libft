/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: htaillef <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2017/11/07 18:03:15 by htaillef          #+#    #+#             */
/*   Updated: 2017/11/08 18:17:11 by htaillef         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
#include <stdio.h>
#include <ctype.h>

int		main(int argc, char **argv)
{
	// TOLOWER
	printf("--- Test tolower ---\n");
	printf("Test with A : %c\n", ft_tolower('A'));
	printf("     with A : %c\n", tolower('A'));
	printf("Test with z : %c\n", ft_tolower('z'));
	printf("     with z : %c\n", tolower('z'));
	printf("\n");

	// TOUPPER
	printf("--- Test toupper ---\n");
	printf("Test with A : %c\n", ft_toupper('A'));
	printf("     with A : %c\n", toupper('A'));
	printf("Test with z : %c\n", ft_toupper('z'));
	printf("     with z : %c\n", toupper('z'));
	printf("\n");

	// ISPRINT
	printf("--- Test isprint ---\n");
	printf("Test with A : %i\n", ft_isprint('A'));
	printf("     with A : %i\n", isprint('A'));
	printf("Test with z : %i\n", ft_isprint('z'));
	printf("     with z : %i\n", isprint('z'));
	printf("Test with code acsii 23 : %i\n", ft_isprint(23));
	printf("     with code acsii 23 : %i\n", isprint(23));
	printf("\n");

	// ISACSII
	printf("--- Test isascii ---\n");
	printf("Test with A : %i\n", ft_isascii('A'));
	printf("     with A : %i\n", isascii('A'));
	printf("Test with z : %i\n", ft_isascii('z'));
	printf("     with z : %i\n", isascii('z'));
	printf("Test with code acsii 180 : %i\n", ft_isascii(180));
	printf("     with code acsii 180 : %i\n", isascii(180));
	printf("\n");

	// ISALNUM
	printf("--- Test isalnum ---\n");
	printf("Test with A : %i\n", ft_isalnum('A'));
	printf("     with A : %i\n", isalnum('A'));
	printf("Test with 6 : %i\n", ft_isalnum('6'));
	printf("     with 6 : %i\n", isalnum('6'));
	printf("Test with ? : %i\n", ft_isalnum('?'));
	printf("     with ? : %i\n", isalnum('?'));
	printf("\n");

	// ISDIGIT
	printf("--- Test isdigit ---\n");
	printf("Test with A : %i\n", ft_isdigit('A'));
	printf("     with A : %i\n", isdigit('A'));
	printf("Test with 6 : %i\n", ft_isdigit('6'));
	printf("     with 6 : %i\n", isdigit('6'));
	printf("Test with ? : %i\n", ft_isdigit('?'));
	printf("     with ? : %i\n", isdigit('?'));
	printf("\n");

	// ISALPHA
	printf("--- Test isalpha ---\n");
	printf("Test with A : %i\n", ft_isalpha('A'));
	printf("     with A : %i\n", isalpha('A'));
	printf("Test with 6 : %i\n", ft_isalpha('6'));
	printf("     with 6 : %i\n", isalpha('6'));
	printf("Test with ? : %i\n", ft_isalpha('?'));
	printf("     with ? : %i\n", isalpha('?'));
	printf("\n");

	// ATOI
	printf("--- Test atoi ---\n");
	printf("Test with A3 : %i\n", ft_atoi("A3"));
	printf("     with A3 : %i\n", atoi("A3"));
	printf("Test with 6 : %i\n", ft_atoi("6"));
	printf("     with 6 : %i\n", atoi("6"));
	printf("Test with 652. : %i\n", ft_atoi("652."));
	printf("     with 652. : %i\n", atoi("652."));
	printf("\n");

	// STRLEN
	printf("--- Test strlen ---\n");
	printf("Test with Bonjour : %zu\n", ft_strlen("Bonjour"));
	printf("     with Bonjour : %zu\n", strlen("Bonjour"));
	printf("Test with 0123456789 : %zu\n", ft_strlen("0123456789"));
	printf("     with 0123456789 : %zu\n", strlen("0123456789"));
	printf("Test with "" : %zu\n", ft_strlen(""));
	printf("     with "" : %zu\n", strlen(""));
	printf("\n");

	// STRCPY
	printf("--- Test strcpy ---\n");
	char t1[7 + 1];
	printf("Test with Bonjour : %s\n", ft_strcpy(t1, "Bonjour"));
	char t1a[7 + 1];
	printf("     with Bonjour : %s\n", strcpy(t1a, "Bonjour"));
	char t2[10 + 1];
	printf("Test with 0123456789 : %s\n", ft_strcpy(t2, "0123456789"));
	char t2a[10 + 1];
	printf("     with 0123456789 : %s\n", strcpy(t2a, "0123456789"));
	char t3[0 + 1];
	printf("Test with "" : %s\n", ft_strcpy(t3, ""));
	char t3a[0 + 1];
	printf("     with "" : %s\n", strcpy(t3a, ""));
	printf("\n");

	// STRDUP
	printf("--- Test strdup ---\n");
	printf("Test with Bonjour : %s\n", ft_strdup("Bonjour"));
	printf("     with Bonjour : %s\n", strdup("Bonjour"));
	printf("Test with 0123456789 : %s\n", ft_strdup("0123456789"));
	printf("     with 0123456789 : %s\n", strdup("0123456789"));
	printf("Test with "" : %s\n", ft_strdup(""));
	printf("     with "" : %s\n", strdup(""));

	printf("\n");

	// STRNCPY
	printf("--- Test strncpy ---\n");
	char t4[7 + 1];
	printf("Test with Bonjour and dst[8] : %s\n", ft_strncpy(t4, "Bonjour", sizeof(t4)));
	char t4a[7 + 1];
	printf("     with Bonjour and dst[8] : %s\n", strncpy(t4a, "Bonjour", sizeof(t4)));
	char t5[4 + 1];
	printf("Test with 0123456789 and dest[5] : %s\n", ft_strncpy(t5, "0123456789", 5));
	char t5a[4 + 1];
	printf("     with 0123456789 and dest[5] : %s\n", strncpy(t5a, "0123456789", 5));
	char t6[0 + 1];
	printf("Test with "" and dest[1] : %s\n", ft_strncpy(t6, "", sizeof(t6)));
	char t6a[0 + 1];
	printf("     with "" and dest[1] : %s\n", strncpy(t6a, "", sizeof(t6)));
	char t7[99 + 1];
	printf("Test with coucou and dest[100] : %s\n", ft_strncpy(t7, "coucou", sizeof(t7)));
	char t7a[99 + 1];
	printf("     with coucou and dest[100] : %s\n", strncpy(t7a, "coucou", sizeof(t7)));
	printf("\n");

	// STRCAT
	printf("--- Test strcat ---\n");
	char t8[7 + 1 + 6] = "Bonjour";
	printf("Test with Bonjour and Coucou dst[14] : %s\n", ft_strcat(t8, "Coucou"));
	char t8a[7 + 1 + 6] = "Bonjour";
	printf("     with Bonjour and Coucou dst[14] : %s\n", strcat(t8a, "Coucou"));
	/*char t9[8] = "012345";
	printf("Test with 012345 and 6789 dst[8] : %s\n", ft_strcat(t9, "6789"));
	char t9a[8] = "012345";
	printf("     with 012345 and 6789 dst[8] : %s\n", strcat(t9a, "6789")); MAKE ABORT   */
	char t10[0 + 2];
	printf("Test with "" and ? dest[2] : %s\n", ft_strcat(t10, "?"));
	char t10a[0 + 2];
	printf("     with "" and ? dest[2] : %s\n", strcat(t10a, "?"));
	printf("\n");

	// STRCMP
	printf("--- Test strcmp ---\n");
	printf("Test with Coucou and Coucou : %i\n", ft_strcmp("Coucou", "Coucou"));
	printf("     with Coucou and Coucou : %i\n", strcmp("Coucou", "Coucou"));
	printf("Test with 012345 and 0123456 : %i\n", ft_strcmp("012345", "0123456"));
	printf("     with 012345 and 0123456 : %i\n", strcmp("012345", "0123456"));
	printf("Test with "" and "" : %i\n", ft_strcmp("", ""));
	printf("     with "" and "" : %i\n", strcmp("", ""));
	printf("\n");

	// STRSTR
	printf("--- Test strstr ---\n");
	printf("Search Coucou in SalutCoucou : %s\n", ft_strstr("SalutCoucou", "Coucou"));
	printf("       Coucou in SalutCoucou : %s\n", strstr("SalutCoucou", "Coucou"));
	printf("Search 012345 in 0123456 : %s\n", ft_strstr("0123456", "012345"));
	printf("       012345 in 0123456 : %s\n", strstr("0123456", "012345"));
	printf("Search "" in Gohu : %s\n", ft_strstr("Gohu", ""));
	printf("       "" in Gohu : %s\n", strstr("Gohu", ""));

	printf("\n");

	// STRNSTR
	printf("--- Test strnstr ---\n");
	printf("Search 6 char of Coucou in SalutCoucou : %s\n", ft_strnstr("SalutCoucou", "Coucou", 6));
	printf("       6 char of Coucou in SalutCoucou : %s\n", strnstr("SalutCoucou", "Coucou", 6));
	printf("Search 3 char of 012345 in 0123456 : %s\n", ft_strnstr("0123456", "012345", 3));
	printf("       3 char of 012345 in 0123456 : %s\n", strnstr("0123456", "012345", 3));
	printf("Search 0 char of "" in Gohu : %s\n", ft_strnstr("Gohu", "", 0));
	printf("       0 char of "" in Gohu : %s\n", strnstr("Gohu", "", 0));
	printf("\n");

	// STRCHR
	printf("--- Test strchr ---\n");
	printf("Search '3' in 0123456 : %s\n", ft_strchr("0123456", '3'));
	printf("       '3' in 0123456 : %s\n", strchr("0123456", '3'));
	printf("Search 'o' in Coucou : %s\n", ft_strchr("Coucou", 'o'));
	printf("       'o' in Coucou : %s\n", strchr("Coucou", 'o'));
	printf("Search '?' in Salut : %s\n", ft_strchr("Salut", '?'));
	printf("       '?' in Salut : %s\n", strchr("Salut", '?'));
	printf("\n");

	// STRRCHR
	printf("--- Test strrchr ---\n");
	printf("Search '3' in 0123456 : %s\n", ft_strrchr("0123456", '3'));
	printf("       '3' in 0123456 : %s\n", strrchr("0123456", '3'));
	printf("Search 'o' in Coucou : %s\n", ft_strrchr("Coucou", 'o'));
	printf("       'o' in Coucou : %s\n", strrchr("Coucou", 'o'));
	printf("Search '?' in Salut : %s\n", ft_strrchr("Salut", '?'));
	printf("       '?' in Salut : %s\n", strrchr("Salut", '?'));
	printf("\n");

	// MEMSET
	printf("--- Test memset ---\n");
	char t11[11 + 1] = "Hello World";
	printf("Test with Hello World, ?, 3  : %s\n", ft_memset(t11,'?' , 3));
	char t11a[11 + 1] = "Hello World";
	printf("     with Hello World, ?, 3  : %s\n", memset(t11a,'?' , 3));
	char t12[6 + 1] = "Coucou";
	printf("Test with Coucou, -, 7 : %s\n", ft_memset(t12, '-', 7));
	char t12a[6 + 1] = "Coucou";
	printf("     with Coucou, -, 7 : %s\n", memset(t12a, '-', 7));
	char t13[0 + 1];
	printf("Test with , ., 1 : %s\n", ft_memset(t13, '.', 1));
	char t13a[0 + 1];
	printf("     with , ., 1 : %s\n", memset(t13a, '.', 1));
	printf("\n");

	// MEMCPY
	printf("--- Test memcpy ---\n");
	char t14[11 + 1] = "Hello World";
	char t15[50];
	printf("Test with Hello World, dst[50], 5  : %s\n", ft_memcpy(t15, t14, 5));
	char t14a[11 + 1] = "Hello World";
	char t15a[50];
	printf("     with Hello World, dst[50], 5  : %s\n", memcpy(t15a, t14a, 5));
	char t16[6 + 1] = "Coucou";
	char t17[5];
	printf("Test with Coucou, dst[5], 5 : %s\n", ft_memcpy(t17, t16, 5));
	char t16a[6 + 1] = "Coucou";
	char t17a[5];
	printf("     with Coucou, dst[5], 5 : %s\n", memcpy(t17a, t16a, 5));
	char t18[0 + 1];
	char t19[6];
	printf("Test with , dst[6], 5 : %s\n", ft_memcpy(t19, t18, 5));
	char t18a[0 + 1];
	char t19a[6];
	printf("     with , dst[6], 5 : %s\n", memcpy(t19a, t18a, 5));
	printf("\n");

	// MEMCCPY
	printf("--- Test memccpy ---\n");
	char t20[11 + 1] = "Hello World";
	char t21[50];
	printf("Test with Hello World, dst[50], 9  : %s\n", ft_memccpy(t20, t21, 'o', 9));
	char t20a[11 + 1] = "Hello World";
	char t21a[50];
	printf("     with Hello World, dst[50], 9  : %s\n", memccpy(t20a, t21a, 'o', 9));
/*	char t22[6 + 1] = "Coucou";
	char t23[5];
	printf("Test with Coucou, dst[5], 6 : %s\n", ft_memccpy(t22, t23, '2', 6));
	char t22a[6 + 1] = "Coucou";
	char t23a[5];
	printf("     with Coucou, dst[5], 6 : %s\n", memccpy(t22a, t23a, '2', 6)); MAKE ABORT  */
	char t24[0 + 1];
	char t25[6];
	printf("Test with , dst[6], 1 : %s\n", ft_memccpy(t24, t25, ' ', 1));
	char t24a[0 + 1];
	char t25a[6];
	printf("     with , dst[6], 1 : %s\n", memccpy(t24a, t25a, ' ', 1));
	printf("\n");

}
