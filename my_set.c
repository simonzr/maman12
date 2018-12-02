#include <stdio.h>
#include "my_set.h"
#define SET_MAX_SIZE 64

/* 
This program creates a set (data base of unique int values, arranged according their order of appearance) typed in by the user. The set size is maximum 64 values.
Every value typed in by the user (until EOF) is compared to the existing set : if it's not in the set, it's added to it. 
When EOF (ctrl+D) is typed in, the loop ends and prints all the values that are present in the buffer, and then prints the final set.

I decided to choose an array as data structure because it seemed to me the simplest way considering the fact that :
	- we know the max size of the set
	- the values have to appear in the set in the order they were typed in
So it seemed to me it was the easiest way to do.
*/

int main() {

	int set[SET_MAX_SIZE];			/*array that contains the set*/
	int setActualSize = 0;			/*size of the set*/
	int *setSize = &setActualSize;	/*pointer to the variable that contains the size of the set*/

    print_set(set, setSize);
    get_set(set, setSize);
    print_set(set, setSize);
    printf("\nThe set is %d values long\n", *setSize);

	return 0;
}


/* 
Gets the input in loop from stdin (until EOF is syped in), prints every number typed in, and adds it to the set if necessary 
*/
void get_set(int array[], int* arraySize) {

    int temp = 0;

    printf("What numbers do you want to add to the set ? \n");

	
	while (scanf("%d", &temp) != EOF) {
	
		printf("\nYou have entered : %d \n", temp);
		
		if (checkSet(array, temp, arraySize) == 0 ) {
			addToSet(array, temp, arraySize);
			}
		}
}


/*
Prints the set by printing all the values of the array (the for ends when the index is equal to the size set given in parameter)
If the size is 0, tells that the set is empty
*/
void print_set(int array[], int* arraySize) {

	int i = 0;

    if (*arraySize == 0) {
        printf("The set is now empty\n");
        
    } else {    
        printf("\nThe set is : \n");

        for (i; i<*arraySize; i++) {
			printf("%d ", array[i]);
        }
    }

    printf("\n");
}


/* 
Checks if a number is already in the set or not by comparing it to every value in the set (the for ends when the index is equal to the size set given in parameter)
returns 1 if the number is already in the set
returns 0 if the number is not in the set
*/
int checkSet(int array[], int num, int* arraySize){ /*checks if num is in the array*/

    int i=0;

    for (i; i<*arraySize; i++) {
    
        if (num == array[i]) {
        
        	printf("%d is already in the set\n", num);
            return 1; /*if num is in the array*/
        }        
    }
    
    return 0; /*if num is not in the array*/

}

/* 
Adds a number to the set if it's not full, and updates the value that contains the set size
*/
void addToSet(int array[], int num, int* arraySize) {
	
	if ((*arraySize) >= SET_MAX_SIZE) {
		printf("Sorry, the set is full\n");
		
		} else {
			array[*arraySize] = num;
			*arraySize += 1;
		}		
		
} /* end of main */
