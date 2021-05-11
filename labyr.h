#ifndef LABYR_H_INCLUDED
#define LABYR_H_INCLUDED


typedef Laby Laby;
struct Laby{
int n,m;
Cellule ** tab;
};
Laby * saisie( int n,int m);
void afficherlaby(Laby *laby);
void ouvrir_porte(Laby * laby, int ind, portes pot);
#endif // LABYR_H_INCLUDED
