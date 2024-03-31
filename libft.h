#ifndef LIBFT_H_
#define LIBFT_H_

int     ft_atoi(char *str);
int     ft_isacii(char c);
int     ft_isalnum(char c);
int     ft_isalpha(char c);
int     ft_isdigit(char c);
int     ft_isprint(char c);
char    *ft_itoa(int c);
int     ft_strlcat(char *dst, const char *src, int size);
int     ft_strlcpy(const char *src, char *dst, int size);
int     ft_strlen(char *str);
int     ft_strncmp(const char *s1, const char *s2, int n);
char    *ft_strnstr(char *big, char *little, int n);
char    *ft_strrchr(const char *s, int c);
char    *ft_strchr(const char *str, int c);
void    ft_tolower(char c);
void    ft_toupper(char c);
void    *ft_memset(void *array, int value, int hmany);
void    ft_bzero(void *array, int lim);
char    *ft_strchr(const char *str, int c);
void    *ft_memcpy(void *dest, const void *src, int n);
void    *ft_memmove(void *dest, const void *src, int n);
void    *ft_memchr(const void *str, int tofind, int n);
int     ft_memcmp(const void *str1, const void *str2, int n);
void    *ft_calloc(int el_count, int el_size);
char    *ft_strdup(const char *src);

#endif