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
	 
}




