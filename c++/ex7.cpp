#include <stdio.h>

int main (){



/*7) A partir dos valores da aceleração (a em m/s²), da velocidade inicial (V0em m/s) e do tempo de percurso (t em s). Calcular e exibir a velocidade final de automóvel em km/h. Fórmula para o cálculo da velocidade em m/s: V = V0+ a. t */
		float aceleracao, inicial, tempo, final;
		printf("Bem vindo\nEntre com a aceleracao em (m/s^2):");
		scanf ("%f", &aceleracao);
		printf ("Entre com a velocidade inicial(m/s):");
		scanf ("%f", &inicial);
		printf ("Entre com o tempo (s):");
		scanf ("%f", &tempo);
		final= inicial + (aceleracao*tempo);
		printf ("A velocidade final em m/s e de: %2.f \n", final);
		printf ("A sua velocidade final em km/h e de: %2.f \n" , final/3.6);
		
	}
	
	
