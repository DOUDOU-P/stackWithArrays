#include<stdio.h>
#include "pileTab.h"

int main(void)
{
    stack myStack;

    initialize(&myStack);

    char choice;
    int donnee;

    while(1)
    {
        printf("i = inserer donnee\n");
        printf("e = enlever donnee\n");
        printf("a = afficher liste\n");
        printf("f = Fin du programme\n");
        printf("t = Obtenir la taille\n");
        printf("Quelle operation, souhaitez vous effectuer sur la liste?\n");
        scanf("%c", &choice);

        switch (choice)
        {
        case 'i':
        case 'I':
            printf("Entrez la valeur a inserer: ");
            scanf("%d", &donnee);
            push(&myStack, donnee);
            break;
        
        case 'e':
        case 'E':
            pop(&myStack);
            break;
        
        case 'a':
        case 'A':
            displayStack(&myStack);
            printf("\n\n");
            break;
        
        case 't':
        case 'T':
            printf("Taille actuelle de la pile: %ld\n", getSize(&myStack));
            break;
        
        case 'f':
        case 'F':
            printf("Le programme termine\n");
            clear(&myStack);
            return 0;

        default:
            printf("Commande erronee\n");
        }

        clearBuffer();
    }

    return 0;
}