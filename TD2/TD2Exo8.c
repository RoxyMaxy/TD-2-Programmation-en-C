//Saisie des nombres d'éléments d'un Tableau 2D + valeur minimale + coordonnées
/*
Algorithme Tableau 2D

int n, p, i, j, min, x, y, a, b, max;
int tab[100][100];

Début
  Afficher("Saisir le nombre de lignes voulu: ");
  Lire(n);
  Afficher("Entrer le nombre de colonnes: ");
  Lire(p);
  
  Pour(i=0; i<n; i++)
    Pour(j=0; j<p; j++)
      Afficher("Saisir la valeur de la Colonne N°", j+1, " de la ligne N°", i+1, " : ");
      Lire(tab[i][j]);
    Fin Pour
  Fin Pour
  
  Afficher("Vous venez de créer un tableau:\n");
  Pour(i=0; i<n; i++)
    Pour(j=0; j<p; j++)
      Afficher(tab[i][j]);
    Fin Pour
    Afficher("\n");
  Fin Pour

  min=tab[0][0];
  Pour(i=0; i<n; i++)
    Pour(j=0; j<p; j++)
      Si(min>tab[i][j])
        min=tab[i][j];
        x<-i;
        y<-j;
      Fin Si
    Fin Pour
  Fin


Afficher("Le nombre minimal: min=", min, "\n");
Afficher( "Cordonnées min=(%d, %d)\n\n", x, y);

 min=tab[0][0];
 Pour(i=0; i<n; i++)
    Pour(j=0; j<p; j++)
      Si(max<tab[i][j])
        max=tab[i][j];
        a<-i;
        b<-j;
      Fin Si
    Fin Pour
  Fin Pour

Afficher("Le nombre minimal: max=", max, "\n");
Afficher( "Cordonnées max=(", a, ", ", b, ")");

Fin
*/

#include<stdio.h>

int main()
{
int n, p, i, j, min, x, y, a, b, max;
int tab[100][100];
  printf("Saisir le nombre de lignes voulu: ");
  scanf("%d", &n);
  printf("Entrer le nombre de colonnes: ");
  scanf("%d", &p);
  
  for(i=0; i<n; i++)
  {
    for(j=0; j<p; j++)
    {
      printf("Saisir la valeur de la Colonne N°%d de la ligne N°%d : ", j+1, i+1);
      scanf("%d", &tab[i][j]);
    }
  }
  
  printf("\nVous venez de créer un tableau:\n");
  for(i=0; i<n; i++)
  {
    for(j=0; j<p; j++)
    {
      printf("%d ", tab[i][j]);
    }
    printf("\n");
  }
  printf("\n");
 

  min=tab[0][0];
  for(i=0; i<n; i++)
  {
    for(j=0; j<p; j++)
    {
      if(min>tab[i][j])
      {
        min=tab[i][j];
        x=j+1;
        y=i+1;
      }
    }
  }

  printf("\nLe nombre minimal: min=%d\n", min);
  printf( "Cordonnées min=(%d, %d)\n\n", x, y);
  

 max=tab[0][0];
 for(i=0; i<n; i++)
  {
    for(j=0; j<p; j++)
    {
      if(max<tab[i][j])
      {
        max=tab[i][j];
        a=j+1;
        b=i+1;
      }
    }
  }

printf("Le nombre maximal: max=%d\n", max);
printf( "Cordonnées max=(%d, %d)\n\n", a, b);

return (0);
}

