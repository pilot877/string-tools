#include "string-tools.h"

#include <malloc.h>

char *reverse_string(char *input_string) {
    int str_len = string_length(input_string);
    char *new_str = malloc(str_len + 1);
    for (int x = str_len; x >= 0; x--) {
        new_str[str_len-x-1] = input_string[x];
    }
    new_str[str_len + 1] = '\0';
    return new_str;
}

int string_length(char *input_string) {
    int str_len;
    for (str_len = 0; input_string[str_len] != '\0'; str_len++);
    return str_len;
}
