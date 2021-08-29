#include "get_next_line_bonus.h"

char	*ft_strchr(const char *str, int ch)
{
	size_t	i;
	size_t	t;

	i = ft_strlen((char *)str);
	t = 0;
	while (t <= i)
	{
		if (str[t] == (char)ch)
			return ((char *)(str + t));
		t++;
	}
	return (NULL);
}

size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize)
{
	size_t	i;
	size_t	k;

	if (!dst || !src)
		return (0);
	i = 0;
	k = ft_strlen((char *)src);
	if (dstsize == 0)
		return (k);
	while (i < dstsize - 1 && i < k)
	{
		dst[i] = src[i];
		i++;
	}
	dst[i] = '\0';
	return (k);
}

char	*ft_strdup(const char *s1)
{
	char	*buf;
	size_t	len;

	len = sizeof(char) * ft_strlen((char *)s1) + 1;
	buf = (char *)malloc(len);
	if (buf)
	{
		ft_strlcpy(buf, s1, len);
		return (buf);
	}
	return (NULL);
}

size_t	ft_strlcat(char *dst, const char *src, size_t n)
{
	size_t	i;
	size_t	k;
	size_t	p;

	i = ft_strlen(dst);
	if (n <= i)
		return (ft_strlen((char *)src) + n);
	k = ft_strlen((char *)src);
	p = 0;
	while (p < k && p < n - i - 1)
	{
		dst[i + p] = src[p];
		p++;
	}
	dst[i + p] = '\0';
	return (ft_strlen((char *)src) + i);
}

char	*ft_strjoin(char const *s1, char const *s2)
{
	char	*buf;
	size_t	l;
	size_t	n;

	if (!s1 && !s2)
		return (ft_strdup(""));
	if (s1 && !s2)
		return (ft_strdup(s1));
	if (!s1 && s2)
		return (ft_strdup(s2));
	l = ft_strlen((char *)s1) + ft_strlen((char *)s2) + 1;
	buf = (char *)malloc(sizeof(char) * l);
	if (buf)
	{
		n = l;
		while (n > 0)
			buf[--n] = '\0';
		ft_strlcat(buf, s1, l);
		ft_strlcat(buf, s2, l);
		return (buf);
	}
	return (NULL);
}
