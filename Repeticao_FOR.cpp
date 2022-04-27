#include <stdio.h>
#include <stdlib.h>

int main(){
	float salario, salario_maior, funcionario_salario_maior, soma, media = 0;
	int cont;
	for (cont = 1; cont <=3; cont++){
		
		printf("Qual o salario do %dº funcionario?\n", cont);
		scanf("%f", &salario);
			if (salario > salario_maior){
				salario_maior = salario;
				funcionario_salario_maior = cont;	
			}
		soma = soma + salario;
	}
	media = soma/3;
	printf("O maior salario dentre esses funcionarios eh do %.2f que recebe R$%.2f\n", funcionario_salario_maior,salario_maior);
	printf("A madia salarial desses funcionarios eh de %.2f", media);
}
