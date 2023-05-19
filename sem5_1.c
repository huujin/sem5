#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define STR_SIZE 10

int Index(char* s1, char* s2)
{
    int index;
    bool flag = true;
    for (int i = 0; i < strlen(s1); i++)
    {
        for (int j = 0; j < strlen(s2); j++)
        {
            if (s1[i] == s2[j])
                return i;
        }
    }
    return -1;
}

int main(void)
{
    char* s1 = (char*) malloc(STR_SIZE * sizeof(char)); // инициализация первой строки
    scanf("%s", s1); // запись первой строки
    char* s2 = (char*) malloc(STR_SIZE * sizeof(char)); // инициализация второй строки
    scanf("%s", s2); // запись второй строки
    printf("%d", Index(s1, s2));
    return 0;
}