#include <stdio.h>
int main(){
	int num,temp,remainder,reverse=0;
	printf("Enter a number");
	scanf("%d",&num);
	 temp =num;
	 while(num!=0){
	 	remainder=num%10;
	 	reverse=reverse*10+remainder;
	 	num=num/10;
	 }
	 printf("Given no is %d\n",temp);
	  printf("Reversed no is %d\n",reverse);
	  if(temp==reverse){
	  	printf("The no is a palindrome\n");
	  	}else printf("The no is not a palindrome");
	  	
	  	return 0;
	 
}
