CC=cc
CCFLAGS=-Wall -Wextra -Werror
AR=ar
ARFLAGS=rcs
NAME=libft.a
SRCS=ft_printlst.c ft_strcpy.c ft_seq_int_arr.c
OBJS=$(SRCS:.c=.o)
BONUS_SRCS=
BONUS_OBJS=$(SRCS:.c=.o)
RM=rm -f


all: $(NAME)

$(NAME): $(OBJS)
	$(AR) $(ARFLAGS) $@ $?

bonus: $(BONUS_OBJS)
	$(AR) $(ARFLAGS) $(NAME) $?

%.o: %.c
	$(CC) $(CCFLAGS) -c $< -o $@

clean:
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME)

re: fclean all

compile:
	${CC} ${FLAGS} *.c -o a.out
	./a.out ${param1} ${param2} ${param3}
	rm -rf *.out

clean:
	rm -rf *.out