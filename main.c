#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
   int a;
   int b;
  
   printf("�����ϳ��� �Է��Ͻÿ� : \n");
   scanf("%d", &b);

   if(b>0)
{
   a = b;
}
   
   else
{
   a = -b;
}
   printf("���밪�� %i�Դϴ�.", a);

   return 0;
}
