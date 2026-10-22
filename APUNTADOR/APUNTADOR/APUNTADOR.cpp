//ESCUELA--UNIVERSIDAD POLITECNICA DE TULANCIONGO
//CARRERA--SISTEMAS ELECTRONICOS Y TELECOMUNICACIONES
//MATERIA--PROGRAMACION ESTRUCTURADA
//NOMBRE--FRANK GUERRERO CHAVEZ

#include <stdio.h>

int main()
{
	int A;
	int B;
	int* aptr = &A;
	char texto[] = "Frank";
	*aptr = 20;
	B = 15;
	printf("EL VALOR DE A ES:%d\n y su direccion de memoria es : % x\n", A, (unsigned int)aptr);
	aptr = &B;
	printf("EL VALOR DE B ES:%d\n y su direccion de memoria es : % x\n", B, (unsigned int)aptr);
	for (int i = 0; i < 10; i++)
	{
		printf("%c y su direccion de memoria es : % x\n", *(texto + i), (unsigned int)(texto + i));
	}
	return 0;
}
