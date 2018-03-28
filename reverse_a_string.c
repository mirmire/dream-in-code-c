//reverse_a_string.c Prakash Acharya
#include <stdio.h>
#include <string.h>
int main()
{
    int a, b = 0, i = 0;
    char c, original[100], reversed[100];
    printf("Type the string to be reversed (100 chars. max): ");
    //scanf("%s", original);
    while((c = getchar()) != '\n' && c != EOF)
    {
        original[i] = c;
        ++i;
    }
    a = strlen(original);
    while ( b <= a + 99) 
    {
        reversed[b] = original[a - 1];
        b++;
        a--;
    }
    printf("%s\n", reversed);
    return 0;
}
