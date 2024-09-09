#include <stdio.h>
void calcul()
{
    int count;
    int somme;
    somme = 0;
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
        somme += somme + tableau[i];
        printf("Le Total Des Ventes %d",somme);
}
}
int main() {
    int choix;
    printf("Que vous souhaitez vous faire ?");
    printf("1. calculer la total des ventes");
    printf("3. Afficher les ventes superieures a une moyenne");
    printf("4. compter le nombre de ventes superieures a 100");
    printf("5. compter le nombre de ventes inferieures a 100");
    scanf("%d",&choix);
    switch(choix){
        case '1' :
        calcul();
    }

    for(int i = 0 ; i < count ; i++)
    {
        if(tableau[i] > 0)
        {
            max = tableau[i];
        }
        else if(tableau[i] < 0)
        {
            tableau[i] = min;
        }
    }
}

