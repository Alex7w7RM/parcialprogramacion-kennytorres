#include "iostream"
#include "string"
#include <stdio.h>
#include <string.h>
using namespace std;

char pass[10];
int correcto;
int intento;
const char contrasena[]="123456"; 

int main ( int argc, char** argv){
	
	// contraseña
	
		intento=1;
    correcto=0;
    printf("Ingrese la contrasena: "); gets(pass); printf("\n");
    if (strcmp(pass,contrasena)==0) correcto=1;
    
    while ((correcto==0)&&(intento<3))
    {
        intento++;
        printf("Contrasena incorrecta. %i intento: ", intento); gets(pass); printf("\n");
        if (strcmp(pass,contrasena)==0) correcto=1;
    }
    if (correcto==0) printf("Intentos insuficientes.");
    
    else
        {
            printf("Contraseña correcta.");  
            
        }
	
	
	
	//factorizacion
	
	
	int dat1, dat2=1;
	
	printf("ingrese el numero que desea factorizar:");
	scanf ("%d", & dat1);
	
	for(dat1;dat1>0; dat1--){
		dat2=dat2*dat1;
		
	}
	printf("%d",dat2);
	
	
	
	//tabla de multiplicar
	
	char seguir;
    int a, num3;

    
    
        printf( " \ningrese el numero que desee multiplicar en la tabla:\n " );
        scanf( "%d", & num3 );

        printf( "\n   La tabla de multiplicar del %d es:\n", num3 );

        for ( a = 1 ; a <= 10 ; a++ )
            printf( "\n   %d * %d = %d", a, num3, a * num3 );
	 
	 
	 
	 
	 
	 
	 // numeros pares e impares
	
	int impar1= 0, par2 = 0, tPar = 0; 
    int tImpar = 0, tPar1 = 0, tImpar1 = 0, par1 = 0;
    int par = 0, impar = 0;
    int nu[10];
    int pares[10];
    int impares[10];
 	
    cout << "Introduccir datos:" << "\n";
    for (int i = 0; i < 10; i++ )
    {
        cout << "(" << i + 1 << ":10): ";
        cin >> nu[i];
 
        if (nu[i] % 2 == 0)
            pares[par++] = nu[i];
        else
            impares[impar++] = nu[i];
    }

    cout << "\nNumeros Pares: ";
    for (int i = 0; i < par; i++)
        cout << pares[i] << " ";
        
        
 
    cout << "\nNumeros Impares: ";
    for (int i = 0; i < impar; i++)
        cout << impares[i] << " ";
 
    cout << endl;
    

 
    for (int i = 0 ; i < 10; i++)
    {
        
        if (nu[i] % 2 == 0)
        {
            tImpar += nu[i];
            impar1++;
        }
        else
            tPar += nu[i];
    
        
        if (nu[i] % 2 == 0)
        {
            tPar1 += nu[i];
            par1++;
        }
      else
            tImpar1 += nu[i];
	  
      }
 
    cout << "\nEl total de los numeros impares es: " << tPar << "\n";
    cout << "\nEl total de los numeros pares es: " << tImpar << "\n";
	cout << "El promedio de los numeros impares es: " << float(tImpar1/impar1) << "\n";
    cout << "\nLos numeros pares son: " << par1 << endl;
	 
	 
	 // dias de la semana
	 cout<< "Que dia de la semana le interesaria saber si es de descaso o laboral?" << "\n";
	cout << "Entre los parentecis esta el diminutivo para que pueda seleccionar el dia que usted dese" << "\n";
	cout<< " Lunes   (l) " << "\n"; 
	cout<< " Martes  (m): " << "\n"; 
	cout<< " Miercoles (x) " << "\n"; 
	cout<< " Jueves  (j)" << "\n";
	cout<< " Viernes (v)" << "\n";
	cout<< " Sabado  (s)" << "\n";
	cout<< " Domingo (d)" << "\n";	
	char opc1 ;
	cout<< "ingrese un numero para seleccionar la opcion que usted desee ejecutar" << "\n"; 
	cin>> opc1;
	switch(opc1){ 
		case 'l': cout << "trabajo"; break;
		case 'm': cout << "trabajo"; break;
		case 'x': cout << "trabajo"; break;
		case 'j': cout << "trabajo"; break;
		case 'v': cout << "trabajo"; break;
		case 's': cout << "descanso"; break;
		case 'd': cout << "descanso"; break;
	}
	



	
	
}




