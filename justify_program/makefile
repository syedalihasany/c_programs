main.exe: justify.o some_functions.o
		gcc -o main.exe justify.o some_functions.o
justify.o: justify.c some_functions.h
		gcc -c justify.c
some_functions.o: some_functions.c some_functions.h
		gcc -c some_functions.c