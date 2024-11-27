#include<stdio.h>
#include<stdlib.h>
int main()
{int *a,*b,i;
a=(int*)calloc(20,sizeof(int));
b=(int*)calloc(10,sizeof(int));
printf("enter values for array a\n");
for(i=0;i<10;i++)
scanf("%d",&a[i]);
printf("enter values for array b\n");
for(i=0;i<10;i++)
scanf("%d",&b[i]);
for(i=0;i<10;i++)
a[10+i]=b[i];
for(i=0;i<20;i++)
printf("%d",a[i]);
return 0;
}
