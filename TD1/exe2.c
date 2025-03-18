#include <stdio.h>
#include <math.h>

int main(){

    typedef struct point{
        int x,y;
    } point;

    typedef struct vecteur{
        point origine;
        point destinataire;
    } vecteur;

    point creerpoint(){
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

    float norme(vecteur v){
        return sqrt(pow((v.destinataire.x - v.origine.x),2) + pow((v.destinataire.y - v.origine.y),2));
    }

    //Creation de points:
    point p1 = creerpoint();
    point p2 = creerpoint();

    vecteur v = creervecteur(p1,p2);

    float n = norme(v);

    printf("La norme de votre vecteur est: %.2f", n);

    return 0;

}