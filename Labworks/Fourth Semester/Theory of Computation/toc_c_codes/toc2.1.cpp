#include <stdio.h>
#include <string.h>
int main()
{
    char str[100];
    int state = 0;
    int i;
    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter a binary string: ");
    scanf("%s", str);
    for (i = 0; i < strlen(str); i++)
    {
        if (str[i] == '0')
        {
            if (state == 1)
                state = 0;
            else if (state == 2)
                state = 1;
            else
                state = 0;
        }
        else if (str[i] == '1')
        {
            if (state == 0)
                state = 1;
            else if (state == 1)
                state = 2;
            else if (state == 2)
                state = 2;
        }
        else
        {
            printf("Invalid input! Only 0s and 1s are allowed.\n");
            return 0;
        }
    }
    if (state == 2)
        printf("String Accepted: Ends with 11\n");
    else
        printf("String Rejected: Does not end with 11\n");
return 0;
}
 

