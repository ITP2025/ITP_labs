#include <stdio.h>
#include "calc.h"


int main(){
    int sum;
    int difference;
    int i = 10;
    int j = 15;

    sum = add(i, j);
    difference = subtract(i, j);

    printf("Hello, World!\n");
    printf("The sum of i and j = %d\n", sum);
    printf("The difference of i and j = %d\n", difference);
}
