# Makefine

CFLAGS=-c -g -O3 -fPIC -Wall -Werror -Wsign-compare -Isrc
LDFLAGS=-g -O3 -Wall -Werror
CC=gcc

CSV2MDTABLE_SRC=\
	src/parser.o \
	src/structs.o

all:		csv2mdtable

.PHONY:		all clean

# executables

csv2mdtable:	examples/csv2mdtable.o $(CSV2MDTABLE_SRC)
	$(CC) $(LDFLAGS) $^ -o $@


# housekeeping

clean:
	rm -f src/*.o examples/*.o
