#include <stdio.h>

pos creerpoint(){
    point p;
    int x,y;

    printf("Saisir votre Coordonnes: ");
    scanf("%d %d", &x,&y);

    p.x = x;
    p.y = y;

    return p;
}

vecteur creervecteur(point p1, point p2){
    vecteur v;

    v.origine = p1;
    v.destinataire = p2;

    return v;
}

int main(){

    typedef struct point{
        int x,y;
    } point;

    typedef struct vecteur{
        point origine;
        point destinataire;
    } vecteur;



}