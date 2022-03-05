#include "iostream"
#include "string"

int main (int argc, char** argv){
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
	 
}




