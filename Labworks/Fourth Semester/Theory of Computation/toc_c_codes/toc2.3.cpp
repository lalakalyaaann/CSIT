#include <stdio.h>
#include <string.h>

#define Q0 0
#define Q1 1
#define Q2 2

int dfa_accepts(const char *str)
{
    int state = Q0;
    int i;

    for (i = 0; i < strlen(str); i++)
    {
        char ch = str[i];

        switch (state)
        {
            case Q0:
                if (ch == 'a')
                    state = Q1;
                else if (ch == 'b')
                    state = Q0;
                else
                {
                    printf("Invalid character: %c\n", ch);
                    return 0;
                }
                break;

            case Q1:
                if (ch == 'a')
                    state = Q1;
                else if (ch == 'b')
                    state = Q2;
                else
                {
                    printf("Invalid character: %c\n", ch);
                    return 0;
                }
                break;

            case Q2:
                if (ch == 'a')
                    state = Q1;
                else if (ch == 'b')
                    state = Q0;
                else
                {
                    printf("Invalid character: %c\n", ch);
                    return 0;
                }
                break;
        }
    }

    return (state == Q0 || state == Q1);
}

int main()
{
    char str[100];

    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter a string over {a,b}: ");
    scanf("%s", str);

    if (dfa_accepts(str))
        printf("String is Accepted\n");
    else
        printf("String is Rejected\n");

    return 0;
}
