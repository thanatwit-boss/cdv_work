#include <stdio.h>
#include <string.h>

int main(void)
{
    char str1[50] = "my birthday";  // Increased size for safe concatenation
    char str2[30] = "29 aug 2009";
    char str3[30];

    // Copy str1 to str3
    strcpy(str3, str1);

    strcat(str1, str2);

    // Print results
    printf("str1 = %s\n", str1);
    printf("str3 = %s\n", str3);

    return 0;  // Return success
}