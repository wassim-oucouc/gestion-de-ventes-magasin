#include <stdio.h>

int main() {
    int somme;
    somme = 0;
int max;
max = 0;
int min;
    char tableau[50];
    int count;
    printf("entrer le nombre de produits vendu :");
    scanf("%d",&count);

    for(int i = 0 ; i < count ; i++)
    {
        printf("entrer le montant de la vente du produit %d:",i+1);
        scanf("%d",&tableau[i]);

    }
    for(int i = 0 ; i < count ;i++)
    {
        somme +=   tableau[i];
    }
     printf("Le Total Des Vente %d\n",somme);
for(int i = 0 ; i < count ;i++)
{
    if(tableau[i] > max)
    {
        max = tableau[i];
    }
    min = tableau[0];
    if(tableau[i] < min)
    {
        min = tableau[i];

    }
}
printf("la vente plus elever est : %d\n",max);
printf("la vente plus bas est : %d\n",min);
}


