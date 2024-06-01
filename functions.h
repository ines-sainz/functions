/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   functions.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: isainz-r <isainz-r@student.42madrid>       +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/05/30 10:05:31 by isainz-r          #+#    #+#             */
/*   Updated: 2024/06/01 11:55:39 by isainz-r         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FUNCTIONS_H
# define FUNCTIONS_H

# include <unistd.h>
# include <stdio.h>
# include <limits.h>
# include <stdint.h>

void	first_word(int argc, char **argv);
void	fizzbuzz(void);
void	ft_putstr(char *str);
char	*ft_strcpy(char *dest, char *src);
void	ft_swap(int *a, int *b);
void	repeat_alpha(int argc, char **argv);
void	rev_print(int argc, char **argv);
void	rot_13(int  argc, char **argv);
void	rotone(int argc, char **argv);
void	search_and_replace(int argc, char **argv);
void	ulstr(int argc, char **argv);

void	alpha_mirror(int argc, char **argv);
void	camel_to_snake(int argc, char **argv);
void    do_op(char *first_number, char *sign, char *second_number);
int		ft_strcmp(char *s1, char *s2);
size_t	ft_strcspn(const char *s, const char *reject);
char	*ft_strpbrk(const char *s1, const char *s2);
char	*ft_strrev(char *str);
size_t	ft_strspn(const char *s, const char *accept);

void	ft_putnbr(int number);
int		ft_atoi(const char *str);
char	*ft_strchr(const char *s, int c);

int		all_len(char *str);

#endif
