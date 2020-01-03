#include <stdio.h>
#include <stdlib.h>

//Wojtek
void losowa_liczba()
{

}

//Ania
void liczby_od1_do10()
{

}

//Adam
void wysw_imienia()
{

}
int main()
{
    int wybor;

    printf("-----MENU------");
    printf("\n1. Losowa liczba");
    printf("\n2. Wyświetlenie liczb od 1 do 10");
    printf("\n3. Wyświetlenie Twojego imienia \n");
    scanf("%d", &wybor);

    switch(wybor)
    {
        case 1:
        losowa_liczba();
        break;
        case 2:
        liczby_od1_do10();
        break;
        case 3:
        wysw_imienia();
        break;
        default:
        printf("Bledna liczba");
        break;
    }

    return 0;
}
