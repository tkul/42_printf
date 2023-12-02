/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   main.c                                             :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: tkul <tkul@student.42.fr>                  +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2023/12/02 04:07:25 by tkul              #+#    #+#             */
/*   Updated: 2023/12/02 04:15:04 by tkul             ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"
#include <stdio.h>

int main()
{
	int sayi = -3778387;
	void *ptr = &sayi;
	unsigned int u = 4294967295;
	unsigned int x =  111;
	
	ft_printf("%%\n");
	printf("%%\n");

	ft_printf("%d\n", sayi);
	printf("%d\n", sayi);

	ft_printf("%p\n", ptr);
	printf("%p\n", ptr);

	ft_printf("%u\n", u);
	printf("%u\n", u);

	ft_printf("%x\n", x);
	printf("%x\n", x);
}