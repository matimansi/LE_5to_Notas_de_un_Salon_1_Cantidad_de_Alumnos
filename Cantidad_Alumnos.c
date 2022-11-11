
/*
	Consulto cantidad de alumnos existentes en el salón y verifico que supere las 30 personas y que sean por lo menos 1.
	En caso contrario, indicarlo por pantalla y volver a solicitar datos. Devuelve la cantidad de alumnos.

	NO FUNCIONA EL DO WHILE

	GDB COMPILER
	main.c: In function ‘cantidad_alumnos’:
	main.c:20:11: warning: format ‘%d’ expects argument of type ‘int *’, but argument 2 has type ‘int’ [-Wformat=]
	20 |   scanf("%d", cantidad_alumnos);
		|          ~^   ~~~~~~~~~~~~~~~~
		|           |   |
		|           |   int
		|           int *
*/

#include <stdio.h>

int cantidad_alumnos(void);

int main()
{
	int alumnos;
	printf("\nBienvenido a mi programa...\n");
	alumnos = cantidad_alumnos();
	printf("La cantidad de alumnos es: %d", alumnos);
	return 0;
}

int cantidad_alumnos(void)
{
	int cantidad_alumnos;
	do
	{
		printf("Ingrese la cantidad de alumnos\n>>> ");
		scanf("%d", &cantidad_alumnos);
		printf("%d", cantidad_alumnos);
	}
	while (cantidad_alumnos > 30);
	return (cantidad_alumnos);
}
