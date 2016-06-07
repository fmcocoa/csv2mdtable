#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "structs.h"

void format_value(const char *cell) {
}

void parse_cell(const char *line) {
    printf("Line: %s\n", line);
}

void parse_line(const char *content) {
    const char *head = content;

    while (head) {
        const char *tail = strchr(head, '\n');
        int len = tail ? (tail - head) : strlen(head);
        char *current_line = (char *) malloc(len + 1);

        if (current_line) {
            memcpy(current_line, head, len);
            current_line[len] = '\0';
            parse_cell(current_line);
            free(current_line);
        } else {
            printf("malloc() failed?!\n");
            exit(1);
        }

        head = tail ? (tail + 1) : NULL;
    }
}

void parse_csv(const char *content, char *output) {
    parse_line(content);
}
