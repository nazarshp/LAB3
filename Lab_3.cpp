#include <stdio.h>
//створюю функцію
void test(char (*words)[10], int wordsCount, char* word){
    int counter = 0;
    for (int j = 0; j < wordsCount; j++)
    {
        for (int i = 0; i < wordsCount; i++)
        {
            word[i] = words[i][counter];
if(words[i][counter]==  ' ')
 break;
        }
        if (word[wordsCount-1])
            break;
        counter++;
    }
}

int main(){
    char word[3];
    char words[3][10] = {"cat", " salad", " kiwi"};
    test(words,3,word);
    printf("%s", word);
//виводить результат
    return 0;
}