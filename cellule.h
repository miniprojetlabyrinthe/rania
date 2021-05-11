#ifndef CELLULE_H_INCLUDED
#define CELLULE_H_INCLUDED

typedef Cellule Cellule;
struct Cellule {
int id;
bool etat;
bool porte[4];
};


typedef enum {
haut,
bas,
droite,
gauche,
} portes;

Cellule *saisiee();
#endif // CELLULE_H_INCLUDED
