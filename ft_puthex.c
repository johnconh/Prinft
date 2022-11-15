/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_puthex.c                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jdasilva <jdasilva@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2022/09/23 19:28:32 by jdasilva          #+#    #+#             */
/*   Updated: 2022/09/26 16:57:11 by jdasilva         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#include "ft_printf.h"

int	ft_puthex(size_t arg, char format)
{
	int	len;

	len = 0;
	if (format == 'p' || format == 'x')
	{
		if (arg >= 16)
			len += ft_puthex(arg / 16, format);
		len += ft_putchar("0123456789abcdef"[arg % 16]);
	}
	if (format == 'X')
	{
		if (arg >= 16)
			len += ft_puthex(arg / 16, format);
		len += ft_putchar("0123456789ABCDEF"[arg % 16]);
	}
	return (len);
}
