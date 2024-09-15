#include <stdio.h>
#include <string.h>

// MUST before main() in order that compliler can find it
int search(char keyword[])
{
    char data[][100] = {
        "This is an example",
        "Hello world, I am an software engineer",
        "How are you?",
        "you are a good person",
    };

    int num = sizeof(data) / sizeof(data[0]);

    for (int i = 0; i < num; i++) {
        if (strstr(data[i], keyword)) {
            printf("Found keyword '%s' in '%s'\n", keyword, data[i]);
            return 1;
        }
    }

    return -1;
}

int main()
{
    char keyword[20];
    printf("Enter keyword: ");
    scanf("%19s", keyword);
    search(keyword);
}
