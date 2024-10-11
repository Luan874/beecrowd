#include <stdio.h>
 
int main() {
 
    double raio,area;
    scanf("%lf",&raio);
    double pi = 3.14159;
    
    area = (raio * raio) * pi;
     
    printf("A=%.4lf\n",area);
    
    return 0;
}
