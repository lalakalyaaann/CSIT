#include <stdio.h>

int main()
{
    char tape[100];
    int i = 0;
    printf("Name: Kalyan | Roll no : 15 \n");

    printf("Enter a unary number using 1s: ");
    scanf("%s", tape);

    while (tape[i] != '\0')
    {
        if (tape[i] != '1')
        {
            printf("Invalid input. Use only 1s.\n");
            return 0;
        }
        i++;
    }

    tape[i] = '1';
    tape[i + 1] = '\0';

    printf("Output: %s\n", tape);
    return 0;
}
