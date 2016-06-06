#include <stdio.h>
#include <stdlib.h>
#include "structs.h"

void parse_csv(const char *content, char *output) {
    char* split;
    split = strtok(content,"\n");

    while (split != NULL) {
        printf("%s\n",split);
        split = strtok(NULL,"\r\n");
    }
}
