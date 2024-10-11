#include <stdio.h>
 
int main() {
 
    int cd1,num1;
    int cd2,num2;
    double valor1,valor2,valortotal;
    scanf("%d %d %lf",&cd1,&num1,&valor1);
    scanf("%d %d %lf",&cd2,&num2,&valor2);
    
    valortotal = ((num1 * valor1)+(num2*valor2));
    
    printf("VALOR A PAGAR: R$ %.2lf\n",valortotal);
    
    return 0;
}
