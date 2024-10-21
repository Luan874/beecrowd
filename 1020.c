#include <stdio.h>
 
int main() {
 
    int n,aux;
    int anos;
    
    scanf("%d",&n);
    
    anos =  n/365;
    printf("%d ano(s)\n",anos);
    aux = n%365;
    printf("%d mes(es)\n",aux/30);
    aux = aux%30;
    printf("%d dia(s)\n",aux);
 
    return 0;
}
