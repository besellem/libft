/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   ft_string.h                                        :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: besellem <besellem@student.42.fr>          +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2021/04/19 11:15:52 by besellem          #+#    #+#             */
/*   Updated: 2022/08/25 17:44:57 by besellem         ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef FT_STRING_H
# define FT_STRING_H

# include <stdlib.h>
# include <unistd.h>
# include "ft_stdint.h"

int			ft_bcmp(const void *b1, const void *b2, size_t len);
void		ft_bcopy(const void *src, void *dst, size_t len);
void		ft_bzero(void *s, size_t n);
void		*ft_memccpy(void *dst, const void *src, int c, size_t n);
void		*ft_memchr(const void *s, int c, size_t n);
int			ft_memcmp(const void *s1, const void *s2, size_t n);
void		*ft_memcpy(void *dst, const void *src, size_t n);
void		*ft_memdel(void **ptr);
void		*ft_memmove(void *dst, const void *src, size_t len);
void		*ft_memset(void *b, int c, size_t len);

int			ft_strisall(const char *str, int (*f)(int));
int			ft_strisalnum(const char *str);
int			ft_strisalpha(const char *str);
int			ft_strisascii(const char *str);
int			ft_strisdigit(const char *str);
int			ft_strisprint(const char *str);

int			ft_incharset(const char *charset, int c);
int			ft_stridx(const char *haystack, const char *needle);
size_t		ft_stroc(const char *haystack, char c);

char		*ft_basename(const char *path);
char		*ft_index(const char *s, int c);
char		*ft_rindex(const char *s, int c);
char		*ft_strchr(const char *s, int c);
char		*ft_strrchr(const char *s, int c);
char		*ft_strstr(const char *haystack, const char *needle);
char		*ft_strnstr(const char *haystack, const char *needle, size_t len);
char		*ft_strpbrk(const char *s, const char *charset);
char		*ft_strcasestr(const char *haystack, const char *needle);

char		*ft_strsep(char **stringp, const char *delim);
char		*ft_strclean(char *s, const char *charset);
char		*ft_strnclean(char *s, const char *charset, size_t n);

char		*ft_strcat(char *s1, const char *s2);
char		*ft_strncat(char *s1, const char *s2, size_t n);
size_t		ft_strlcat(char *dst, const char *src, size_t dstsize);
char		*ft_strcpy(char *dst, const char *src);
char		*ft_strncpy(char *dst, const char *src, size_t len);
size_t		ft_strlcpy(char *dst, const char *src, size_t dstsize);
size_t		ft_strlen(const char *s);
size_t		ft_strnlen(const char *s, size_t maxlen);
size_t		ft_strspn(const char *s, const char *accept);
size_t		ft_strcspn(const char *s, const char *reject);
char		*ft_strmapi(char const *s, char (*f)(unsigned int, char));
int			ft_strcmp(const char *s1, const char *s2);
int			ft_strncmp(const char *s1, const char *s2, size_t n);

char		*ft_strupcase(char *str);
char		*ft_strlowcase(char *str);
char		*ft_strcapitalize(char *str);

char		*ft_strdup(const char *s1);
char		*ft_strndup(const char *s1, size_t n);
char		*ft_substr(char const *s, unsigned int start, size_t len);
char		*ft_strtrim(char const *s1, char const *set);
char		*ft_epur_str(const char *str);
char		**ft_split(char const *s, char c);
char		**ft_strsplit(const char *str, const char *charset);
char		*ft_strjoin(char const *s1, char const *s2);
char		*ft_strsjoin(size_t size, char **strs, char *sep);

size_t		ft_strslen(char **s);
void		*ft_strsfree(size_t size, char **s);

#endif
