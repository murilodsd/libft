CC=cc
CCFLAGS=-Wall -Wextra -Werror
AR=ar
ARFLAGS=rcs
NAME=libft.a
SRCS=ft_itoa.c ft_putstr_fd.c ft_strmapi.c \
ft_atoi.c  ft_memchr.c ft_split.c ft_strncmp.c \
ft_bzero.c  ft_memcmp.c ft_strchr.c ft_strnstr.c \
ft_calloc.c ft_memcpy.c ft_strdup.c ft_strrchr.c \
ft_isalnum.c ft_memmove.c ft_striteri.c ft_strtrim.c \
ft_isalpha.c ft_memset.c ft_strjoin.c ft_substr.c \
ft_isascii.c ft_putchar_fd.c ft_strlcat.c \
ft_isdigit.c ft_putendl_fd.c ft_strlcpy.c ft_tolower.c \
ft_isprint.c ft_putnbr_fd.c ft_strlen.c ft_toupper.c
OBJS=$(SRCS:.c=.o)
BONUS_SRCS= ft_lstadd_front.c ft_lstadd_back.c ft_lstclear.c \
ft_lstdelone.c ft_lstiter.c ft_lstlast.c ft_lstmap.c \
ft_lstnew.c ft_lstsize.c
BONUS_OBJS=$(BONUS_SRCS:.c=.o)
INCLUDE=./
RM=rm -f


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

bonus: $(OBJS) $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $?

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@ -I $(INCLUDE)

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

run: $(NAME) main.c
	$(CC) $(CCFLAGS) main.c $(NAME) -I $(INCLUDE)
	./a.out

compile:
	${CC} ${FLAGS} *.c -o a.out
	./a.out ${param1} ${param2} ${param3}
	rm -rf *.out