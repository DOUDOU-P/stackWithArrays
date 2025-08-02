#ifndef PILE_TAB_H_INCLUDED
    #define PILE_TAB_H_INCLUDED

    #define SIZE_MAX 5

    typedef
    struct stack
    {
        int fait;
        int tab[SIZE_MAX];
    } stack;

    void initialize(stack*);
    void push(stack*, const int);
    int pop(stack*);
    void displayStack(stack*);
    size_t getSize(stack*);
    void clear(stack*);
    void clearBuffer();
#endif