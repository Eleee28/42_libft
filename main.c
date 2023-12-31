/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ejuarros <ejuarros@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/16 09:25:36 by ejuarros          #+#    #+#             */
/*   Updated: 2023/11/20 08:22:12 by ejuarros         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

/** @file main.c
 * 	@brief Mains for testing the functions of the project
 * 	
 * 	This file contains main() functions for the files / functions in the 
 * 	libft project. 
*/

/* -- Includes -- */
#include "libft.h"
#include <stdio.h>		/* for printf() */
#include <ctype.h>		/* for isalnum(), ... */
#include <string.h>		/* for memchr() */
#include <stdlib.h>


/** @brief main() function for ft_atoi.c
 * 
*/

/*
int	main(void)
{
	printf("%d\n", ft_atoi("-12345") * 10);
	return (0);
}
*/

/** @brief main() function for ft_bzero.c
 * 
*/

/*
int main(void)
{
	char str[] = "Hello World!";
	printf("Original string: %s\n", str);
	ft_bzero(str, 7);
	printf("Modified string: %s\n", str);
	return (0);
}
*/


/** @brief main() function for ft_calloc.c
 * 
*/

/*
int main(void)
{
	char *ptr1 = ft_calloc(6, sizeof(int));
	char *ptr2 = calloc(6, sizeof(int));

	for (int i = 0; i < 6; i++)
		printf("%d ", ptr1[i]);
	printf("\n");
	for (int i = 0; i < 6; i++)
		printf("%d ", ptr2[i]);
	return (0);
}
*/


/** @brief main() function for ft_isalnum.c
 * 
*/

/*
int	main(void)
{
	printf("Original: %d\n", isalnum('9'));
	printf("Mine: %d\n", ft_isalnum('9'));
	return (0);
}
*/


/** @brief main() function for ft_isalpha.c
 * 
*/

/*
int	main(void)
{
	printf("Original: %d\n", isalpha('a'));
	printf("Mine: %d\n", ft_isalpha('a'));
	
	return (0);
}
*/


/** @brief main() function for ft_isascii.c
 * 
*/

/*
int	main(void)
{
	//printf("Original: %d\n", __isascii('"'));
	printf("Mine: %d\n", ft_isascii('"'));
	
	return (0);
}
*/


/** @brief main() function for ft_isdigit.c
 * 
*/

/*
int	main(void)
{
	printf("Original: %d\n", isdigit('3'));	// isdigit returns 2048 if true, 0 else
	printf("Mine: %d\n", ft_isdigit('3'));
	
	return (0);
}
*/


/** @brief main() function for ft_isprint.c
 * 
*/

/*
int	main(void)
{
	printf("Original: %d\n", isprint('~'));	
	printf("Mine: %d\n", ft_isprint('~'));

	return (0);
}
*/


/** @brief main() function for ft_itoa.c
 * 
*/

/*
int main(void)
{
    printf("%s\n", ft_itoa(2147483647));
    return (0);
}
*/


/** @brief main() function for ft_memchr.c
 * 
*/

/*
int	main(void)
{
	char	*ptr;
	char	str[] = "bonjourno";
	char	*ptr1;

	ptr1 = memchr(str, 'n', 2);
	printf("%s\n", ptr1);
	ptr = ft_memchr(str, 'n', 2);
	printf("%s\n", ptr);
	return (0);
}
*/


/** @brief main() function for ft_memcpy.c
 * 
*/

/*
int main(void)
{
	char src[] = "Hello World!", dest[] = "Hola Mundo!", *ptr;
	printf("Src: %s\n", src);
	printf("Original dest: %s\n", dest);
	ptr = (char *)ft_memcpy(dest, src, 7);
	printf("Modified dest: %s\n", ptr);
	return (0);
}
*/


/** @brief main() function for ft_memmove.c
 * 
*/

/*
int main() 
{
    char str1[] = "Hello,";
    char str2[] = " world!";

    printf("Original str1: %s\n", str1);
    ft_memmove(str1 + 6, str2, 7);
    printf("Modified str1: %s\n", str1);

    return 0;
}
*/


/** @brief main() function for ft_memset.c
 * 
*/

/*
int     main(void)
{
		char    str[] = "Hello World!";
		printf("Original string: %s\n", str);
		ft_memset(str, 'a', 7);
		printf("Modified string: %s\n", str);
		return (0);
}
*/


