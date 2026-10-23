#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1000

int main()
{
    char str[MAX];
    char stack[MAX];
    int top = -1;
    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter parentheses string: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == '(')
        {
            stack[++top] = '(';
        }
        else if (str[i] == ')')
        {
            if (top == -1)
            {
                printf("Rejected: Not balanced\n");
                return 0;
            }
            top--;
        }
    }
    if (top == -1)
        printf("Accepted: Balanced parentheses\n");
    else
        printf("Rejected: Not balanced\n");
    return 0;
}

