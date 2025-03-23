#include <stdio.h>
#include <stdlib.h>

int main (void)
{
	int popularity;
	int size;
	int computeHomeValue;	

	printf("welcome to calculator of house price\n");
	printf("firstly of all enter the popularity of the house >");
	scanf("%d", &popularity);
	printf("finally enter the size of the house >");
	scanf("%d",&size);
	
	computeHomeValue=( popularity*popularity*popularity + size*size )*10000;
	
	printf("\nthe value of the house is:%d", computeHomeValue);
	
	return 0;
}
