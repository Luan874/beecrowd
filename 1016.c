#include <stdio.h>
 
int main() {
 
    int X = 60, Y = 90;
    int distancia;
    
    distancia = abs(X - Y);
    scanf("%d",&distancia);
    
    int tempo = distancia * 2;
    scanf("%d",&tempo);
    
    printf("%d minutos\n",tempo);
    
 
    return 0;
}
