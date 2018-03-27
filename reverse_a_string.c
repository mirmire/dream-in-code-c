//reverse_a_string.c Prakash Acharya
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b = 0;
    char original[15], reversed[15];
    printf("Type the string to be reversed (15 chars. max): ");
    scanf("%s", original);
    a = strlen(original);
    while ( b <= a + 14) 
    {
        reversed[b] = original[a - 1];
        b++;
        a--;
    }
    printf("%s\n", reversed);
    return 0;
}
