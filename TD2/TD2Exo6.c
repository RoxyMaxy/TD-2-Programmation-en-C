//TD 2 Programmation C: Exo6: Ajout des éléments du tableau B au Tableau A

/*
Algorithme Ajout de B à A

Variables: n, m, n_tour_A<-0, i, n_tour_B<-0, max, p: entiers;
           j <- 0, k <- 0, l <- 0 : entiers;
           A[50], B[50], T[100]: tableaux d'entiers;

Début
    Afficher("Saisir le nombre d'éléments du tableau A: ");
    Lire(n);

    Tant que (n < 1 || n > 50)
        n_tour_A++;
        Si (n_tour_A == 4)
            Afficher("Nombre d'essais épuisé, au revoir!\n");
            exit(0);
        Sinon
            Afficher("Nombre invalide! Réessayez: n=");
            Lire(n);
        Fin Si
    Fin Tant Que

    Pour (i <- 0; i < n; i++)
        Afficher("Saisir la valeur de la Case N°", i+1, " : A[", i, "]=");
        Lire(A[i]);
    Fin Pour

    Afficher("\nSaisir le nombre d'éléments du tableau B: ");
    Lire(m);

    Tant Que (m < 1 || m > 50)
        n_tour_B++;
        Si (n_tour_B == 4)
            Afficher("Nombre d'essais épuisé, au revoir!\n");
            exit(0);
        Sinon
            Afficher("Nombre invalide! Réessayez: m=");
            Lire("%d", &m);
        Fin Si
    Fin Tant Que

    Pour (i <- 0; i < m; i++)
        Afficher("Saisir la valeur de la Case N°", i+1, " : B[", i, "]=");
        Lire(B[i]);
    Fin Pour

    Afficher("\nVoici le tableau A: \nA= |");
    Pour (i <- 0; i < n; i++)
        Afficher(A[i], " | ");
    Fin Pour

    Afficher("\n\nVoici le tableau B: \nB= |");
    Pour (i<-0; i<m; i++)
        Afficher(B[i], " | ");
    Fin Pour
    Afficher("\n");

    Si(n<m)
        max<-m;
    Sinon
        max<-n;
    Fin Si

    Pour (i<-0; i<max; i++)
        A[n+i]<-B[i];
    Fin Pour

    p<-n+m ;

    Afficher("Voici le nouveau tableau A:\n");
    Pour (i<-0; i<p; i++)
        Afficher ("A[", i, "]= ", A[i], "\n");
    Fin Pour

    Afficher("\n|");
    Pour (i<-0; i<p; i++)
        Afficher (A[i], " | ");
    Fin Pour
    Afficher("\n");
Fin   
*/

#include<stdio.h>
#include<stdlib.h>

int main() 
{
    int n, m, n_tour_A=0, i, n_tour_B=0, max, p;
    int j = 0, k = 0, l = 0;
    int A[50], B[50], T[100];
    
    printf("Saisir le nombre d'éléments du tableau A: ");
    scanf("%d", &n);

    while (n < 1 || n > 50)
    {
        n_tour_A++;
        if (n_tour_A == 4)
        {
            printf("Nombre d'essais épuisé, au revoir!\n");
            exit(0);
        }
        else
        {
            printf("Nombre invalide! Réessayez: n=");
            scanf("%d", &n);
        }
    }

    for (i = 0; i < n; i++)
    {
        printf("Saisir la valeur de la Case N°%d : A[%d]=", i + 1, i);
        scanf("%d", &A[i]);
    }

    printf("\nSaisir le nombre d'éléments du tableau B: ");
    scanf("%d", &m);

    while (m < 1 || m > 50)
    {
        n_tour_B++;
        if (n_tour_B == 4)
        {
            printf("Nombre d'essais épuisé, au revoir!\n");
            exit(0);
        }
        else
        {
            printf("Nombre invalide! Réessayez: m=");
            scanf("%d", &m);
        }
    }

    for (i = 0; i < m; i++)
    {
        printf("Saisir la valeur de la Case N°%d : B[%d]=", i + 1, i);
        scanf("%d", &B[i]);
    }

    printf("\nVoici le tableau A: \nA= |");
    for (i = 0; i < n; i++)
    {
        printf("%d | ", A[i]);
    }

    printf("\n\nVoici le tableau B: \nB= |");
    for (i = 0; i < m; i++)
    {
        printf("%d | ", B[i]);
    }
    printf("\n");


    if(n<m)
    {
        max=m;
    }
    else
    {
        max=n;
    }

    for (i=0; i<max; i++)
    {
        A[n+i]=B[i];
    }

    p=n+m ;

    printf("Voici le nouveau tableau A:\n");
    for (i=0; i<p; i++)
    {
        printf ("A[%d]= %d\n", i, A[i]);
    }   
    printf("\n|");
    for (i=0; i<p; i++)
    {
        printf (" %d | ", A[i]);
    }
    printf("\n");
    return (0);
}    
