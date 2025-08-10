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
        printf("a = afficher pile\n");
        printf("t = Obtenir la taille\n");
        printf("v = vider la pile\n");
        printf("f = Fin du programme\n");
        printf("Quelle operation, souhaitez vous effectuer sur la pile?: ");
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
        
        case 'v':
        case 'V':
            clear(&myStack);
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