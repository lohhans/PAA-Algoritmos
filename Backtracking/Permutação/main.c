#include "permutacao.h"
#include "time.h"

int main(int argc, char *argv[]){
	clock_t tempo;
	int tam_recebido, aux = 0;
	int v[100]; //Tamanho do vetor maximo de numeros

  	printf("Digite o tamanho do vetor a ser permutado (o maximo eh 100): ");
  	scanf("%i", &tam_recebido);
	printf("\n");

	while (aux < tam_recebido){
		int num;
		printf("Digite um numero: ");
	  	scanf("%i", &num);

		v[aux] = num;
    	aux++;
  	}

	printf("\n");
	tempo = clock();
	permuta(v, 0, tam_recebido - 1); //Chama a funcao Backtracking para permutar
	tempo = clock() - tempo;

	printf("\nO tempo do Algoritmo de Permutação feito com Backtracking foi de: %f ms\n", ((float)tempo)/CLOCKS_PER_SEC);

	return 0;
}
