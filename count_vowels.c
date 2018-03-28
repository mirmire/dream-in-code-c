//count_vowels.c Prakash Acharya
#include <stdio.h>
int main()
{
    char c;
    int vowel_count = 0;
    const char vowels[5] = {'a', 'e', 'i', 'o', 'u'};
    printf("Vowels in: ");
    while((c = getchar()) != EOF && c != '\n') 
    {
        for(int i = 0; i < 5; i++)
        {
            if(vowels[i] == c)
            {
                ++vowel_count;
            }
        }
    }
    printf("There were %d vowels.\n", vowel_count);
    return 0;
}
