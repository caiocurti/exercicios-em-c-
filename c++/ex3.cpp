#include <stdio.h>



int main(){


/*3) Calcular e exibir a média aritmética de quatro valores quaisquer que serãodigitadospelo usuário. */
	
	float valor1, valor2, valor3, valor4;
	printf ("Entre com o primeiro valor: ");
	scanf ("%f", &valor1);
	printf ("Entre com o segundo valor: ");
	scanf ("%f", &valor2);
	printf ("Entre com o terceiro valor: ");
	scanf ("%f", &valor3);
	printf ("Entre com o quarto valor: ");
	scanf ("%f", &valor4);
	
	printf ("A sua media aritmetica e de %2.f:" , (valor1+valor2+valor3+valor4)/4);
	

	}	
