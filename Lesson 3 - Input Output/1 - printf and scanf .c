#include <stdio.h>
#include <stdlib.h>

int main(){
    char yourName[100];
    int yourAge;
    printf("Hello, my name is Clara\n");
    printf("What's your name?\n");
    scanf("%s", &yourName);
    printf("How old are you, %s?\n", yourName);
    scanf("%d", &yourAge);
    printf("So, your name is %s and you are %d years old\n\n", yourName, yourAge);
    printf("Nice to meet you!");
    return 0;
}