#include <stdio.h>

pos creerpoint(){
    point p;
    int x,y;

    printf("Saisir votre Coordonnes: ");
    scanf("%d %d", &x,&y);

    return p;
}

int main(){

    typedef struct point{
        int x,y;
    } point;



}