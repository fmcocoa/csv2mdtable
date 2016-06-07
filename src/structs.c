#include <stdlib.h>

struct csv_cell {
    char *text;
    struct csv_cell *next;
};

struct csv_line {
    struct csv_cell *cell;
    struct csv_line *next;
};

struct csv_body {
    struct csv_line *line;
};

struct csv_cell * new_cell() {
    return NULL;
}

struct csv_line * new_line() {
    return NULL;
}

struct csv_body * new_body() {
    return NULL;
}

void free_cell(struct csv_cell *cell) {
    struct csv_cell *next;

    while (cell != NULL) {
        next = cell->next;
        // free cell.text
        cell = next;
    }
}

void free_line(struct csv_line *line) {
    struct csv_line *next;

    while (line != NULL) {
        next = line->next;
        free_cell(line->cell);
        line = next;
    }
}

void free_body(struct csv_body *body) {
    free_line(body->line);
}
