/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_display.c                                       :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: ana-cmar <ana-cmar@student.42porto.com>    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2026/10/30 20:28:42 by ana-cmar          #+#    #+#             */
/*   Updated: 2026/10/30 20:40:10 by ana-cmar         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
/*
	Create a program called ft_display_file that displays, on the standard 
	output, only the content of the file given as argument.
	
	The submission directory should have a Makefile with the following 
	rules: all, clean, fclean. The binary will be called ft_display_file.
	
	The malloc function is forbidden. You can only do this exercise by 
	declaring a fixed-sized array.
	
	All files given as arguments will be valid.
	Error messages have to be displayed on their reserved output followed
	by a new line.
	
	If no argument is given, it should display:
		File name missing.

	If there is more than one argument, it should display:
		Too many arguments.
	
	If the file cannot be read, it should display:
		Cannot read file.
*/

#include <unistd.h>
#include <fcntl.h>

int	ft_display_file(char *str)
{
	int		fd;
	int		bytes;
	char	buffer[100];

	fd = open(str, O_RDONLY);
	if (fd == -1)
	{
		write(2, "Cannot read file.\n", 18);
		return (1);
	}
	bytes = read(fd, buffer, sizeof(buffer));
	while (bytes > 0)
	{
		write(1, buffer, bytes);
		bytes = read(fd, buffer, sizeof(buffer));
	}
	if (bytes == -1)
	{
		write(2, "Cannot read file.\n", 18);
		close(fd);
		return (1);
	}
	close(fd);
	return (0);
}

int	main(int argc, char **argv)
{
	if (argc == 1)
	{
		write(2, "File name missing.\n", 19);
		return (1);
	}
	if (argc == 2)
	{
		return (ft_display_file(argv[1]));
	}
	if (argc > 2)
	{
		write(2, "Too many arguments.\n", 20);
		return (1);
	}
	return (0);
}
