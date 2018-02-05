#include<stdio.h>
int main()
{
    int a,b,c,d;
printf("Enter the limit : ") ; 
 scanf("%d", &a); 
 printf("\nEnter the number : ") ; 
 scanf("%d", &b); 
 printf("\nThe numbers divisible by %d are :\n\n", d) ; 
 for(c=1;c<=a;c++) 
  if(c%b== 0) 
   printf("%d\n",c); 
return 0;
}
