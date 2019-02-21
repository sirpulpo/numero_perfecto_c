#include<stdio.h>


int divisores (int x)
{
	int cont, divisor=0, suma=0;
	for(cont=1;cont<=x;cont++)
	{
		divisor=x/cont;
		if(x%cont==0)
		{
			suma=suma+divisor;
		}
	}
	return suma;
}


int main()
{
	system("color f0");
	printf("\n\t\t\tPrograma 09 Numero perfecto");
	printf("\n\t\t\t___________________________");
	printf("\n\tEste programa te ayudara a determinar si un numero entero");
	printf("\n\tpositivo es perfecto.");
	printf("\n\tUn numero es perfecto cuando la suma de sus divisores, menos");
	printf("\n\tel mismo numero, es igual al numero.\n\n\n");

	system("pause");
	system("cls");
	int opci;
	do
	{
    	int num, perfecto;
		printf("Dame un numero: ");
		scanf("%d",&num);
		while(num<=0)
		{
			printf("El numero debe ser positivo.\n");
			printf("Dame un numero: ");
		    scanf("%d",&num);
		}
		perfecto=divisores(num);
		perfecto=perfecto-num;
		if(perfecto==num)
		{
			printf("%d Si es numero perfecto.\n", num);
		}
		else
		{
			printf("%d No es numero perfecto.\n", num);
		}
		printf("\n\tDesea otro calculo?\n");
		printf("\tSi=1\tNo=0\t");
		scanf("%d",&opci);
		while(opci!=1&&opci!=0)
		{
			printf("\n\tLa opcion no es valida.");
			printf("\n\tIntente de nuevo.");
			printf("\n\tDesea otro calculo?\n");
			printf("\tSi=1\tNo=0\t");
			scanf("%d",&opci);
		}
		system("cls");
    }while(opci==1);
	return 0;
}
