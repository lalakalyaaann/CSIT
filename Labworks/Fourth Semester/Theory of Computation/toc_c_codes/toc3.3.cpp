#include <stdio.h>
#include <string.h>
#include <stdbool.h>

bool isAccepted(char *str)
{
    return strstr(str, "bab") != NULL;
}
int main()
{
    char buffer[1000];
    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter a string over {a,b}: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }

    buffer[strcspn(buffer, "\n")] = '\0';
    for (int i = 0; buffer[i] != '\0'; i++)
    {
        if (buffer[i] != 'a' && buffer[i] != 'b')
        {
            printf("Invalid input: only 'a' and 'b' are allowed.\n");
            return 1;
        }
    }
    if (isAccepted(buffer))
        printf("Accepted: String contains \"bab\" as substring.\n");
    else
        printf("Rejected: String does not contain \"bab\".\n");
    return 0;
}
 


