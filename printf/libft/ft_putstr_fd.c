/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putstr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jwadding <jwadding@student.hive.fi>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/11/19 14:08:02 by jwadding          #+#    #+#             */
/*   Updated: 2023/11/19 15:35:37 by jwadding         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */
#include "libft.h"
#include <unistd.h>

void	ft_putstr_fd(char *s, int fd)
{
	if (s)
		write(fd, s, ft_strlen(s));
}
/*
#include "libft.h"
#include <fcntl.h>
 #include <unistd.h>

int main(void)
{
    char str1 = "Testing ft_putstr_fd function!\n";
    char str2 = "Another string to test.\n";

    // Test with standard output (fd = 1)
    ft_putstr_fd(str1, 1); // Print str1 to stdout
    ft_putstr_fd(str2, 1); // Print str2 to stdout

    // Test with a file (for example, test.txt)
    int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
    if (fd < 0)
   	{
        // Handle error if unable to open file
        return 1;
    }

    ft_putstr_fd(str1, fd); // Write str1 to the file
    ft_putstr_fd(str2, fd); // Write str2 to the file

    close(fd); // Close the file descriptor

    return 0;
}
*/
/*
#include <fcntl.h>
#include <unistd.h>
int	main(void)
{
	char s1[]="asddfasdf\n";
	char s2[]="zxcvzxxvc\n";

	ft_putstr_fd(s1, 1);
	ft_putstr_fd(s2, 1);

//	int fd = open("test.txt", 0_WRONLY|0_CREAT,0644);
 // Test with a file (for example, test.txt)
    int fd = open("test.txt", O_WRONLY | O_CREAT, 0644);
    if (fd < 0) {
        // Handle error if unable to open file
        return 1;
    }
//	if(fd < 0)
//		return 1;

	ft_putstr_fd(s1, fd);
	ft_putstr_fd(s2, fd);

	close(fd);

	return 0;

}
*/
