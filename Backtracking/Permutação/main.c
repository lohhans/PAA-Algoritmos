#include "permutacao.h"

int main(int argc, char *argv[]){
	int tam_recebido;
  	printf("Digite o tamanho do vetor a ser permutado (o maximo eh 100): ");
  	scanf("%i", &tam_recebido);

	int v[100]; //Tamanho do vetor maximo de numeros
	int aux = 0;

	while (aux < tam_recebido){
		int num;
		printf("Digite um numero: ");
	  	scanf("%i", &num);

		v[aux] = num;
    	aux++;
  	}

	permuta(v, 0, tam_recebido - 1); //Chama a funcao Backtracking para permutar

	return 0;
}
