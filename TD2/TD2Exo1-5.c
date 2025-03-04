//TD 2 Programmation C: Exo1 -> Exo5

/*
Algorithme Affichage d'un tableau

Variables:  n_element, n_tour<-0, i, colonne_max, colonne_min, max, min, somme, inverse: entiers;
            j<-0, k<-0, l<-0: entiers;
            tableaux d'entiers: T[50], TPOS[50], TNEG[50], T_sans_0[50];

Début

*Exo1*
    Afficher("Saisir le nombre d'éléments voulu: ");
    Lire(n_element);

    Tant que (n_element < 1 || n_element > 50)
        n_tour++;
        Si (n_tour == 4)
            Afficher("Nombre de chances épuisé, au revoir!\n");
            exit(0);
        Sinon
            Afficher("Nombre invalide! Réessayez: n=");
            Lire(n_element);
        Fin si
    Fin Tant Que

    Pour (i<-0; i < n_element; i++)
        Afficher("Saisir la valeur de la Case N°", i+1, ": T[", i, "=");
        Lire(T[i]);
    Fin Pour

    Afficher("\nVoici le tableau créé: \n|");
    Pour (i<-0; i < n_element; i++)
        Afficher(T[i], " | ");
    Fin Pour
    Afficher("\n");

    somme<-0;
    Pour (i<-0; i < n_element; i++)
        somme <-somme + T[i];
    Fin Pour
    Afficher("\nSomme des éléments dans ce tableau= ", somme, "\n");

* Affichage de la valeur maximale de T: Exo2*
    max<-T[0];
    Pour (i<-0; i < n_element; i++)
        Si (max < T[i])
            max<-T[i];
            colonne_max<-i;
        Fin Si
    Fin Pour
    Afficher("\nLe nombre maximal: max=", max, " , situé sur la colonne N°", colonne_max + 1, "\n");

    min<-T[0];
    Pour (i<-0; i < n_element; i++)
        Si (min > T[i])
            min<-T[i];
            colonne_min<-i;
        Fin Si
    Fin Pour
    Afficher("\nLe nombre minimal: min=", min ," situé sur la colonne N°", colonne_min + 1), "\n";

*Tableau sans la valeur 0: Exo3*
    Afficher("\nVoici le tableau sans la valeur 0 : \n");
    Pour (i<-0; i < n_element; i++)
        Si (T[i] != 0)
            T_sans_0[l]<-T[i];
            l++;
        Fin Si
    Fin Pour
    
    Pour (i<-0; i < l; i++)
        Afficher("T_sans_0[", i, "] = ", T_sans_0[i], "\n");
    Fin Pour

    Afficher ("\n");
    Pour (i = 0; i < l; i++)
        Afficher (T_sans_0[i], " | ");
    Fin Pour

    Afficher("\n\n");

*Affichage des éléments négatifs et positifs dans TPOS et TNEG: Exo4*
    Pour (i<-0; i < n_element; i++)
        Si (T[i] > 0)
            TPOS[j]<-T[i];
            j++;
        Sinon Si (T[i] < 0)
            TNEG[k]<-T[i];
            k++;
        Fin Si
    Fin Pour

    Afficher("\tTableau des valeurs positives: \n");
    Pour (i<-0; i < j; i++)
        Afficher("TPOS[", i, "] = ", TPOS[i], "\n");
    Fin Pour

    Afficher("\nTPOS = |");
    Pour (i<-0; i < j; i++)
        Afficher(TPOS[i], " | ");
    Fin Pour

    Afficher("\n\n\tTableau des valeurs négatives: \n");
    Pour (i<-0; i < k; i++)
        Afficher("TNEG[", i, "] = ", TNEG[i], "\n");
    Fin Pour

    Afficher("\nTNEG = |");
    Pour (i<-0; i < k; i++)
        Afficher(TNEG[i], " | ");
    Fin Pour

*Affichage du tableau en sens inverse: Exo5*
    Afficher("\n\nTableau dans l'ordre inverse: \n");
    Pour (i<-0; i < (n_element / 2); i++)
        inverse<-T[i];
        T[i]<-T[n_element - (i + 1)];
        T[n_element - (i + 1)]<-inverse;
    Fin Pour

    Pour (i<-0; i < n_element; i++)
        Afficher("T[", i, "] = ", T[i], "\n");
    Fin Pour

    Afficher("\n");

    Pour (i<-0; i < n_element; i++)
        Afficher(T[i], " | ");
    Fin Pour

    Afficher("\n\n");
Fin
*/

