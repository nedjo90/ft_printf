SRCS=./srcs/ft_printf.c\
./srcs/ft_lstsplit.c\
./srcs/ft_lst_display.c\
./srcs/ft_replace.c\
./srcs/ft_print_char.c\
./srcs/ft_print_str.c\
./srcs/ft_print_ptr.c\
./srcs/ft_print_percent.c\
./srcs/ft_print_address.c\
./srcs/ft_ul_to_hexa.c\
./srcs/ft_print_itoa.c\
./srcs/ft_uitoa.c\
./srcs/ft_print_uitoa.c\
./srcs/ft_uint_to_hex.c\
./srcs/ft_print_hex_low_high.c\
./srcs/ft_strrev.c\
./srcs/ft_iskey.c\

CC :=gcc
CPPFLAGS := -I includes
CFLAGS :=-Wall -Wextra -Werror
OBJS :=$(SRCS:.c=.o)
RM :=rm -rf
AR :=ar rcs
NAME :=libftprintf.a


all: $(NAME)

$(NAME): $(OBJS)
	make -C ./libft
	mv ./libft/libft.a .
	mv libft.a $(NAME)
	$(AR) $@ $^

clean:
	make clean -C ./libft
	$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 
	make fclean -C libft/

re: fclean all
