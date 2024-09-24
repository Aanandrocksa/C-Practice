#include<stdio.h>
int main()
{
    char _operator ;
    float num1, num2;

    printf("Enter an operator (+, -, *, /): ");
    scanf("%c", &_operator);
    printf("Enter two operands: ");
    scanf("%f %f", &num1, &num2);
    switch(_operator){
    		case '+':
    	printf("sum is %f+%f=%f\n",num1,num2,num1+num2);
    	break;
    	 	case '-':
    	printf("difference is %f-%f=%f\n",num1,num2,num1-num2);
    	break;
    		case '*':
    	printf("product is %f*%f=%f\n",num1,num2,num1*num2);
    	break;
    		case '/':
    		if(num2 !=0){
    			printf("divission %f/%f=%f\n",num1,num2,num1/num2);
			}
    	else{
    		printf("Error");
		}
         default:
         	printf("Thanks");
	}
    	return 0;
	}

