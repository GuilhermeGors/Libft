NAME = libft.a
SRC = ft_striteri.c ft_itoa.c ft_split.c ft_memmove.c ft_memcpy.c ft_atoi.c ft_strncmp.c ft_isalnum.c ft_strlen.c ft_isalpha.c ft_bzero.c ft_memset.c ft_calloc.c ft_strrchr.c ft_memcmp.c ft_strnstr.c
OBJ = $(SRC:.c=.o)
CC = gcc
CFLAGS = -Wall -Wextra -Werror

all: $(NAME)

$(NAME): $(OBJ)
	ar rcs $(NAME) $(OBJ)

clean:
	rm -f $(OBJ)

fclean: clean
	rm -f $(NAME)

re: fclean all
