MAKEFLAGS += --silent

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
./srcs/ft_strrev.c

CC :=clang
CPPFLAGS := -I includes
CFLAGS :=-Wall -Wextra -Werror
MEM :=-fsanitize=address
OBJS :=$(SRCS:.c=.o)
RM :=rm -rf
AR :=ar rcs
NAME :=libftprintf.a

DEF_COLOR = \033[0;39m
GRAY = \033[0;90m
RED = \033[0;91m
GREEN = \033[0;92m
YELLOW = \033[0;93m
BLUE = \033[0;94m
MAGENTA = \033[0;95m
CYAN = \033[0;96m
WHITE = \033[0;97m

.DEFAULT_GOAL := run

all: norm $(NAME)

$(NAME): $(OBJS)
	@echo "$(YELLOW)Compilation libftprintf$(DEF_COLOR)"
	@make -C ./libft
	@mv ./libft/libft.a .
	@mv libft.a $(NAME)
	$(AR) $@ $^
	@echo "$(GREEN)Done$(DEF_COLOR)"

clean:
	@make clean -C ./libft
	@$(RM) $(OBJS)

fclean: clean
	$(RM) $(NAME) 
	@make fclean -C libft/

re: fclean all

norm:
	@norminette srcs/*.c includes/*.h libft/*.c libft/*.h

run: re
	@echo "$(YELLOW)Compilation test with libftrpintf$(DEF_COLOR)"
	$(CC) $(CFLAGS) test.c $(NAME) -I includes
	@echo "$(GREEN)Done$(DEF_COLOR)"
	@./a.out > test 
	@codesign -s - --entitlements tmp.entitlements -f a.out 2>/dev/null || true
	@leaks -q  --fullContent -atExit -- ./a.out > leaks.txt 2>/dev/null || true
	$(CC) -w reel.c $(NAME) -I includes
	@./a.out > reel
	@./mem_check.sh
	@make fclean
	@rm -rf test reel
	@rm -rf a.out
