#include <stdio.h>
#include <string.h>

// use static variable to store reversed string
char *reverse(char *str)
{
    int len = strlen(str);
    static char reversed[100];
    reversed[len] = '\0';
    for (int i = 0; i < len; i++)
    {
        reversed[len - i - 1] = str[i];
    }

    return reversed;
}

void reverse2(char *str)
{
    int len = strlen(str);
    for (int i = 0; i < len / 2; i++)
    {
        int j = len - i - 1;
        char temp = str[i];
        str[i] = str[j];
        str[j] = temp;
    }
}

int main()
{
    char input[20];
    printf("Enter a string to reverse:\n");
    fgets(input, 20, stdin);
    printf("Reversed string %s\n", reverse(input));

    reverse2(input);
    printf("Reversed string directly %s\n", input);
}