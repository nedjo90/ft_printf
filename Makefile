SRCS=ft_create_add_back.c \
ft_display_lst.c \
ft_change_operator.c \
ft_print_lstclear.c \
ft_printf.c \
ft_isoperator.c \
ft_lst_split.c \
ft_printf_lstnew.c \
ft_printf_lstadd_back.c

CC=gcc
CFLAGS=-Wall -Wextra -Werror
OBJ=$(SRCS:.c=.o)
AR=ar rcs
RM=rm -rf
NAME=libftprintf.a

default: test

all: $(NAME)

test: $(NAME)
	make clean
	$(CC) $(CFLAGS) main.c $(NAME)
	rm -rf $(NAME)
	clear
	./a.out

$(NAME): $(OBJ)
	make -C libft/
	mv ./libft/libft.a ./$(NAME)
	$(AR) $@ $^

clean:
	$(RM) $(OBJ)
	make clean -C libft/

fclean: clean
	$(RM) $(NAME)
	make fclean -C libft/

re: fclean all

.PHONY: all clean fclean re
