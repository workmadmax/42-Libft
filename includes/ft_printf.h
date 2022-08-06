#ifndef FT_PRINTF_H
# define FT_PRINTF_H

# include <unistd.h>
# include <stdarg.h>

size_t  handle_str(const char *str);
size_t  handle_char(char c);
size_t  handle_num(long long nbr);
size_t  handle_hex(unsigned long x, int prefix, size_t cap);
size_t  handle_ptr(void *ptr, size_t *len);
size_t  ft_parse(va_list args, char format);
int     ft_printf(const char *format, ...);

#endif