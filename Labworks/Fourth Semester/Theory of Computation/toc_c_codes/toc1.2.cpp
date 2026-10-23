
#include <stdio.h>
#include <string.h>
#include <ctype.h>
const char *keywords[] = {
    "auto", "break", "case", "char", "const", "continue",
    "default", "do", "double", "else", "enum", "extern",
    "float", "for", "goto", "if", "int", "long", "register",
    "return", "short", "signed", "sizeof", "static", "struct",
    "switch", "typedef", "union", "unsigned", "void",
    "volatile", "while"
};
int keywordCount = 32;
int isKeyword(const char *str)
{
    for (int i = 0; i < keywordCount; i++)
    {
        if (strcmp(str, keywords[i]) == 0)
            return 1;
    }
    return 0;
}
int isValidIdentifier(const char *str)
{
    if (!(isalpha(str[0]) || str[0] == '_'))
        return 0;
    for (int i = 1; str[i] != '\0'; i++)
    {
        if (!(isalnum(str[i]) || str[i] == '_'))
            return 0;
    }
    return 1;
}
int main()
{
    char str[50];
    printf("Name: Kalyan | Roll no : 15 \n");
    printf("Enter a string: ");
    scanf("%s", str);
    if (isKeyword(str))
    {
        printf("'%s' is a C keyword.\n", str);
    }
    else if (isValidIdentifier(str))
    {
        printf("'%s' is a valid C identifier.\n", str);
    }
    else
    {
        printf("'%s' is NOT a valid C identifier.\n", str);
    }
    return 0;
}
