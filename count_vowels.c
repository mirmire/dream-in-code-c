//count_vowels.c Prakash Acharya
#include <stdio.h>
int main()
{
    char c;
    int vcount[5] = {[0] = 0}; // create an empty array with all elements 0
    const char vowels[] = {'a', 'e', 'i', 'o', 'u'};
    printf("Vowels in: ");
    while((c = getchar()) != EOF && c != '\n') 
    {
        if (c == 'a' || c == 'A')
        {
            ++vcount[0];
        }
        if (c == 'e' || c == 'E')
        {
            ++vcount[1];
        }
        if (c == 'i' || c == 'I')
        {
            ++vcount[2];
        }
        if (c == 'o' || c == 'O')
        {
            ++vcount[3];
        }
        if (c == 'u' || c == 'U')
        {
            ++vcount[4];
        }
    }
    printf("The result: \n");
    for(int i = 0; i < 5; i++)
    {
        printf("%c : %d\n", vowels[i],vcount[i]);
    }
    return 0;
}
