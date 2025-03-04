//TD 2 Programmation C: Exo7: Produit scalaire

/*
Algorithme Produit scalaire de deux vecteurs U et v 

Variables:  p, i, n_tour_U=0, n_tour_V=0: entiers;
            U[2], V[2]: tableauux d'entiers;


Début
    
    Afficher("Entrer les coordonnées du premier vecteur U: \n");
    Pour(i=0; i<2; i++)
        Afficher("U", i+1, ": ");
        Lire(U[i]);    
    Fin Pour



    Afficher("\nEntrer les coordonnées du second vecteur V: \n");
    Pour(i=0; i<2; i++)
        Afficher("V", i+1, ": ");
        Lire(V[i]);
    Fin Pour


    Afficher("\nLes vecteurs entrés sont: \nU(");
    Pour(i=0; i<2; i++)
        Afficher(U[i]);
    Fin Pour

    Afficher(") et V(");
    Pour(i=0; i<2; i++)
        Afficher(V[i]);
    Fin Pour


    p=(U[0] * V[1]) + (U[1] * V[0]);

    Afficher(")\n\nLe produit scalaire de U(%d; %d) et V(%d; %d) est :\n", U[1], U[2], V[0], V[1]);
    Afficher("P= (U1 * V2) + (U2 * V1)\tDonc ");
    Afficher("P= (", U[0], " * ", V[1], ") + (", U[1], " * ", V[0], ") = "%d", p);
    Afficher("\n\n");
Fin   
*/

#include<stdio.h>

int main() 
{
    int p, i, n_tour_U=0, n_tour_V=0;
    int U[2], V[2];
    
    printf("Entrer les coordonnées du premier vecteur U: \n");
    for(i=0; i<2; i++)
    {
        printf("U%d: ", i+1);
        scanf("%d,", &U[i]);    
    }



    printf("\nEntrer les coordonnées du second vecteur V: \n");
    for(i=0; i<2; i++)
    {
        printf("V%d: ", i+1);
        scanf("%d,", &V[i]);
    }


    printf("\nLes vecteurs entrés sont: \nU(");
    for(i=0; i<2; i++)
    {
        printf("%d;", U[i]);
    }

    printf(") et V(");
    for(i=0; i<2; i++)
    {
        printf("%d;", V[i]);
    }


    p=(U[0] * V[1]) + (U[1] * V[0]);

    printf(")\n\nLe produit scalaire de U(%d; %d) et V(%d; %d) est :\n", U[1], U[2], V[0], V[1]);
    printf("P= (U1 * V2) + (U2 * V1)\tDonc ");
    printf("P= (%d * %d) + (%d * %d) = %d", U[0], V[1], V[0], U[1], p);
    printf("\n\n");
    return (0);
}    
