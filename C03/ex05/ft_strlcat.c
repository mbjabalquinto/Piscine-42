/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_strlcat.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/22 10:04:27 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/23 10:25:38 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

int	ft_strlen(char *src)
{
	int	i;

	i = 0;
	while (src[i] != '\0')
	{
		i++;
	}
	return (i);
}

unsigned int	ft_strlcat(char *dest, char *src, unsigned int size)
{
	unsigned int	i;
	unsigned int	j;
	unsigned int	size_src;
	unsigned int	size_dest;

	size_src = ft_strlen(src);
	size_dest = ft_strlen(dest);
	j = size_dest;
	i = 0;
	if (size <= size_dest)
		return (size + size_dest);
	while (src[i] != '\0' && i < size - size_dest - 1)
	{
		dest[j] = src[i];
		i++;
		j++;
	}
	dest[j] = '\0';
	return (size_src + size_dest);
}
/*
int	main(void)
{
	unsigned int	size;
	char dest[14] = "Hola ";
	
	size = ft_strlcat(dest, "caracola", 14);
	printf("%d", size);
	return (0);
}*/
