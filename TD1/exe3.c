#include <stdio.h>
#include <string.h>

typedef struct filiere
{
    char filiere[100];
    char semester[2];
} filiere;

typedef struct etudiant{
    char nom[100];
    int note;
    struct filiere f;
} etudiant;

etudiant saisir(){
    etudiant e;

    printf("Saisir Votre Nom: ");
    scanf("%s", e.nom);
    printf("Saisir Votre Note: ");
    scanf("%d", &e.note);
    printf("Saisir Votre Filiere: ");
    scanf("%s", e.f.filiere);
    printf("Saisir Votre Semestre: ");
    scanf("%s", e.f.semester);

    return e;
}

void affiche(etudiant e){
    printf("Nom: %s\n", e.nom);
    printf("Note: %d\n", e.note);
    printf("Filiere: %s\n", e.f.filiere);
    printf("Semestre: %s\n", e.f.semester);
}

void recherche(int taille, char* nom, etudiant *T){
    for(int i=0; i<taille; i++){
        if(strcmp(T[i].nom, nom) == 0){
            affiche(T[i]);
            return;
        }
    }
    printf("Error!");
}

int main(){
    int taille;
    printf("Saisir une taille: ");
    scanf("%d", &taille);

    etudiant T[taille];

    for (int i=0; i<taille; i++){
        printf("// ============Etudiant %d\n", i+1);
        T[i] = saisir();
    }

    char nom[100];
    printf("Saisir un nom a chercher: ");
    scanf("%s", nom);

    recherche(taille, nom, T);

    return 0; 

}