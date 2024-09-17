#include <stdio.h>
#include <math.h>

int main(){
	float a,b,c,D,R1,R2,IP,RP;
	 printf("Enter coefficients a,b,c");
	 scanf("%f%f%f",&a,&b,&c);
	 
	 D=b*b-4*a*c;
	 
	 if(D>0){
	 	R1=(-b+sqrt(D))/2*a;
	 	R2=(-b-sqrt(D))/2*a;
	 	printf("Root 1=%f and Root 2=%f",R1,R2);
	 }else if(D==0){
	 	R1=R2=-b/2*a;
	 	printf("Root 1 and 2=%f",R1);
	 }else if(D<0){
	 	IP=sqrt(-D)/2*a;
	 	RP=-b/2*a;
	 	R1=IP+RP;
	 	R2=IP-RP;
	 	printf("Root 1 is =%f and Root 2 is =%f",R1,R2);
	 }
	
	return 0;
}
