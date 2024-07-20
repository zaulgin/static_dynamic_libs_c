CC=gcc
CFLAGS=-c -Wall -Wextra -Werror
LDFLAGS=-lm
EXECUTABLE_3=Quest_3
EXECUTABLE_5=Quest_5
EXECUTABLE_6=Quest_6
SOURCES_3=main_executable_module.c sort.c ../yet_another_decision_module/decision.c ../data_module/data_process.c ../data_libs/data_io.c ../data_libs/data_stat.c
SOURCES_5=main_executable_module.c sort.c ../yet_another_decision_module/decision.c ../data_module/data_process.c ../data_libs/data_io.c
SOURCES_6=main_executable_module.c sort.c ../yet_another_decision_module/decision.c ../data_libs/data_io.c ../data_libs/data_stat.c
OBJECTS_3=$(SOURCES_3:.c=.o)
OBJECTS_5=$(SOURCES_5:.c=.o)
OBJECTS_6=$(SOURCES_6:.c=.o)
LD_LIBRARY_PATH=~/T09D15-1/src/main_executable_module
PREFIX=~/T09D15-1/build/

.PHONY: rebuild

build_with_dynamic: data_process.so $(SOURCES_6) $(EXECUTABLE_6) 

$(EXECUTABLE_6): $(OBJECTS_6)
	$(CC) -Wall -Wextra -Werror $(OBJECTS_6) $(LD_LIBRARY_PATH)/data_process.so -o $(PREFIX)$(EXECUTABLE_6) $(LDFLAGS)

data_process.so: ../data_module/data_process.o
	$(CC) $(CFLAGS) -fPIC ../data_module/data_process.c
	$(CC) $(CFLAGS) -fPIC ../data_module/data_process.h
	$(CC) -shared ../data_module/data_process.o -o data_process.so

build_with_static: data_stat.a $(SOURCES_5) $(EXECUTABLE_5)

$(EXECUTABLE_5): $(OBJECTS_5)
	$(CC) -Wall -Wextra -Werror $(OBJECTS_5) -L. -l:data_stat.a -o $(PREFIX)$(EXECUTABLE_5) $(LDFLAGS)

data_stat.a: ../data_libs/data_stat.o
	ar rc data_stat.a ../data_libs/data_stat.o
	ranlib data_stat.a

rebuild:
	$(MAKE) clean
	$(MAKE) all

all: $(SOURCES_3) $(EXECUTABLE_3)

$(EXECUTABLE_3): $(OBJECTS_3)
	$(CC) -Wall -Wextra -Werror $(OBJECTS_3) -o $(PREFIX)$(EXECUTABLE_3) $(LDFLAGS)

.c.o:
	$(CC) $(CFLAGS) $(LDFLAGS) $< -o $@

clean:
	rm -rf *.o ../data_libs/*.o ../data_module/*.o ../yet_another_decision_module/*.o
