#include <stdio.h>


void crossword(char(*words)[10], int wordsCount, char* word)

{
    int counter = 0;
    for (int j = 0; j < wordsCount; j++)
    {
        for (int i = 0; i < wordsCount; i++)
        {
            word[i] = words[i][counter];
            if (words[i][counter] == ' ')
                break;

        }
        if (word[wordsCount - 1])
            break;
        counter++;
    }
}

int main()
{
    const int A = 3, B = 10;
    char word[A];
    char words[A][B] = { "cat", " salad", " kiwi" };
    crossword(words, A, word);
    printf("%s", word);

    return 0;
}