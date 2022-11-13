# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: groman-l <groman-l@student.42barcel>       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/10/30 12:48:15 by groman-l          #+#    #+#              #
#    Updated: 2022/11/12 10:26:13 by groman-l         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a
HEADER = libft.h
C_FLAGS = -Wall -Wextra -Werror
RM = rm -f

SRC_FILES = ft_isalpha	ft_isdigit	ft_memchr	ft_tolower \
			ft_isalnum	ft_isascii	ft_isprint 	ft_strchr \
			ft_toupper	ft_memset	ft_bzero	ft_memcpy \
			ft_memmove	ft_memcmp	ft_strlen	ft_strlcat \
			ft_strlcpy	ft_strchr	ft_strrchr	ft_strncmp \
			ft_strnstr	ft_atoi		ft_calloc	ft_strdup \
			ft_substr	ft_strjoin	ft_strtrim

SRC = $(addsuffix .c, $(SRC_FILES))

OBJ = $(SRC:.c=.o)


INCLUDE = -I ./

all: $(NAME)

%.o: %.c $(HEADER)
	$(CC) $(C_FLAGS) $(INCLUDE) -c $< -o $@

$(NAME):: $(OBJ) $(HEADER)
		ar -rcs $(NAME) $(OBJ)
		@echo "All compilated."

$(NAME)::
		 @echo "Everything ok."

.PHONY: all clean fclean re

clean:
		$(RM) $(OBJ)
fclean: clean
		$(RM) $(NAME)
		@echo "All gone"

re: fclean all
