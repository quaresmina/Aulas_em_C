#include <stdio.h>

int main(){
	char inicial;
	int idade;
	printf("Entre com sua idade e a sua inicial:\n");
	scanf("%d %c", &idade, &inicial);
	printf("Voce tem %d anos e seu nome comeca com %c\n", idade, inicial);
}
