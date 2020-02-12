#include<stdio.h>
int main()
{
   int *p;
   int a[5];
   p=&a[0];
   printf("input:\n");
   for(int i=0;i< 5;i++){
      scanf("%d",p+i);
      *(p+i)*=2;
   }

   printf("output:\n");
   for(int i=0;i<5;i++) {
      printf("%05d\n",*(p+i));
   }
   return 0;
}