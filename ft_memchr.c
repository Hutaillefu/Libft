#include "libft.h"

void	*ft_memchr(const void *s, int c, size_t n)
{
	char	*iterator;
	size_t	i;

	iterator = (unsigned char *)s;
	i = 0;
	while (i < n)
	{
		if (iterator[i] == (unsigned char)c)
			return (&iterator[i]);
		i++;
	}
	return (NULL);
}
