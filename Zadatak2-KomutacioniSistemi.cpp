#include <stdio.h>
#include <iostream>
#include <cmath>
using namespace std;

int main(){
	float Aosc;
	int Time,TimeInSeconds,Cel;
	const double Fb=2048*10e2;
	double deltaP;
	const int Cram=256;
	
	printf("Unesite zeljenu tacnost oscilatora i vreme u satima");
	scanf("%f %d", &Aosc,&Time);
	
	TimeInSeconds=Time*60*60;
	
	deltaP=2*Aosc*Fb*TimeInSeconds;
    printf("Vrednost deltaP je : %.4f \n", deltaP);
   	
	for (int k=1;k<100;k++){
		Cel=k*Cram;
		if (Cel>=deltaP){
			break;
		}
	}
	
printf("Vrednost elasticne memorije je %d \n",Cel);
}

