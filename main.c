/*
AUTHOR: Joshua Wade West
HW #: HW2 Problem 1
SPECIFICATION: Write a program to find the mean of n numbers using array
FOR: CS 2413 Lab- Section 502
*/
#include <stdio.h>
#include<stdlib.h>

int main(void) {
  int length, i;//decleration of the int variables of length, i, and temp
  double sum = 0, temp;//declare the sum of all int and delcare the temp for variables
  char ans;// char variable used for the Yes/No question


  printf("How long do you want the array?  ");
  scanf("%d", &length);//input from user saking howmany objects they would like te array to hold

  double Array[length];//decleration of the array using the users input as lenth

  printf("\nWould you like to auto-fill the array with numbers? (Y/N) ");//i give the user the option as to wether they would like to automaticlly fill their array with random numbers
scanf(" %c", &ans);//input for Yes/No

printf("\n\n");

if(ans == 'y' || ans == 'Y'){//checks if user input is y or Y (meaning yes)
  for (i = 0; i < length; i++){//if anser is yes create a for loop to the length of the array
        Array[i] = (rand() % 50)%10;//fill one object of the array every loop
printf("\nArray[%d] = %.2f\n", i, Array[i]);}}//print out a single object of the array every loop



else{//if user inputs a char other than y or Y
  for (i = 0; i < length; i++){// creates a loop for the length of the array
printf("Insert a value for Array[%d] : ", i);// asks user to input a integer for an object of the array every loop
scanf("%lf", &temp);//int temp variable filled with the users desired int every loop
Array[i] = temp;//input the temp into a new array object every loop
  }
  


  for (i = 0; i < length; i++){//loop for the length of the array
printf("\nArray[%d] = %.2f\n", i, Array[i]);}//output an object in the array every loop
}

for (i = 0; i < length; i++){//loop for the length of the array
sum = sum + Array[i];//find sum by adding sum(0) to every array int
}

double mean = sum/length; //declare the mean by dividing the sum by the length of the array


printf("\n\nThe Mean = %.2f", mean);//outputs the mean value

printf("\n\n\nThe Program has Ended");//informs the user that the progam has ended
  return 0;
}
