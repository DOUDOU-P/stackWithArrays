#include<stdio.h>
#include <assert.h>
#include "pileTab.h"

void initialize(stack* myStack)
{
    assert(myStack != NULL);
    myStack->fait = -1;
}

void push(stack* myStack, const int data)
{
    assert(myStack != NULL);
    if(myStack->fait + 1 < SIZE_MAX)
    {
        myStack->tab[++myStack->fait] = data;
        return;
    }

    printf("Structure de donnees pleine\n");
}

int pop(stack* myStack)
{
    assert(myStack != NULL);

    if(myStack->fait > -1)
    {
        int pValue = myStack->tab[myStack->fait--];
        return pValue;
    }

    printf("Structure de donnees vide\n");
    return EOF;
    
}

void displayStack(stack* myStack)
{
    assert(myStack != NULL);
    for(int i = myStack->fait; i >= 0; i--)
    {
        printf("%d -> ", myStack->tab[i]);
    }

    printf("NULL\n");
}

size_t getSize(stack* myStack)
{
    assert(myStack != NULL);
    return (myStack->fait + 1);
}

void clear(stack* myStack)
{
    myStack->fait = -1;
}

void clearBuffer()
{
    while(getchar() != '\n');
}