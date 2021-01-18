#include "ft_printf.h"

void	print_c(t_flags cur, char c, int *count, char *tmp)
{
	if (!*tmp)
	{
		write(1, &c, 1);
		*count += 1;
		return ;
	}
	if (cur.minus)
		tmp[0] = c;
	else
		tmp[cur.first - 1] = c;
	while (*tmp)
	{
		write(1, tmp, 1);
		*count += 1;
	}
}
