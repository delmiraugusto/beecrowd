#include<stdlib.h>
#include<stdio.h>

void ler(int *a, int *b, int *c){
    scanf("%d %d %d", &*a, &*b, &*c);
}

void ordenar(int *x, int *y, int *z){
    
    int aux;
    
    if(*x>*y){
        aux = *x;
        *x = *y;
        *y = aux;
    }
    if(*x>*z){
        aux = *x;
        *x = *z;
        *z = aux;
    }
    if(*y>*z){
        aux = *z;
        *z = *y;
        *y = aux;
    }
}

int main()
{
	int a,b,c,i,x,y,z;
	
	ler(&a,&b,&c);
	x = a;
	y = b;
	z = c;
	ordenar(&x,&y,&z);
	printf("%i\n%i\n%i\n\n%i\n%i\n%i\n",x,y,z,a,b,c);
	return 0;
}

