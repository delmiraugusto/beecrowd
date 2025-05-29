#include<stdio.h>
#include<stdlib.h>
#include<string.h>

void caesar(char f[1000], int d){
   int i, n;
   n = strlen(f);
   for(i=0; i<n; i++){
       if (f[i] >= 'A' && f[i] <= 'Z') {
            f[i] = 'A' + ( (f[i] - 'A' - d + 26) % 26 );
        }
   }
}

int main()
{
	int n,i;
	char frase[1000];
	int deslocamento;
	
	scanf("%d\n",&n);
	for ( i=1; i<=n; i=i+1 ){
		scanf("%[^\n]%*c",frase);
		scanf("%d\n",&deslocamento);
		caesar(frase, deslocamento);
		printf("%s\n",frase);
	}
    return 0;
}
