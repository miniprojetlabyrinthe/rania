#include <stdlib.h>
#include<stdio.h>
#include<bool.h>
#include "labyr.h"
#include<time.h>




Laby * saisie( int n,int m){/* initiallisation du labyrinthe*/
    int i,j;
   Laby *laby=malloc(sizeof(*laby));
   if(laby==NULL){
    exit(EXIT_FAILURE);
   }
   laby->n=n;
   laby->m=m;
   laby->tab=malloc(n*m*sizeof(Cellule*));/* tableau de cellules*/
   for(i=0;i<n*m,i++){
        tab[i]=saisiee(i);}

 return laby;
   }


void afficherlaby(Laby *laby){/* chaque cellule est affiche par les cote droite et bas*/
    int n,int m;
    n=laby->n;
    m=laby->m;
    printf(" ");
    for(j=0;j<m;j++){
        printf("_");
    }
    printf("\n");
    for(i=0;i<n;i++){

        printf("|");
        for(j=0;j<m;j++){
           if (laby->tab[m*i+j]->porte[bas]=false){/*il exite un mur en bas de cellule*/
              printf("_");
        }
          else{
            printf(" ");
          }
          if(laby->tab[m*i+j]->porte[droite]=false)
            printf("|");/*puisque l affichage ne se fait pas depuis le coins de l'ecran*/
          else
            printf(" ");
    }

printf("\n");

}
}



void ouvrir_porte(Laby * laby, int ind, portes pot){/* on travaille dans le cas on connait la cellue au quelle on va partir*/
int n,m;

n=laby->n;
m=laby->m;
i=ind/m;/*pour pouvoir controler les cellules voisines de la cellule courante*/
j=ind%m;

if (pot==haut){
if (i!=0){
    laby->tab[m*i+j]->porte[haut]=true;
    laby->tab[m*(i-1)+j]->porte[bas]=true;
}
}
else if(pot==bas){

        if(i!=n-1){
            laby->tab[m*i+j]->porte[bas]=true;
    laby->tab[m*(i+1)+j]->porte[haut]=true;

        }

}
else if(pot==droite){

if(j!=m-1){
            laby->tab[m*i+j]->porte[droite]=true;
    laby->tab[m*i+(j+1)]->porte[gauche]=true;
}

}
else{

if(j!=0){
            laby->tab[m*i+j]->porte[gauche]=true;
    laby->tab[m*i+(j-1)]->porte[droite]=true;
}

}

}


int rand_ind(Laby *laby){/*pour commence avec une cellule aleatoire*/
int n,m;
n=laby->n;
m=laby->m;
srand(time(NULL));
r=(rand()%(n*m-1+1)+0);

return r;

}



void fin_laby(Laby *laby){
int n,m;
n=laby->n;
m=laby->m;
for (i=0;i<n*m;i++){
    free(laby->tab[i]);
}
free(laby->tab);
free(laby);
}
