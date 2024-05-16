NAME = push_swap

CC = cc
CFLAGS = -Wall -Wextra -Werror
EXEC = push

SRC = 		push_swap.c \
			parce.c \
			set_final_mark.c \
			instruction.c \
			ft_lstnew.c \
			stack.c \
			utils.c \
			ft_lstadd_back.c \
			ft_lstdelone.c \
			ft_lstclear.c \
			ft_atoi.c \
			ft_lstsize.c \
			instructions2.c \
			utils_two.c\
			ft_lstadd_front.c \
			ft_lstlast.c \
			ft_strjoind.c \
			sort.c \
			ft_split.c \
			libft_utils.c

OBJ = $(SRC:.c=.o)

all : $(NAME)
	


$(NAME) : $(OBJ)

.c.o :
	$(CC) $(CFLAGS) -c $< -o $@

fclean : clean
	rm -rf $(OBJ) 
clean :
	rm -rf $(NAME)
re : fclean all