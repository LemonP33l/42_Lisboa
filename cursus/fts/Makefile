# **************************************************************************** #
#                                                                              #
#                                                         :::      ::::::::    #
#    Makefile                                           :+:      :+:    :+:    #
#                                                     +:+ +:+         +:+      #
#    By: eduferna <eduferna@student.42lisboa.com    +#+  +:+       +#+         #
#                                                 +#+#+#+#+#+   +#+            #
#    Created: 2024/04/20 10:26:10 by eduferna          #+#    #+#              #
#    Updated: 2024/05/15 15:34:39 by eduferna         ###   ########.fr        #
#                                                                              #
# **************************************************************************** #

SRCS	=	ft_atoi.c ft_bzero.c ft_calloc.c ft_isalpha.c ft_isalnum.c\
		ft_isascii.c ft_isdigit.c ft_isprint.c ft_itoa.c ft_memchr.c ft_memcmp.c \
		ft_memcpy.c ft_memmove.c ft_memset.c ft_putchar_fd.c ft_putendl_fd.c \
		ft_putnbr_fd.c ft_putstr_fd.c ft_split.c ft_strchr.c ft_strdup.c \
		ft_striteri.c ft_strjoin.c ft_strlcat.c ft_strlcpy.c ft_strlen.c \
		ft_strmapi.c ft_strncmp.c ft_strnstr.c ft_strrchr.c ft_strtrim.c \
		ft_substr.c ft_tolower.c ft_toupper.c

BONUS	=	ft_lstadd_back.c ft_lstadd_front.c ft_lstclear.c ft_lstdelone.c \
		ft_lstiter.c ft_lstlast.c ft_lstmap.c ft_lstnew.c ft_lstsize.c

OBJS	=	$(SRCS:.c=.o)

BONUS_OBJS	=	$(BONUS:.c=.o)
#Replace the extension '.c' with '.o';
#'.o' contains machine-readable code generated by compiling source files;

CC	=	cc
#Specify the compiler;
#'cc', Default compiler;

CFLAGS = -Wall -Werror -Wextra
#Specify compiler flags for warnings and errors;

RM	=	rm -f
#Specify command to remove files;
#'-f', '--force', ignore nonexistent files and arguments;

NAME	=	libft.a
#Specify output file name;

AR	=	ar rcs
#Specify command to create library 'ar' (archive);
#'rcs' (replace,create,index);
#Replace files with same name in arch;
#Create new arch if it doesn't exist;
#Make an index (symbol table) for the arch, improve access time when linking;

.c.o:
	$(CC) -c -o $@ $< $(CFLAGS)
#Pattern rule for generating object files;
#('$<') source file, ('$@') object file;

all:	$(NAME)
$(NAME):	$(OBJS)
	$(AR)	$(NAME)	$(OBJS)
#Target and build rules;
#Default target, depends on '$(NAME)';

bonus:	$(BONUS_OBJS)
	$(AR)	$(NAME)	$(BONUS_OBJS)
	touch bonus
#Target and build rules;
#Builds library with bonus functions, depends on '$(BONUS_OBJS)';
#Touch bonus to create bonus file to check re-links;

clean:
	$(RM)	$(OBJS)	$(BONUS_OBJS) bonus
#Typically used to remove only generated object files and other temp files;

fclean:	clean
	$(RM)	$(NAME)
#"Full clean", remove all generated files plus executables and archs;

re:	fclean	all
#"Rebuild" / "Recompile", short for cleaning the build dir and rebuilding;

.PHONY:	all	clean	fclean	re 
#Declare targets as "phony" / "fake";
#Declare targets do not represent actual files, but rather actions / tasks;
