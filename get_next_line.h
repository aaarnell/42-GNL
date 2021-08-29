#ifndef GET_NEXT_LINE_H
# define GET_NEXT_LINE_H

# ifndef BUFFER_SIZE
#  define BUFFER_SIZE 32
# endif

# include <stdlib.h>
# include <stdio.h>
# include <unistd.h>

size_t	ft_strlen(const char *str);
char	*ft_strchr(const char *str, int ch);
size_t	ft_strlcpy(char *dst, const char *src, size_t dstsize);
char	*ft_strdup(const char *s1);
size_t	ft_strlcat(char *dst, const char *src, size_t n);
char	*ft_strjoin(char const *s1, char const *s2);
int		ft_fr(char **str);
char	*ft_nstr(size_t cnt);
void	ft_lnrec(char **st, char **ln, int fd);
int		get_next_line(int fd, char **line);

#endif
