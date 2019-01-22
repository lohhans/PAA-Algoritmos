#include "permutacao.h"

int main(int argc, char *argv[]){
	int tam_recebido;
  	printf("Digite o tamanho do vetor a ser permutado: ");
  	scanf("%i", &tam_recebido);
 	printf("O tamanho é %d\n", tam_recebido);

	int v2[10];
	int aux = 0;

	while (aux < tam_recebido){
		int num;
		printf("Digite um numero: ");
	  	scanf("%i", &num);

		v2[aux] = num;
    	aux++;
  	}

	int a = v2[2];

	printf("%d\n", a);

	// int tam_v = tam_recebido / sizeof(int);
	// printf("O tamanho 2 é %d\n", tam_v);
	//
	//
	// int v[] = {1, 2, 3, 4};
	// int tam_v2 = sizeof(v) / sizeof(int);
	// printf("O tamanho 3 é %d\n", tam_v2);


	//
	// permuta(v, 0, tam_v - 1);

	return 0;
}
