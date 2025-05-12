/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_printf.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: fragamez <fragamez@student.42malaga.com    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/12/23 13:47:40 by fragamez          #+#    #+#             */
/*   Updated: 2025/01/09 18:42:19 by fragamez         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <stdarg.h>
# include <unistd.h>

int	ft_printf(const char *format, ...);
int	ft_print_char(char c);
int	ft_print_string(char *str);
int	ft_puthex(unsigned long long nbr);
int	ft_puthex_m(unsigned long long nbr);
int	ft_putptr(void *ptr);
int	ft_putnbr(int n);
int	ft_putnbr_u(unsigned int n);

#endif
