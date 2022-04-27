#include <stdio.h>

int main(){
	int numero;
	
	printf("Digite o numero 1 se e legalmente menor de idade e 2 se e maior de idade\n");
	scanf(" %d", &numero);
	
	switch(numero){
		case 1:{
			printf("Voce possui idade menorr que 18 anos!");
			break;
		}
		
		case 2: {
			printf("Voce possui idade maior que 18 anos!");
			break;
		}
		
		default: printf("Nao consigo entender isso :(\n");
	}
	
//O switch case escolhe uma das duas opções dentro da variável; o default é o "nenhuma delas"	
}
