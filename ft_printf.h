/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkul <tkul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 00:53:39 by tkul              #+#    #+#             */
/*   Updated: 2023/12/02 00:53:39 by tkul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>
# include <stdlib.h>

int	ft_printf(const char *format, ...);
int	ft_putchar(char c, int i);
int	ft_putstr(char *s, int i);
int	ft_putnbr(long n, int i);
int	ft_putnbr_u(unsigned int n, int i);
int	ft_putadress(void *p, int i);
int	ft_puthex(unsigned int x, int i, char format);

#endif