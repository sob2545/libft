# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: sesim <sesim@student.42seoul.kr>           +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2022/03/09 11:16:18 by sesim             #+#    #+#              #
#    Updated: 2022/03/21 16:48:32 by sesim            ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

CC = gcc
CFLAGS = -Wall -Wextra -Werror
AR = ar rc
RM = rm -f
SRCS = ft_atoi.c \
	   ft_bzero.c \
	   ft_calloc.c \
	   ft_isalnum.c \
	   ft_isalpha.c \
	   ft_isascii.c \
	   ft_isdigit.c \
	   ft_isprint.c \
	   ft_itoa.c \
	   ft_memcpy.c \
	   ft_memccpy.c \
	   ft_memchr.c \
	   ft_memcmp.c \
	   ft_memmove.c \
	   ft_memset.c \
	   ft_strchr.c \
	   ft_strrchr.c \
	   ft_strdup.c \
	   ft_striteri.c \
	   ft_strjoin.c \
	   ft_strlcpy.c \
	   ft_strlcat.c \
	   ft_strlen.c \
	   ft_strmapi.c \
	   ft_strncmp.c \
	   ft_strnstr.c \
	   ft_substr.c \
	   ft_split.c \
	   ft_toupper.c \
	   ft_tolower.c \
	   ft_putchar_fd.c \
	   ft_putstr_fd.c \
	   ft_putendl_fd.c \
	   ft_putnbr_fd.c
	   #ft_strtrim.c \#
OBJS = $(SRCS:.c=.o)
INCLUDE = libft.h
NAME = libft.a

all : $(NAME)

$(NAME) : $(OBJS)
	@$(AR) $@ $^
	@echo "Makefile Complete"

.c.o : $(SRCS)
	@$(CC) $(CFLAGS) -c -I $(INCLUDE) -o $@ $^

bonus : $(BONUS_OBJS)
	

clean :
	@$(RM) $(OBJS)
	@echo "Object files deleted"

fclean : clean
	@$(RM) $(NAME)
	@echo "All makefiles deleted"

re : fclean all

.PHNOY : all clean fclean re
