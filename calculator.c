#include<stdio.h>
#include<stdlib.h>

int main() {
       int a;
       int b;
       int c;
       int opc;
       printf("\n1.- Suma");
       
       printf("\n2.- Resta");
       
       printf("\n3.- Multiplicacion");
       
       printf("\n4.- Division");
       
       printf("\nEscoge una opcion:  ");
       scanf("%d", &opc);
       printf("\nDame el primer valor: ");
       scanf("%d", &a);
       printf("\nDame el segundo valor: ");
       scanf("%d", &b);
       
       if (opc == 1) {
           printf("\nEl resultado de la suma es: %d ", a + b);

       }


       if (opc==2) {
           printf("\nEl resultado de la resta es: %d ", a - b);
       }


       if (opc==3) {
           printf("\nEl resultado de la multiplicacion es: %d ", a * b);
       }

       
       if (opc == 4) {
           printf("\nEl resultado de la division es: %d ", a / b);
       }
     
	return 0;
}
