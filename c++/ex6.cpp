#include <stdio.h>

int main (){



	/* 6) Entrar via teclado com o valor da cotação do dólar e uma certa quantidade de dólares. Calcular e exibir o valor correspondente em Reais (R$). */
	float cotacao, quantidade, real;
	printf("Bem vindo ao conversor de dolares em reais.\nEntre com a cotacao do dolar atual:");
	scanf("%f", &cotacao);
	printf("Insira a quantidade de dolares que deseja converter para real:");
	scanf("%f", &quantidade);
	real=cotacao*quantidade;
	
	printf("O valor convertido para real e de: %2.f", real);
	
}
	
