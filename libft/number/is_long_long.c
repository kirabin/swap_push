#include "libft.h"

bool	is_long_long(char *str)
{
	long long	res;
	int			sign;
	char		c;

	res = 0;
	sign = 1;
	while (is_space(*str))
		str++;
	if (*str == '-' || *str == '+')
		sign = (*str++ == '+') * 2 - 1;
	while (*str && is_digit(*str))
	{
		c = *str++ - '0';
		if (sign == 1 && res > LLONG_MAX / 10)
			return (false);
		if (sign == 1 && res == LLONG_MAX / 10 && c > 7)
			return (false);
		if (sign == -1 && res < LLONG_MIN / 10)
			return (false);
		if (sign == -1 && res == LLONG_MIN / 10 && c > 8)
			return (false);
		res = res * 10 + c * sign;
	}
	return (true);
}