/** @brief main() function for ft_split.c
 * 
*/

/*
int main(void)
{
    char s[] = "abdhabhj";
    char c = 'h';
    char **str;
    int   i, j;

    i = 0;
    j = 0;
    str = ft_split(s, c);
    while (str[i][j])
    {
      while (str[i][j])
      {
        printf("%c ", str[i][j]);
        j++;
      }
      j = 0;
      printf("\n");
      i++;
    }
    free_mem(str);
    return (0);
}
*/


/** @brief main() function for ft_strchr.c
 * 
*/

/*
int main()
{
	char *ptr, str[] = "Holaa";

	ptr = ft_strchr(str, 'o');
	printf("%s\n", ptr);
	return (0);
}
*/


/** @brief main() function for ft_strdup.c
 * 
*/

/*
int	main(void)
{
	char str[5];
	char *str_ptr;
	char *src = NULL;
	int	i;

	str_ptr = &str[0];
	i = 0;
	while (i < 5)
	{
		str[i] = '0' + i;
		i++;
	}
	src = ft_strdup(str_ptr);

	printf("Original string in the stack: %s\n", str);
	printf("Copied string in the heap: %s\n", src);
	free(src);
	return (0);
}
*/


/** @brief main() function for ft_strjoin.c
 * 
*/

/*
int main(void)
{
	char    *str = ft_strjoin("Hello-", "world");
	printf("%s\n", str);
	free(str);
	return (0);    
}
*/


/** @brief main() function for ft_strlcat.c
 * 
*/

/*
int	main(void)
{
	char s1[23] = "Hello A", s2[] = "World!";
	printf("%ld\n", ft_strlcat(s1, s2, 15));
	printf("%s\n", s1);
	return (0);
}
*/


/** @brief main() function for ft_strlcpy.c
 * 
*/

/*
int	main(void)
{
	char str1[] = "Hello World!", str2[] = "abcdefg", str3[] = "Hello World!";
	printf("Original: %d\n", strlcpy(str3, str2, 5));
	printf("Original: %s\n", str3);
	printf("Mine: %ld\n", ft_strlcpy(str1, str2, 5));
	printf("Mine: %s\n", str1);
	return (0);
}
*/


/** @brief main() function for ft_strlen.c
 * 
*/

/*
int main()
{
	printf("Original: %d\n", strlen("Hello World!"));
	printf("Mine: %d\n", ft_strlen("Hello World!"));
}
*/


/** @brief main() function for ft_strncmp.c
 * 
*/

/*
int main(void)
{
	char str1[] = "abcdef", str2[] = "abc\375xx";
	size_t size = 5;
	printf("%d\n", ft_strncmp(str1, str2, size));

	char str3[] = "abcdef", str4[] = "abc\375xx";
	size_t size2 = 5;
	printf("%d\n", strncmp(str3, str4, size2));
	return (0);
}
*/


/** @brief main() function for ft_strnstr.c
 * 
*/

/*
int main(void)
{
	char *str = "Hello world!";
	char *find = "world";
	
	printf("%s\n", ft_strnstr(str, find, 5));
    return (0);
}
*/


/** @brief main() function for ft_strrchr.c
 * 
*/

/*
int main(void)
{
	char *ptr, str[] = "teste";

	ptr = ft_strrchr(str, '\0');
	printf("%p\n", ptr);
	return (0);
}
*/


/** @brief main() function for ft_strtrim.c
 * 
*/

/*
int main(void)
{
    char str[] = "eobeooaeoeo";
    char c[] = "eo";
    char *s;
    
    s = ft_strtrim(str, c);
    printf("%s\n", s);
    free(s);
    return (0);
}
*/


/** @brief main() function for ft_substr.c
 * 
*/

/*
int main(void)
{
	char    *str = ft_substr("Hello world!", 2, 10);
	printf("%s\n", str);
	free(str);
	return (0);
}
*/


/** @brief main() function for ft_tolower.c
 * 
*/

/*
int main()
{
	printf("%c\n", ft_tolower('A'));
	printf("%c\n", tolower('A'));
	return (0);
}
*/


/** @brief main() function for ft_toupper.c
 * 
*/

/*
int main()
{
	printf("%c\n", ft_toupper('a'));
	printf("%c\n", toupper('a'));
	return (0);
}
*/