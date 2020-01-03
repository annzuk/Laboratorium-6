#include <stdio.h>
#include <stdlib.h>


//Wojtek
void losowe_liczby()
{
    system("clear");
    srand(time(0));

    for(int i = 0; i<3; i++)
        printf(" %d \n", rand());
}


//Ania
void liczby_od1_do10()
{
    int i;
    for (i=1;i<=10;i++)
    {
        printf("%d",i);
    }
    system("clear");
}


//Adam
void wysw_imienia()
{
    system("clear");//konflikt ci zrobiłam

}
int main()
{
    int wybor;

    printf("-----MENU------");
    printf("\n1. Losowe liczby");
    printf("\n2. Wyświetlenie liczb od 1 do 10");
    printf("\n3. Wyświetlenie Twojego imienia \n");
    printf("\nMoj wybor:");
    scanf("%d", &wybor);

    switch(wybor)
    {
        case 1:
        losowe_liczby();
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
