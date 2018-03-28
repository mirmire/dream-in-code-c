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
        for(int i = 0; i < 5; i++)
        {
            if (vowels[i] == c)
            {
                ++vcount[i];  // add count to corresponding vcount array
            }
        }
    }
    printf("Vowel  Count\n");
    for(int i = 0; i < 5; i++)
    {
        printf("%3c  %5d\n", vowels[i],vcount[i]);
    }
    return 0;
}
