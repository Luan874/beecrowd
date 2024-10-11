#include <stdio.h>
 
int main() {
 
   char nome[10];
   double salariofixo,vendas,comissao,total;
   scanf("%s %lf %lf",&nome,&salariofixo,&vendas);
   
   comissao =  vendas * 0.15;
   
   total  = salariofixo + comissao;
   
   printf("TOTAL = R$ %.2lf\n",total);
 
    return 0;
}
