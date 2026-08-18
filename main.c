#include <stdio.h>
#include <stdlib.h>
#include "calculadora.h"

int main(int argc, char *argv[])
{
	if(argc != 4) 
	{ 
		printf("Debe usar el formato <numero1> <operacion> <numero2>\n");
		return -1;
	}

	double numero1 = atof(argv[1]);
	char operacion = argv[2][0];
	double numero2 = atof(argv[3]);

	double resultado;

	switch(operacion)
	{
		case '+':
			resultado = sumar(numero1, numero2);
			break;
		case '-':
			resultado = restar(numero1, numero2);
			break;
		case '*':
			resultado = multiplicar(numero1, numero2);
			break;
		case '/':
			if(numero2 == 0)
			{
				printf("No se puede dividir entre cero.\n");
				return 1;
			}

			resultado = dividir(numero1, numero2);
			break;
		default:
			printf("Operación no es válida.\n");
	}

	printf("Resultado: %.2f\n", resultado);

	return 0;

}	
