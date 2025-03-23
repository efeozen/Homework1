#include <stdio.h>
#include <stdlib.h>

void computeHomeValueVoid(void);

int main(void) {
   
    computeHomeValueVoid();

    return 0;
}

void computeHomeValueVoid(void) {
    int popularity, size, homeValue;
    
    printf("Welcome to the house price calculator\n");
    
	
	printf("Enter the popularity of the house: ");
    scanf("%d", &popularity);
    printf("Enter the size of the house: ");
    scanf("%d", &size);

    homeValue = (popularity * popularity * popularity + size * size) * 10000;

    printf("\nThe value of the house is: %d\n", homeValue);
}
