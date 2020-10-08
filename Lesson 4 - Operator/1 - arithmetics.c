#include <stdio.h>
#include <stdlib.h>

// Arithmetics Operator (+,-,*,/,%)

int main(){
    int a,b;
    printf("Please input two numbers (a and b)\n");
    scanf("%d %d", &a, &b);
    int c = a + b;
    printf("The result of a + b is %d\n",c);
    int d = a - b;
    printf("The result of a - b is %d\n",d);
    int e = a * b;
    printf("The result of a * b is %d\n",e);
    int f = a / b;
    printf("The result of a / b is %d\n",f);
    int g = a % b;
    printf("The result of a mod b is %d\n",g);
    return 0;
}