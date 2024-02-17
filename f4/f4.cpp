/*
* FILE : f4.cpp
* PROJECT : FOCUS_ASSIGNMENT4
* PROGRAMMER : AAKHIL JAYAPRASAD
* FIRST VERSION : 2024-02-16
* DESCRIPTION : Program that gets integers from the
  user and determines which is the highest value.
*/

#include<stdio.h>


int getNum(void); //Prototype for getNum

int main(void)
{
    
    int array[10] = { 1, 2, 3, 4, 5, 6, 7, 8, 9,10}; //Initialized array for 10 integers
    int index = 0;

    printf("Please enter 10 integers, pressing ENTER after each one:\n");

    
    for (int i = 0; i < 10; ++i)
    {
        
        array[i] = getNum(); //To get number from the user and store it in the current array element
        if (array[i] > array[index]) 
        {
            index = i;
        }
    }

    printf("The highest value is %d at index %d", array[index], index); //To print the highest value and its index

    return 0;
}



#pragma warning(disable: 4996) // required by Visual Studio
int getNum(void)
{
	/* the array is 121 bytes in size; we'll see in a later lecture how we can
	improve this code */
	char record[121] = { 0 }; /* record stores the string */
	int number = 0;
	/* NOTE to student: brace this function consistent with your others */
	/* use fgets() to get a string from the keyboard */
	fgets(record, 121, stdin);
	/* extract the number from the string; sscanf() returns a number
	* corresponding with the number of items it found in the string */
	if (sscanf(record, "%d", &number) != 1)
	{
		/* if the user did not enter a number recognizable by
		* the system, set number to -1 */
		number = -1;
	}
	return number;
}
