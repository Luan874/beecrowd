#include <stdio.h>
 
int main() {

  double R;
  double volume,pi = 3.14159;
  scanf("%lf",&R);
  
  volume = (4 * pi * (R*R*R))/3.0;
   
  printf("VOLUME = %.3lf\n",volume);    
       
    return 0;
}
