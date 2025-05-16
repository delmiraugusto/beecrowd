#include<stdio.h>
#include<stdlib.h>
#include<math.h>

typedef struct{
    double x;
    double y;
} TPonto;

void lerPonto(TPonto *p)
{
   scanf("%lf", &(*p).x);
   scanf("%lf", &(*p).y);
}

double distancia(TPonto *p1, TPonto *p2)
{
    return sqrt(pow(((*p2).x - (*p1).x), 2) + pow(((*p2).y - (*p1).y),2));
}

int main()
{
	int n,i;
	TPonto p1,p2;
	double dist;
	
	lerPonto(&p1);
	lerPonto(&p2);
	dist = distancia(&p1, &p2);
	printf("%.4f\n", dist); 	

	return 0;
}

