my_set : my_set.o
	-gcc -g -ansi -Wall -pedantic my_set.o -o my_set
	
my_set.o : my_set.c my_set.h
	-gcc -c -ansi -Wall -pedantic my_set.c -o my_set.o
