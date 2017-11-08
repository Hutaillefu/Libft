#include "libft.h"

char	*ft_strncat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	y;

	y = ft_strlen(dst);
	i = 0;
	while (i < n && src[i])
	{
		dst[y] = src[i];
		i++;
		y++;
	}
	dst[y] = '\0';
	return (dst);
}
