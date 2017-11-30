# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: lilam <marvin@42.fr>                       +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2017/11/28 09:30:55 by lilam             #+#    #+#              #
#    Updated: 2017/11/28 09:37:40 by lilam            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

NAME = libft.a


all:
	gcc -c -Wall -Werror -Wextra ft_*.c
	ar rc libft.a ft_*.o libft.h
	ranlib libft.a

clean:
	rm -rf *.o

fclean: clean 
	rm -rf $(NAME)

re: fclean all
