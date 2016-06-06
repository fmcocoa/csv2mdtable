#include <stdio.h>
#include <stdlib.h>
#include "parser.h"

const char *str = "ID,Name,Age\n1,Tom,13\n2,Jim,14\n3,Ken,15";

int main(int argc, char **argv) {
    char output[10000];

    parse_csv(str, output);

    printf("Source:\n\n%s\n", str);
    return 0;
}
