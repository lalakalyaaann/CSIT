#include <stdio.h>
#include <string.h>

int dfa_start_with_01(char str[])
{
    int state = 0;

    for (int i = 0; str[i] != '\0'; i++)
    {
        char ch = str[i];

        switch (state)
        {
            case 0:
                if (ch == '0')
                    state = 1;
                else
                    state = 3;
                break;

            case 1:
                if (ch == '1')
                    state = 2;
                else
                    state = 3;
                break;

            case 2:
                state = 2;
                break;

            case 3:
                state = 3;
                break;
        }
    }

    return (state == 2);
}

int main()
{
    char str[100];

    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter a binary string: ");
    scanf("%s", str);

    if (dfa_start_with_01(str))
        printf("ACCEPTED: The string starts with 01\n");
    else
        printf("REJECTED: The string does not start with 01\n");

    return 0;
}
