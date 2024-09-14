#include <stdio.h>
#include <string.h>

int main() {
    char name[10];
    int age;
    printf("Enter your name:"); 

    // MUST define (length - 1) in scanf 
    scanf("%9[^\n]", name);

    // can use fgets as below
    // fgets(name, sizeof(name), stdin);

    // remove New line character from the end of the string
    name[strcspn(name, "\n")] = 0;

    printf("Enter your age:");
    // cannot use fgets because fgets only can read strings
    scanf("%d", &age);

    // printf("Enter your name & age:");
    // scanf("%9s %d", name, &age);

    printf("Your name is %s, age: %d\n", name, age);
    return 0;
}