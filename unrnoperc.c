#include <stdio.h>
union
{int a[5],r;
char ch[15];
}s;
int main()
{int i,p=0;
printf("enter 5 subjects marks ,roll no,name in this order\n");
for(i=0;i<5;i++)
scanf("%d",&s.a[i]);
scanf("%d",&s.r);
for(i=0;i<15;i++)
scanf("%c",&s.ch[15]);
s.a[3]=s.a[0];
for(i=0;i<5;i++)
p=p+s.a[i];
printf("%d%%",p/5);
printf("%d",s.r);
return 0;
}

