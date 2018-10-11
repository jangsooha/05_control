#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   int a;
   int b;
  
   printf("정수하나를 입력하시오 : \n");
   scanf("%d", &b);

   if(b>0)
{
   a = b;
}
   
   else
{
   a = -b;
}
   printf("절대값은 %i입니다.", a);

   return 0;
}