#include <stdio.h>
#include <stdlib.h>

int main() 
{
    int n_element, n_tour=0, i, colonne_max, colonne_min, max, min, somme, inverse;
    int j = 0, k = 0, l = 0;
    int T[50], TPOS[50], TNEG[50], T_sans_0[50];
    
// Exo1
    printf("Saisir le nombre d'éléments voulu: ");
    scanf("%d", &n_element);

    while (n_element < 1 || n_element > 50)
    {
        n_tour++;
        if (n_tour == 4)
        {
            printf("Nombre de chances épuisé, au revoir!\n");
            exit(0);
        }
        else
        {
            printf("Nombre invalide! Réessayez: n=");
            scanf("%d", &n_element);
        }
    }

    for (i = 0; i < n_element; i++)
    {
        printf("Saisir la valeur de la Case N°%d : T[%d]=", i + 1, i);
        scanf("%d", &T[i]);
    }

    printf("\nVoici le tableau créé: \n|");
    for (i = 0; i < n_element; i++)
    {
        printf("%d | ", T[i]);
    }
    printf("\n");

    somme = 0;
    for (i = 0; i < n_element; i++)
    {
        somme = somme + T[i];
    }
    printf("\nSomme des éléments dans ce tableau= %d\n", somme);

    // Affichage de la valeur maximale de T: Exo2
    max = T[0];
    for (i = 0; i < n_element; i++)
    {
        if (max < T[i])
        {
            max = T[i];
            colonne_max = i;
        }
    }
    printf("\nLe nombre maximal: max=%d , situé sur la colonne N°%d\n", max, colonne_max + 1);

    min = T[0];
    for (i = 0; i < n_element; i++)
    {
        if (min > T[i])
        {
            min = T[i];
            colonne_min = i;
        }
    }
    printf("\nLe nombre minimal: min=%d , situé sur la colonne N°%d\n", min, colonne_min + 1);

    // Tableau sans la valeur 0: Exo3
    printf("\nVoici le tableau sans la valeur 0 : \n");
    for (i = 0; i < n_element; i++)
    {
        if (T[i] != 0)
        {
            T_sans_0[l] = T[i];
            l++;
        }
    }
    
    for (i = 0; i < l; i++)
    {
        printf("T_sans_0[%d] = %d\n", i, T_sans_0[i]);
    }

    printf("\n");
    for (i = 0; i < l; i++)
    {
        printf("%d | ", T_sans_0[i]);
    }

    printf("\n\n");

    // Affichage des éléments négatifs et positifs dans TPOS et TNEG: Exo4
    for (i = 0; i < n_element; i++)
    {
        if (T[i] > 0)
        {
            TPOS[j] = T[i];
            j++;
        } 
        else if (T[i] < 0)
        {
            TNEG[k] = T[i];
            k++;
        }
    }

    printf("\tTableau des valeurs positives: \n");
    for (i = 0; i < j; i++)
    {
        printf("TPOS[%d] = %d\n", i, TPOS[i]);
    }
    printf("\nTPOS = |");
    for (i = 0; i < j; i++)
    {
        printf("%d | ", TPOS[i]);
    }

    printf("\n\n\tTableau des valeurs négatives: \n");
    for (i = 0; i < k; i++)
    {
        printf("TNEG[%d] = %d\n", i, TNEG[i]);
    }
    printf("\nTNEG = |");
    for (i = 0; i < k; i++)
    {
        printf("%d | ", TNEG[i]);
    }

    // Affichage du tableau en sens inverse: Exo5
    printf("\n\nTableau dans l'ordre inverse: \n");
    for (i = 0; i < (n_element / 2); i++)
    {
        inverse = T[i];
        T[i] = T[n_element - (i + 1)];
        T[n_element - (i + 1)] = inverse;
    }

    for (i = 0; i < n_element; i++)
    {
        printf("T[%d] = %d\n", i, T[i]);
    }
    printf("\n");
    for (i = 0; i < n_element; i++)
    {
        printf("%d | ", T[i]);
    }

    printf("\n\n");
    return 0;
}
