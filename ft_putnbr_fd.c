/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_putnbr_fd.c                                     :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: vgetman <vgetman@student.42.fr>            +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/10/10 10:42:44 by vgetman           #+#    #+#             */
/*   Updated: 2024/10/10 11:52:14 by vgetman          ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "libft.h"
void ft_putnbr_fd(int n, int fd)
{
    char c;
        if(n == -2147483648)
            write(fd, "-2147483648", 11);
        else if(n < 0)
        {
            write(fd, "-", 1);                
            n = -n;
            ft_putnbr_fd(n, fd);
        }
        else{
        if(n > 9)
        {
            ft_putnbr_fd(n / 10, fd);
            ft_putnbr_fd(n % 10, fd);
        }
        else
        {
        c = n + '0';
        write(fd, &c, 1);
        }
        }
    }
