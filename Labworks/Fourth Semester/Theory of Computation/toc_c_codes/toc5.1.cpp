#include <stdio.h>
#include <string.h>
#include <stdbool.h>
#define MAX 1000

int main()
{
    char tape[MAX];
    int len;
    bool changed;
    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter string over {a,b}: ");

    scanf("%s", tape);
    len = strlen(tape);
    do
    {
        changed = false;
        int i_a = -1, i_b = -1;
        for (int i = 0; i < len; i++)
        {
            if (tape[i] == 'a' && i_a == -1)
                i_a = i;
            if (tape[i] == 'b' && i_b == -1)
                i_b = i;
        }
        if (i_a != -1 && i_b != -1)
        {
            tape[i_a] = 'x';
            tape[i_b] = 'x';
            changed = true;
        }
    } while (changed);
    bool accept = true;
    for (int i = 0; i < len; i++)
    {
        if (tape[i] == 'a' || tape[i] == 'b')
        {
            accept = false;
            break;
        }
    }
    if (accept)
        printf("Accepted: Equal number of a's and b's\n");
    else
        printf("Rejected: Unequal number of a's and b's\n");
    return 0;
}
 

