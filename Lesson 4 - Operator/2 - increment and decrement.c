#include <stdio.h>
#include <stdlib.h>

// Increment and Decrement Operators
/*
Prefix (++x or --x)
Postfix (x++ or x--)
*/

// Assigment Operators
/*
+= increment then assign
-= decrement then assign
*/

int main(){
    
    int x = 0, y = 5;
    printf("%d %d\n", x++,y--);
    printf("%d %d\n", x++,y--);
    printf("%d %d\n", x++,y--);
    printf("%d %d\n", x++,y--);
    printf("%d %d\n", x++,y--);
    printf("%d %d\n", x++,y--);
    x -= 3;
    y += 3;
    printf("%d %d\n", x,y);
    return 0;
}