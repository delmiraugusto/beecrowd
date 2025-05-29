#include <stdio.h>
 
int ehPerfeito(int num){
    int i, soma=0;
    for(i=1; i<num; i++)
        if(num%i==0)
            soma = soma + i;
    if(soma==num)
        return 1;
    else
        return 0;
}
 
int main(void) { 
   int i,n,num; 
   scanf("%d", &n); 
   for(i=0; i<n; i++) { 
     scanf("%d",&num); 
     if (ehPerfeito(num)) 
        printf("%d eh perfeito\n",num); 
     else 
        printf("%d nao eh perfeito\n",num); 
     } 
     return 0; 
} 
