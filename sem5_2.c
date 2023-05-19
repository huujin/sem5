#include <stdio.h>

int pow(int x, int y)
{
    int answer = x;
    for (int i = 1; i < y; i++)
    {
        answer *= x;
    }
    return answer;
}

int main(void)
{
    // int x = 3, y = 2;
    // int answer = pow(x, y);
    // printf("%d", answer);

    
    return 0;
}