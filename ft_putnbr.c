
void ft_putnbr(int nbr)
{
	if (nbr >= 10 || nbr <= -10)
		ft_putnbr(nbr / 10);
	else if (nbr < 0)
		ft_putchar('-');
	ft_putchar(nbr % 10 * ((nbr < 0) ? -1 : 1) + '0');
}
