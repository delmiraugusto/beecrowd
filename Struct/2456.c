#include <stdio.h>

void ler5Cartas(int vet[5]){
    int i;
    for(i=0; i<5; i++){
        scanf("%d", &vet[i]);
    }
}

char cresc_descr_nulo(int vet[5]){
    int i, c=1, d=1;
    for(i=0; i<4; i++){
        if(vet[i] < vet[i+1])
            d = 0;
        if(vet[i] > vet[i+1])
            c = 0;
    }
    if(c==0 && d==0)
        return 'N';
    else if(c==1)
            return 'C';
        else
            return 'D';
}

int main(void) { 
     int vet[5]; 
     char letra; 
     ler5Cartas(vet); 
     letra = cresc_descr_nulo(vet); 
     printf("%c\n",letra); 
     return 0; 
}

