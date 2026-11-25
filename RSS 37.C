#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100], str3[100];

    printf("\nEnter First String: ");
    scanf("%99s", str1);

    printf("\nEnter Second String: ");
    scanf("%99s", str2);

    // 1) Copy one string into another
    strcpy(str3, str1);
    printf("\nCopied String: %s", str3);

    // 2) Reverse the first string
    int len = strlen(str1);
    printf("\nReverse of First String: ");

    for (int i = len - 1; i >= 0; i--)
    {
        printf("%c", str1[i]);
    }

    // 3) Find length of both strings
    printf("\nLength of First String: %zu", strlen(str1));
    printf("\nLength of Second String: %zu", strlen(str2));

    // 4) Compare two strings
    if (strcmp(str1, str2) == 0)
    {
        printf("\nBoth Strings are Equal");
    }
    else
    {
        printf("\nBoth Strings are Not Equal");
    }

    // 5) Concatenate second string to first string
    strcat(str1, str2);
    printf("\nConcatenated String: %s", str1);

    return 0;
}