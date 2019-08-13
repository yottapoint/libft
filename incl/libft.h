/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: gly <marvin@42.fr>                         +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2018/11/07 14:29:36 by gly               #+#    #+#             */
/*   Updated: 2019/04/19 14:25:48 by gly              ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H
# include <string.h>
# define LEFT 0x01
# define RIGHT 0x02

typedef struct		s_list
{
	void			*content;
	size_t			content_size;
	struct s_list	*next;
}					t_list;

void				*ft_memset(void *s, int c, size_t n);
void				ft_bzero(void *s, size_t n);
void				*ft_memcpy(void *dest, const void *src, size_t n);
void				*ft_memccpy(void *dest, const void *src, int c, size_t n);
void				*ft_memmove(void *dest, const void *src, size_t n);
void				*ft_memchr(const void *s, int c, size_t n);
int					ft_memcmp(const void *s1, const void *s2, size_t n);
void				*ft_memalloc(size_t size);
void				ft_memdel(void **ap);

int					ft_isalpha(int c);
int					ft_isdigit(int c);
int					ft_isalnum(int c);
int					ft_isascii(int c);
int					ft_isprint(int c);
int					ft_toupper(int c);
int					ft_tolower(int c);

char				*ft_strnew(size_t size);
void				ft_strdel(char **as);
void				ft_strclr(char *s);
void				ft_striter(char *s, void (*f)(char *));
void				ft_striteri(char *s, void (*f)(unsigned int, char *));
char				*ft_strmap(const char *s, char (*f)(char));
char				*ft_strmapi(const char *s, char (*f)(unsigned int, char));
int					ft_strequ(const char *s1, const char *s2);
int					ft_strnequ(const char *s1, const char *s2, size_t n);
char				*ft_strsub(const char *s, unsigned int start, size_t len);
char				*ft_strjoin(const char *s1, const char *s2);
char				*ft_strjoin_three(char *first, char *econd, char *third);
char				*ft_strtrim(const char *s);
char				**ft_strsplit(const char *s, char c);
int					ft_free_strtab(char **tab);
int					ft_strcmp(const char *s1, const char *s2);
int					ft_strncmp(const char *s1, const char *s2, size_t n);
int					ft_atoi(const char *str);
size_t				ft_strlen(const char *str);
char				*ft_strdup(const char *str);
char				*ft_strndup(const char *str, size_t n);
char				*ft_strndupfree(char *str, size_t n);
char				*ft_strcpy(char *dst, const char *src);
char				*ft_strncpy(char *dst, const char *src, size_t len);
char				*ft_strcat(char *s1, const char *s2);
char				*ft_strncat(char *s1, const char *s2, size_t n);
size_t				ft_strlcat(char *dst, const char *src, size_t size);
char				*ft_strchr(const char *s, int c);
char				*ft_strrchr(const char *s, int c);
char				*ft_strstr(const char *haystack, const char *needle);
char				*ft_strnstr(const char *haystack, const char *needle,
		size_t len);
void				ft_putchar(char c);
void				ft_putstr(const char *s);
void				ft_putendl(const char *s);
void				ft_putnbr(int n);
void				ft_putchar_fd(char c, int fd);
void				ft_putstr_fd(const char *s, int fd);
void				ft_putendl_fd(const char *s, int fd);
void				ft_putnbr_fd(int n, int fd);
void				ft_print_strtab(char **tab);
int					ft_strskipc(const char *s, char c);
char				*ft_strjoinfree(char *s1, char *s2, char flag);
char				*ft_strchrstr(const char *s, const char *c);
char				**ft_cpy_strtab(const char **src);

t_list				*ft_lstnew(void const *content, size_t content_size);
void				ft_lstdelone(t_list **alst, void (*del)(void *, size_t));
void				ft_lstdel(t_list **alst, void (*del)(void *, size_t));
void				ft_lstadd(t_list **alst, t_list *new);
void				ft_lstiter(t_list *lst, void (*f)(t_list *elem));
t_list				*ft_lstmap(t_list *lst, t_list *(*f)(t_list *elem));
t_list				*ft_lstlast(t_list *alst);
t_list				*ft_lstpop(t_list **alst);
void				ft_lstpush(t_list *alst, t_list *elem);

char				*ft_convertbase(int n, char *base);
char				*ft_itoa(int n);
char				*ft_ll2a(long long n);
char				*ft_ull2a(unsigned long long n);
int					ft_intabs(int n);
int					ft_intlen_base(int n, int base);
size_t				ft_size_tlen_base(size_t n, size_t base);
size_t				ft_longlonglen_base(long long nb, int base);
size_t				ft_ulllen_base(unsigned long long nb, unsigned int base);
char				*ft_size_t2a_base(size_t nb, char *base);
char				*ft_ull2a_base(unsigned long long n, char *base);
long long			ft_intpart_double(long double nb);
long double			ft_round_double(long double nb, size_t acc);

void				ft_sort_inttab(int *tab, int n);
int					ft_int_is_bigger(int first, int second);
int					ft_int_is_smaller(int first, int second);

int					get_next_line(const int fd, char **line);

#endif
