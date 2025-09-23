/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: mjabalqu <mjabalqu@student.42malaga.com>   +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2025/09/20 13:29:03 by mjabalqu          #+#    #+#             */
/*   Updated: 2025/09/21 18:07:43 by mjabalqu         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>
#include "variables.h"

#define BUFFER_SIZE 1000

int	ft_strlen(char *str)
{
	int	i;

	i = 0;
	while (str[i] != '\0')
	{
		i++;
	}
	return (i);
}

int	ft_find_value(char *str, t_struct *dictionary, int index_line)
{
	int i = 0;
	while (i < index_line)
	{
		if (dictionary[i].key[0] == str[0])
		{
			return (i);
		}	
		i++;
	}
	return (i);
}

void    ft_file(char *str)
{
    int file;
    char buffer[BUFFER_SIZE];
    int bytes_read;
    int count_files = 0;
    int file_index = 0;

    /* First read to count lines */
    file = open("numbers.dict", O_RDONLY);
    if (file == -1)
    {
        write(1, "Cannot open the file.\n", 22);
        return;
    }
    while ((bytes_read = read(file, buffer, BUFFER_SIZE)) > 0)
    {
        while (file_index < bytes_read)
        {
            if (buffer[file_index] == '\n')
                count_files++;
            file_index++;
        }
    }
    close(file);
    // To reserve memory for the dictionary
    t_struct *dictionary = malloc(count_files * sizeof(t_struct));
    if (!dictionary)
    {
        write(1, "Error reserve memory.\n", 22);
        return;
    }
    // Second read to process lines
    file = open("numbers.dict", O_RDONLY);
    if (file == -1)
    {
        write(1, "Cannot open the file.\n", 22);
        free(dictionary);
        return;
    }
    char line[100];
    int index_line = 0;
    int pos = 0;

    while ((bytes_read = read(file, buffer, BUFFER_SIZE)) > 0)
    {   
    int index = 0;
    while (index < bytes_read)
    {
        if (buffer[index] == '\n' || pos >= 99)
        {
            line[pos] = '\0';
            /* Line process */
            int key_len = 0;
            int value_len = 0;
            int k = 0;
            while (line[k])
            {
                if (line[k] >= '0' && line[k] <= '9')
                    key_len++;
                else if (line[k] >= 'a' && line[k] <= 'z')
                    value_len++;
                k++;
            }

            dictionary[index_line].key = malloc(key_len + 1);
            dictionary[index_line].value = malloc(value_len + 1);

            int k_index = 0;
            int v_index = 0;
            k = 0;
            while (line[k])
            {
                if (line[k] >= '0' && line[k] <= '9')
                    dictionary[index_line].key[k_index++] = line[k];
                else if (line[k] >= 'a' && line[k] <= 'z')
                    dictionary[index_line].value[v_index++] = line[k];
                k++;
            }
            dictionary[index_line].key[k_index] = '\0';
            dictionary[index_line].value[v_index] = '\0';

            index_line++;
            pos = 0;
        }
        else
        {
            line[pos++] = buffer[index];
        }
        index++;
    }
}
close(file);

pos = ft_find_value(str, dictionary, index_line);
if (pos != -1)
{
    write(1, dictionary[pos].value, ft_strlen(dictionary[pos].value));
    write(1, "\n", 1);
}
else
{
    write(1, "Key not found\n", 15);
}

/* free memory */
int i = 0;
while (i < index_line)
{
    free(dictionary[i].key);
    free(dictionary[i].value);
    i++;
}
    free(dictionary);
}

void	ft_string_start(char *str)
{
	int	 len;
	len = ft_strlen(str);
	len--;
	ft_file(str);

}

int	main(int argc, char **argv)
{
	if (argc == 2)
	{
		ft_string_start(argv[1]);
	}
	else
	{
		write(1, "Invalid arguments", 17);
		return (0);
	}
	//ft_file();
	return (0);
}
