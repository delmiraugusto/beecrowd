#include <stdio.h>
 
int somaImpares(int x, int y){
    int i, soma, cont=x;
    if(x%2!=0){
        soma = x;
    }
    else{
        soma = x+1;
        cont++;
    }
    for(i=1; i<y; i++){
        cont = cont+2;
        soma = soma+cont;
    }
    return soma;
}
 
int main(void) { 
    int i,n,x,y;
    scanf("%d", &n);
    for(i=0; i<n; i++) { 
       scanf("%d %d",&x,&y); 
       printf("%d\n", somaImpares(x,y));
    } 
    return 0; 
} 
