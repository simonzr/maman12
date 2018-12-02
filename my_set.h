/*
Gets the int values typed in by the user, until EOF is typed in.
@param : an array in which to store the values
@param : a pointer to an int variable containing the size of the array
*/
void get_set(int array[], int* arraySize);


/*
Prints all the values that are in the set, according to the order of their first appearance.
@param : an array that contains the set
@param : a pointer to an int variable containing the size of the array
*/
void print_set(int set[], int* arraySize);


/*
Checks if a value is already present in the set or not.
@param : an array that contains the set
@param : the value that has to be checked 
@param : a pointer to an int variable containing the size of the array

@return : 1 if the number is already in the set
@return : 0 if the number is not in the set
*/
int checkSet(int array[], int num, int* arraySize);


/*
Adds a value to the set.
@param : an array that contains the set
@param : the value to add to the set 
@param : a pointer to an int variable containing the size of the array
*/
void addToSet(int array[], int num, int* arraySize);
