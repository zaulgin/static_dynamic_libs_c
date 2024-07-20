CC = gcc
CFLAGS =-Wall -Wextra -Werror

all: data_module_entry

data_module_entry: data_module_entry.o data_process.o data_io.o data_stat.o
	$(CC) data_module_entry.o data_process.o data_io.o data_stat.o -o data_module_entry -lm

data_module_entry.o: data_module_entry.c data_process.h ../data_libs/data_io.h
	$(CC) -c $(CFLAGS) data_module_entry.c -lm

data_io.o: ../data_libs/data_io.c ../data_libs/data_io.h
	$(CC) -c $(CFLAGS) ../data_libs/data_io.c -lm

data_process.o: data_process.c data_process.h ../data_libs/data_stat.h
	$(CC) -c $(CFLAGS) data_process.c -lm

data_stat.o: ../data_libs/data_stat.c ../data_libs/data_stat.h
	$(CC) -c $(CFLAGS) ../data_libs/data_stat.c -lm

clean:
	rm -rf *.o data_module_entry ../data_libs/*.o
