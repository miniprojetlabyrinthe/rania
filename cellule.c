#include <stdlib.h>
#include<stdio.h>
#include<bool.h>
#include "cellule.h"


Cellule *saisiee(int id){

int i;
Cellule *cellule=malloc(sizeof(*cellule));
if(cellule==NULL){
    exit(EXIT_FAILURE);

}
cellule->ind =ind:
cellule->etat=false;
for(i=0;i<4;i++){
    cellule->porte[i]=false;/*il existe des murs*/
}
return cellule;
}
