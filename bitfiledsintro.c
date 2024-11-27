#include<stdio.h>
int main()
{ int a,b,c;
struct trial
{unsigned int x:3;
unsigned int y:4;
unsigned int z:2;
}s;
scanf("%d%d%d",&a,&b,&c);
s.x=a;
s.y=b;
s.z=c;
printf("%d%d%d",s.x,s.y,s.z);
return 0;
}
