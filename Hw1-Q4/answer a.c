#include <stdio.h>
#include <stdlib.h>

int computeHomeValue(int popularity, int size);

int main(void) {
    int popularity, size, homeValue;

    printf("Welcome to the house price calculator\n");
    printf("Enter the popularity of the house: ");
    scanf("%d", &popularity);
    printf("Enter the size of the house: ");
    scanf("%d", &size);
    
	homeValue = computeHomeValue(popularity, size);
    
	printf("\nThe value of the house is: %d\n", homeValue);
    return 0;
}
	int computeHomeValue(int popularity, int size) {
    return (popularity * popularity * popularity + size * size) * 10000;
}
