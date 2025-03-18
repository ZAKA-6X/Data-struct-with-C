#include <stdio.h>
#include <string.h>
#include <stdlib.h>

//Definition de la structure:
typedef struct lst_s
{
    int val;
    struct lst_s* suiv;
} lst_s;

//Creer liste:
lst_s* creerlist(){
    lst_s *L;

    L = NULL;
    printf("La list est creer!\n");
    return L;

}

//Len liste:
int len_lst_s(lst_s *L){
    if (L == NULL){
        return 0;
    }

    int count = 0;
    while(L!=NULL){
        count++;
        L = L->suiv;
    }

    return count;
}

//Ajouter au debut de L:
lst_s* ajoutdebut(lst_s *L, int val){
    lst_s* tmp;
    tmp = (lst_s*)malloc(sizeof(lst_s));
    tmp->val = val;
    tmp->suiv = L;
    L = tmp;

    return L;
}

//Ajout a la fin de L:
lst_s* ajoutfin(lst_s *L, int val){
    if (L == NULL){
        return ajoutdebut(L,val);
    }
    lst_s* tmp, * c = L;
    tmp = (lst_s*)malloc(sizeof(lst_s));
    tmp->val = val;
    tmp->suiv = NULL;

    //attend dernier element:
    while(c->suiv != NULL){
        c = c->suiv;
    }
    c->suiv = tmp;

    return L;

}

//Ajout au milieu de L:
lst_s* ajoutmelieu(lst_s *L, int val, int pos){
    if (L == NULL || pos == 0){
        return ajoutdebut(L,val);
    }

    int len_L = len_lst_s(L);
    if (pos > len_L){
        printf("Saisir une index valable!");
        return L;
    }
    if(pos == len_L){
        return ajoutfin(L,val);
    }

    lst_s* tmp = (lst_s*)malloc(sizeof(lst_s));
    lst_s* c = L;
    int index=0;
    while(index < pos-1){
        c = c->suiv; 
        index++;
    }
    tmp->val = val;
    tmp->suiv = c->suiv;
    c->suiv = tmp;

    return L;
}

//affiche L:
void affiche(lst_s *L){
    if (L==NULL){
        printf("Your list is Null!");
        return ;
    }
    printf("Head -> ");
    while(L!= NULL){
        printf("%d -> ", L->val);
        L = L->suiv;
    }
    printf("NULL\n");
}

int main(){

    lst_s *L = creerlist();

    int choix;
    do {
        printf("\n=== Menu Liste Chainee Simple ===\n");
        printf("1. Ajouter au debut\n");
        printf("2. Ajouter a la fin\n"); 
        printf("3. Ajouter au milieu\n");
        printf("4. Afficher la liste\n");
        printf("0. Quitter\n");
        printf("Votre choix: ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: {
                int val;
                printf("Entrez la valeur: ");
                scanf("%d", &val);
                L = ajoutdebut(L, val);
                break;
            }
            case 2: {
                int val;
                printf("Entrez la valeur: ");
                scanf("%d", &val);
                L = ajoutfin(L, val);
                break;
            }
            case 3: {
                int val, pos;
                printf("Entrez la valeur: ");
                scanf("%d", &val);
                printf("Entrez la position: ");
                scanf("%d", &pos);
                L = ajoutmelieu(L, val, pos);
                break;
            }
            case 4:
                affiche(L);
                break;
            case 0:
                printf("Au revoir!\n");
                break;
            default:
                printf("Choix invalide!\n");
        }
    } while(choix != 0);

    return 0;

}