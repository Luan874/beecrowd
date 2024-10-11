#include <stdio.h>
 
int main() {
 
   int num, horas;
   float valorhora,salario;
   scanf("%d %d %f",&num,&horas,&valorhora);
   
   salario = horas * valorhora;
   
   printf("NUMBER = %d\n",num);
   printf("SALARY = U$ %.2f\n",salario);
 
    return 0;
}
