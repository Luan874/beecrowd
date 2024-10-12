#include <stdio.h>
 
int main() {
 
    int tempo = 10, vm = 85;
    scanf("%d %d",&tempo,&vm);
    int distancia,consumo = 12;
    scanf("%d",&consumo);
    float litros;
    
    distancia = tempo * vm;
    scanf("%d",distancia);
    litros = distancia / 12.0;
    scanf("%f",&litros);
    
    printf("%.3f\n",litros);
 
    return 0;
}
