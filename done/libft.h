/* ************************************************************************** */
/*                                                                            */
/*                                                        :::      ::::::::   */
/*   libft.h                                            :+:      :+:    :+:   */
/*                                                    +:+ +:+         +:+     */
/*   By: murilodsd <murilodsd@student.42.fr>        +#+  +:+       +#+        */
/*                                                +#+#+#+#+#+   +#+           */
/*   Created: 2024/04/18 14:52:36 by mde-souz          #+#    #+#             */
/*   Updated: 2024/04/21 20:13:33 by murilodsd        ###   ########.fr       */
/*                                                                            */
/* ************************************************************************** */

#ifndef LIBFT_H
# define LIBFT_H

# include <unistd.h>
# include <stdlib.h>
# include <stddef.h>

/*Outputs the character ’c’ to the given file descriptor.*/
void	ft_putchar_fd(char c, int fd);
/*Outputs the string ’s’ to the given file descriptor.*/
void	ft_putstr_fd(char *s, int fd);
/* Applies the function ’f’ on each character of
the string passed as argument, passing its index
as first argument. Each character is passed by
address to ’f’ to be modified if necessary. */
void	ft_striteri(char *s, void (*f)(unsigned int, char*));
/* The strlen() function calculates the length of the string pointed to by
       s, excluding the terminating null byte ('\0').
       The strlen() function returns the number of bytes in the string pointed
       to by s.*/
size_t	ft_strlen(const char *s);
/*Outputs the string 's' to the given file descriptor followed by a newline.*/
void	ft_putendl_fd(char *s, int fd);
/*Outputs the integer ’n’ to the given file descriptor.*/
void	ft_putnbr_fd(int n, int fd);
/* checks  for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
cales, there may be additional characters for which isalpha() is
true—letters which are neither uppercase nor lowercase. */
int		ft_isupper(int c);
/*Allocates (with malloc(3)) and returns a new string,
which is the result of the concatenation of ’s1’ and ’s2’.*/
char	*ft_strjoin(char const *s1, char const *s2);
/* This function checks if the given character is a digit (0-9).*/
int		ft_isdigit(int c);
/* checks for any printable character including space. */
int		ft_isprint(int c);
/* This function checks if the given character is either 
an alphabetic character or a digit.*/
int		ft_isalnum(int c);
/* checks  for an alphabetic character; in the standard "C" locale,
it is equivalent to (isupper(c) ||  islower(c)).   In  some  lo‐
cales, there may be additional characters for which isalpha() is
true—letters which are neither uppercase nor lowercase. */
int		ft_isalpha(int c);
/* The  memset()  function  fills  the  first  n  bytes of the memory area
* pointed to by s with the constant byte c. 
* The memset() function returns a pointer to the memory area s.*/
void	*ft_memset(void *s, int c, size_t n);
/* The  bzero()  function  erases  the  data  in the n bytes of the memory
starting at the location pointed to by s, by writing zeros (bytes  con‐
taining '\0') to that area.*/
void	ft_bzero(void *s, size_t n);
/* The  ft_memcpy()  function  copies  n bytes from memory area src to memory
area dest.  The memory areas must not overlap.  Use memmove(3)  if  the
memory areas do overlap.
The ft_memcpy() function returns a pointer to dest.*/
void	*ft_memcpy(void *dest, const void *src, size_t n);
/* The  memmove()  function  copies n bytes from memory area src to memory
area dest.  The memory areas may overlap: copying takes place as though
the  bytes in src are first copied into a temporary array that does not
overlap src or dest, and the bytes are then copied from  the  temporary
array to dest.*/
void	*ft_memmove(void *dest, const void *src, size_t n);
size_t	ft_strlcpy(char *dst, const char *src, size_t size);
size_t	ft_strlcat(char *dst, const char *src, size_t size);
#endif