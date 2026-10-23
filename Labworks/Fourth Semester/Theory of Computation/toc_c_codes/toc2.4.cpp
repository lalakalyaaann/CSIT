#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int state = 0;
    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter a string over {a, b}: ");
    scanf("%s", str);
    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];
        switch (state)
        {
        case 0:
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 0;
            else
            {
                printf("Invalid character detected.\n");
                return 1;
            }
            break;
        case 1:
            if (ch == 'a')
                state = 1;
            else if (ch == 'b')
                state = 2;
            else
            {
                printf("Invalid character detected.\n");
                return 1;
            }
            break;
        case 2:
            if (ch == 'a')
                state = 3;
            else if (ch == 'b')
                state = 0;
            else
            {
                printf("Invalid character detected.\n");
                return 1;
            }
            break;
        case 3:
            if (ch == 'a' || ch == 'b')
                state = 3;
            else
            {
                printf("Invalid character detected.\n");
                return 1;
            }
            break;
        }
    }

    if (state == 3)
        printf("String accepted! It contains 'aba'.\n");
    else
        printf("String rejected! It does not contain 'aba'.\n");
return 0;
} 

