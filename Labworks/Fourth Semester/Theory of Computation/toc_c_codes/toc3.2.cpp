#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdbool.h>

bool isAccepted(char *str)
{

    int n = strlen(str);
    if (n < 2)

        return false;
    return (str[0] == 'b' && str[1] == 'a');
}
int main()
{
    char *input = NULL;
    char buffer[1000];
    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter a string over {a,b}: ");
    if (fgets(buffer, sizeof(buffer), stdin) == NULL)
    {
        printf("Error reading input.\n");
        return 1;
    }
    buffer[strcspn(buffer, "\n")] = '\0';
    input = strdup(buffer);
    if (isAccepted(input))
        printf("Accepted: String starts with \"ba\".\n");
    else
        printf("Rejected: String does not start with \"ba\".\n");
    free(input);
    return 0;
} 

