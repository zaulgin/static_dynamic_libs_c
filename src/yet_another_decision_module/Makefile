CC = gcc
CFLAGS =-Wall -Wextra -Werror

all: yet_another_decision_module_entry

yet_another_decision_module_entry: yet_another_decision_module_entry.o decision.o data_io.o data_stat.o
	$(CC) yet_another_decision_module_entry.o decision.o data_io.o data_stat.o -o yet_another_decision_module_entry -lm

yet_another_decision_module_entry.o: yet_another_decision_module_entry.c decision.h ../data_libs/data_io.h
	$(CC) -c $(CFLAGS) yet_another_decision_module_entry.c

data_io.o: ../data_libs/data_io.c ../data_libs/data_io.h
	$(CC) -c $(CFLAGS) ../data_libs/data_io.c

decision.o: decision.c decision.h ../data_libs/data_stat.h
	$(CC) -c $(CFLAGS) decision.c

data_stat.o: ../data_libs/data_stat.c ../data_libs/data_stat.h
	$(CC) -c $(CFLAGS) ../data_libs/data_stat.c

clean:
	rm -rf *.o yet_another_decision_module_entry ../data_libs/*.o
