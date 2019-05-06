/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   rush00.c                                           :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: jagilfix <marvin@42.fr>                    +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2019/03/31 19:26:56 by jagilfix          #+#    #+#             */
/*   Updated: 2019/03/31 19:47:22 by jagilfix         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#define CORNER_TL '/'
#define CORNER_TR '\\'
#define HORIZ_LINE '*'
#define VER_LINE '*'
#define CORNER_BL '\\'
#define CORNER_BR '/'

void	ft_putchar(char c);

void	printline(int x, char a, char b, char c)
{
	int i;

	if (x <= 0)
		return ;
	i = 1;
	ft_putchar(a);
	while (++i < x)
		ft_putchar(b);
	if (x > 1)
		ft_putchar(c);
	ft_putchar('\n');
}

void	rush(int x, int y)
{
	int line;

	if (y <= 0)
		return ;
	line = 1;
	printline(x, CORNER_TL, HORIZ_LINE, CORNER_TR);
	while (++line < y)
		printline(x, VER_LINE, ' ', VER_LINE);;
	if (y > 1)
		printline(x, CORNER_BL, HORIZ_LINE, CORNER_BR);
}
