/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strncpy.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: afelix-d <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/18 16:54:14 by afelix-d          #+#    #+#             */
/*   Updated: 2023/12/18 18:22:01 by afelix-d         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include <unistd.h>
//#include <stdio.h>
//#include <string.h>
//#include <stdlib.h>

char	*ft_strncpy(char *dest, char *src, unsigned int n)
{
	unsigned int	i;

	i = 0;
	while (src[i] != '\0' && i < n)
	{
		dest[i] = src[i];
		i++;
	}
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}
/*
int	main(void)
{
	char	*src1;
	char	*src2;
	char	*dest1;
	char	*dest2;
	unsigned int	len;

	src1 = (char *) malloc(30);
	strcpy(src1, "Careful with the errors!!");
	src2 = (char *) malloc(30);
	strcpy(src2, "Careful!!");
	dest1 = (char *) malloc(30);
	dest2 = (char *) malloc(30);

	len = 17;
	printf("src1:%s\n", src1);
	printf("src2:%s\n", src2);
	printf("dest1:%s\n", ft_strncpy(dest1, src1, len));
	printf("dest1 with strncpy:%s\n", strncpy(dest1, src1, len));
	printf("dest2:%s\n", ft_strncpy(dest2, src2, len));
	printf("dest2 with strncpy:%s\n", strncpy(dest2, src2, len));
	free(src1);
	free(src2);
	free(dest1);
	free(dest2);
	return (0);
}
*/
