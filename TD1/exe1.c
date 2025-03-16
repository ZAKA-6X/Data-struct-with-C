#include <stdio.h>
int main(){

    typedef struct fraction
    {
        int num, den;
    } fraction;

    fraction somme(fraction N1, fraction N2){
        fraction S;

        if(N1.den != N2.den){
            S.num = (N1.num*N2.den)+(N2.num*N1.den);
            S.den = N1.den*N2.den;
        }else{
            S.num = N1.num + N2.num;
            S.den = N1.den;
        }

        return S;
    };

    fraction produit(fraction N1, fraction N2){
        fraction P;

        P.num = N1.num*N2.num;
        P.den = N1.den*N2.den;

        return P;
    };

    int pgcd(fraction N){
        int a = N.num, b=N.den;

        for(int i=b; i>0; i--){
            if ((b%i == 0)&&(a%i==0)){
                return i;
            }
        }
    };

    fraction simplifier(fraction N){
        int p=pgcd(N);

        N.num = N.num / p;
        N.den = N.den / p;

        return N;
    };

    //get data:
    fraction N1,N2;
    printf("Please input your p and q of first number: ");
    scanf("%d %d", &N1.num, &N1.den);
    printf("Please input your p and q of second number: ");
    scanf("%d %d", &N2.num, &N2.den);

    fraction S,P;
    S = somme(N1,N2);
    P = produit(N1,N2);
    P = simplifier(P);
    S = simplifier(S);

    printf("Somme: %d/%d", S.num,S.den);
    printf("Produit: %d/%d", P.num,P.den);

    return 0;
}