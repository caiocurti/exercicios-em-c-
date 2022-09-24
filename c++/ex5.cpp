	#include <stdio.h>



int main(){
	
	/* Apartir do diâmetro de um círculo que será digitado, calcular e exibir sua área. */
	float diametro,area;
	printf("Entre com o valor do diametro do circulo:");
	scanf ("%f", &diametro);
	area= 3.1415*diametro*diametro/4;
	printf("A area do circulo= %2.f", area);
	
}
