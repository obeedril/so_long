NAME	=	so_long

NAME_B	=	so_long_bonus

SRC		= 	so_long.c get_next_line.c fill_map.c \
			ft_keycodes.c ft_close.c check_map.c type_error.c  \
			check_name_map.c check_rectangle.c check_quantity_pce.c \
			move_right.c move_left.c move_down.c \
			move_up.c pictures.c render.c win_or_not.c

SRC_B	=	so_long_bonus.c get_next_line_bonus.c fill_map_bonus.c \
			ft_keycodes_bonus.c ft_close_bonus.c check_map_bonus.c type_error_bonus.c  \
			check_name_map_bonus.c check_rectangle_bonus.c check_quantity_pce_bonus.c \
			move_right_bonus.c move_left_bonus.c move_down_bonus.c \
			move_up_bonus.c pictures_bonus.c render_bonus.c draw_map_bonus.c \
			map_parser_bonus.c \

OBJ		=	${addprefix sources/, ${SRC:.c=.o}} 

OBJ_B	=	${addprefix bonus/, ${SRC_B:.c=.o}} 

LIBDIR		= 	libft

LIBFT_LIB	=	$(LIBDIR)/libft.a

LIB			=	-L$(LIBDIR) -lft

CC			= gcc

FLAGS		= -Wall -Wextra -Werror -I

FLAGS_MLX	= -lmlx -framework OpenGL -framework AppKit

RM			= rm -f

%.o: %.c	Makefile so_long.h so_long_bonus.h
			$(CC) $(FLAGS)$(LIBDIR) -Iincludes -c $< -o $@

$(NAME):	$(LIBFT_LIB) $(OBJ)
			$(CC) $(FLAGS)$(LIBDIR) $(OBJ) $(FLAGS_MLX) -o $(NAME) $(LIB)

all: ${NAME}

bonus:		$(LIBFT_LIB) $(OBJ_B) 
			$(CC) $(FLAGS)$(LIBDIR) $(OBJ_B) $(FLAGS_MLX) -o $(NAME_B) $(LIB)

$(LIBFT_LIB):	tools ;

tools:
			make -C $(LIBDIR);

clean:
			make clean -C $(LIBDIR)
			$(RM) $(OBJ) $(OBJ_B)

fclean:		clean
			make fclean -C $(LIBDIR)
			$(RM) $(NAME) $(NAME_B)

re: fclean all

rebonus:	fclean bonus

.PHONY: all clean fclean re bonus rebonus tools