#include<stdio.h>
float avg(int a[],float n)
{float c=0;
int i;
for(i=0;i<n;i++)
c=c+a[i];
printf("%f",c/n);
}
int main()
{int i,j,a[j],n;
printf("enter your arrays length\n");
scanf("%d",&n);
printf("enter your array\n");
for(i=0;i<n;i++)
scanf("%d",&a[i]);
avg(a,n);
return 0;
}
