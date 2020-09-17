CC = clang
NAME = libmx.a

utils = binary_search bubble_sort foreach hex_to_nbr itoa nbr_to_hex pow \
	print_strarr print_unicode printchar printint printstr quicksort sqrt

string = count_substr count_words del_extra_spaces del_strarr file_to_str get_char_index \
	get_substr_index replace_substr str_reverse strcat strcmp strcpy strdel strdup \
	strjoin strlen strncmp strncpy strndup strnew strsplit strstr strtrim swap_char

memory = memccpy memchr memcmp memcpy memmem memmove memrchr memset realloc

list = create_node list_size pop_back pop_front push_back push_front sort_list

extra = atoi printspaces clear_list count_char del_del  del_extra_whitespaces del_node_if foreach_list is_char is_digit_str \
	is_odd is_positive isalpha isdigit isspace len_of_array lenght_of_digit pop_index print_arr_int push_index swap \
	swap_data swap_int swap_int_el printerr

dirs = utils string memory list extra
FILES = $(foreach dir, $(dirs), $($(dir):%=$(dir)/mx_%))

SRC_DIR = src/
OBJ_DIR = obj/

SRC = $(FILES:%=$(SRC_DIR)%.c)
OBJ = $(FILES:%=$(OBJ_DIR)%.o)

WFLAGS = -Wall -Wextra -Werror -Wpedantic
LFLAGS = -Iinc

all: $(NAME)

$(OBJ_DIR):
	@mkdir $@ $(foreach dir, $(dirs), $@/$(dir))

$(OBJ_DIR)%.o: $(SRC_DIR)%.c
	@$(CC) -std=c11 -pipe $(WFLAGS) $(LFLAGS) -o $@ -c $<

$(NAME): $(OBJ_DIR) $(OBJ)
	@ar rcs $(NAME) $(OBJ)

clean:
	@rm -rf $(OBJ)

uninstall: clean
	@rm -rf $(NAME)

reinstall: uninstall all
