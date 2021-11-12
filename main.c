#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include<stdbool.h>

int main()
{
    int N1 ,N2 ;
    bool a;
    char choix ;
    printf("saisir le nombre a\n");
    scanf("%d",&a);
    if(a==1){
    printf("saisir le nombre N1\n");
    scanf("%d",&N1);
    printf("saisir l'opérateur de choix\n");
    scanf("%S",&choix);
    printf("saisir le nombre N2\n");
    scanf("%d",&N2);
    }
    else if(a==0){
        printf("off");
    }
    else{
        printf("error");
    }
    switch(choix)
    {
    case '+':
    printf ("%d + %d = %d\n",N1,N2,N1+N2);
    break;
    case '-':
    printf ("%d - %d = %d\n",N1,N2,N1-N2);
    break;
    case '*':
    printf ("%d * %d = %d\n",N1,N2,N1*N2);
    break;
    case '/':
        if(N2 !=0){
    printf ("%d / %d = %.2f\n",N1,N2,(float)N1/N2);
    }
    else {
        printf("Error");
    }
    break;
    default : printf("operation inconnue");

    }
    return 0;
}
