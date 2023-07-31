NAME = push_swap

SRC = push_swap.c check_arg.c push.c swap.c rotate.c index.c reverseRotate.c radix.c sort.c utils.c utils2.c
OBJ = $(SRC:.c=.o)

CC = gcc


-DCMAKE_BUILD_TYPE=Debug

LIBFT_DIR = libft
LIBFT = $(LIBFT_DIR)/libft.a

all: $(NAME)

$(NAME): $(OBJ) $(LIBFT)
	$(CC) -o $(NAME) $^

$(LIBFT):
	make -C $(LIBFT_DIR)

%.o: %.c
	$(CC) $(CFLAGS) -c $< -o $@

clean:
	rm -f $(OBJ)
	make -C $(LIBFT_DIR) clean

fclean: clean
	rm -f $(NAME)
	make -C $(LIBFT_DIR) fclean

re: fclean all

.PHONY: all clean fclean re
