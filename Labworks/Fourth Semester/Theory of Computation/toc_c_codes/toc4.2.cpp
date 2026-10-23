#include <stdio.h>
#include <string.h>
int main()
{
    char str[1000];
    int state = 0;

    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter string over {a,b}: ");
    scanf("%s", str);
    for (int i = 0; i < strlen(str); i++)
    {
        if (str[i] == 'a' || str[i] == 'b')
        {
            state = 1 - state;
        }
        else
        {
            printf("Invalid character detected!\n");
            return 0;
        }
    }
    if (state == 0)
        printf("Accepted: String has even length.\n");
    else
        printf("Rejected: String has odd length.\n");
    return 0;
}

