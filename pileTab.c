#include<stdio.h>
#include <assert.h>
#include "pileTab.h"

void initialize(stack* myStack)
{
    assert(myStack != NULL);
    myStack->fait = -1;
}

int push(stack* myStack, const int data)
{
    assert(myStack != NULL);
    if(myStack->fait + 1 < STACK_CAPACITY)
    {
        myStack->tab[++myStack->fait] = data;
        return 1;
    }

    return 0;
        
}

int pop(stack* myStack)
{
    assert(myStack != NULL);

    if(myStack->fait > -1)
    {
        myStack->fait--;
        return 1;
    }

    return 0;
    
}

void displayStack(const stack* myStack)
{
    assert(myStack != NULL);
    for(int i = myStack->fait; i >= 0; i--)
    {
        printf("%d -> ", myStack->tab[i]);
    }

    printf("NULL\n");
}

size_t getSize(const stack* myStack)
{
    assert(myStack != NULL);
    return (myStack->fait + 1);
}

void clear(stack* myStack)
{
    initialize(myStack);
}

void clearBuffer()
{
    while(getchar() != '\n' && getchar() != EOF);
}