#include <stdio.h>
#include <stdlib.h>

// Lesson 2 - Part 2
int main(){
    // variables
    char characterName[] = "Claudia";
    int characterAge = 24;
    // the main story
    printf("I have a crush, her name is %s\n",characterName); // %s is for string
    printf("She is %d years old\n",characterAge); // %d is for integer
    printf("She told me if she likes her %s\n",characterName); // %s is for string
    printf("But I think she did not like being %d",characterAge); // %d for integer
    return 0;
}