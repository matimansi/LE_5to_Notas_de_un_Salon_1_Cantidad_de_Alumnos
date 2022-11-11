
#include <stdio.h>

int cantidad_alumnos(void);

int main()
{
	int alumnos;
	printf("\nBienvenido a mi programa...\n");
	alumnos = cantidad_alumnos();
	printf("La cantidad de alumnos es: %d\n\n", alumnos);
	return 0;
}

int cantidad_alumnos(void)
{
	int cantidad_alumnos;
	printf("Ingrese la cantidad de alumnos\n>>> ");
	scanf("%d", &cantidad_alumnos);
	while (cantidad_alumnos < 30)
	{
		printf("Valor Ingresado NO VALIDO\nLa cantidad de alumnos debe ser mayor a 30\n>>> ");
		scanf("%d", &cantidad_alumnos);
	}
	return (cantidad_alumnos);
}
