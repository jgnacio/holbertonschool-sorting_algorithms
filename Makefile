CC = gcc
SRC = array_fun.c 2-selection_sort.c 3-quick_sort.c optimized-version_1-insertion_sort_list.c
MAIN = 3-main.c
DEPS = sort.h
NAME = executable-sort

CFLAGS = -Wall -Werror -Wextra -pedantic -std=gnu89 -g

all: $(NAME)

$(NAME): $(SRC) $(MAIN)
	$(CC) $(CFLAGS) -o $@ $(SRC) $(MAIN)

%.c: $(DEPS)

run:
	-valgrind -s --track-origins=yes --leak-check=full --show-leak-kinds=all ./$(NAME)

.PHONY: clean
clean: ; $(RM) ./$(NAME)
