/* Exercise 1 - Calculations

   Write a C program to input marks of two subjects. Calculate and print the average of the two marks. */

#include <stdio.h>

int main() {
  int sub1,sub2,total;
	float avg;
	
	sub1 = 88;
	sub2 = 92;
	
	total = sub1 + sub2;
	
	avg = total / 2.0;
	
	printf("Average marks of two subjects : %.2f\n", avg);
  
  return 0;
}

