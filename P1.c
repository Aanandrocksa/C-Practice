#include <stdio.h>
int main()
{
    float a,b,c,greatest_no;
    printf("Enter the values of a,b,c");
    scanf("%f%f%f",&a,&b,&c);
    greatest_no=(a>b) ? ((a>c) ? a:c) : ((b>c) ? b:c);
    printf("greatest is%f",greatest_no);
    return 0;
}
