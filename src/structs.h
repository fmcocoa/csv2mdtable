#ifndef __STRUCTS_H
#define __STRUCTS_H

struct csv_cell;
struct csv_line;
struct csv_body;

struct csv_cell * new_cell();
struct csv_line * new_line();
struct csv_body * new_body();

void free_cell();
void free_line();
void free_body();

#endif  // __STRUCTS_H
