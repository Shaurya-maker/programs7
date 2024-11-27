#include<stdio.h>
#include<string.h>
void fun(char *a,int n)
{int *t,i;
for(i=0;i<n/2;i++)
{t=(a+i);
(a+i)=(a+n-i-1);
*(a+n-1-i)=*t;
}
}
int main ()
{char a[1000];
printf("input string\n");
fgets(a,sizeof(a),stdin);
fun(&a,strlen(a));
puts(a);
}
