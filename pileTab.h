#ifndef PILE_TAB_H_INCLUDED
    #define PILE_TAB_H_INCLUDED

    #define STACK_CAPACITY 5

    typedef
    struct stack
    {
        int fait;
        int tab[STACK_CAPACITY];
    } stack;

    void initialize(stack*);
    int push(stack*, const int);
    int pop(stack*);
    void displayStack(const stack*);
    size_t getSize(const stack*);
    void clear(stack*);
    void clearBuffer();
#endif