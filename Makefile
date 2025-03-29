##
## EPITECH PROJECT, 2024
## cuddle
## File description:
## Makefile
##

NAME	=	liblist.a

SRCS	=	create_list.c \
			create_node.c \
			free_list.c \
			push_front.c \
			push_back.c \

CFLAGS	=	-Wall -Wextra -Werror -lm

OBJS	=	$(SRCS:.c=.o)

all	:	$(NAME)

$(NAME)	:	$(OBJS)
		ar rc $(NAME) $(OBJS)

clean	:
		rm -rf $(OBJS)

fclean	:	clean
		rm -rf $(NAME)
		rm -rf debug

re	:	fclean all

debug	:	CFLAGS += -g3
debug	:
		gcc src/main.c $(CFLAGS) $(SRCS) -o debug -lm
