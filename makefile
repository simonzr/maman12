myprog : my_set.o
	-gcc -g -ansi -Wall -pedantic my_set.o -o myprog
	
my_set.o : my_set.c
	-gcc -c -ansi -Wall -pedantic my_set.c -o my_set.o
