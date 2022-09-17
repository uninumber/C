#include <stdio.h>
#define MAX 100 //Change MAX to any value.But dont give words more than MAX.

void main()
{
    int w, nwords[MAX] = {0}, i = 0;   //nwords is an array for storing length of each word.Length of all words initialized to 0.

    while ((w = getchar()) != EOF)
    {
        if (w == ' ' || w == '\t' || w == '\n')
            ++i;            //if space or tab or newline is encountered, then index of array is advanced indicating new word
        else
            ++nwords[i];        //increment the count of number of characters in each word
    }       //After this step,we will have array with each word length.

    for (i = 0; i < MAX; i++)   //iterating through array
    {
        printf("\n");
        for (; nwords[i] > 0; nwords[i]--)  
            putchar('*');        //if length of word > 0 , print $ and decrement the length.This is in loop.
        if (nwords[i+1] == 0)   //as MAX is 100, to avoid printing blank new lines in histogram,we check the length of next word.
            break;              //If it is 0, then break the loop
        printf("\n");   //After each word bar in histogram, new line.
    }
    printf("\n");
}
