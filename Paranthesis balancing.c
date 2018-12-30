#include<stdio.h>
#include<string.h>
int main()
{int t=-1,i;
	char a[100],b[100];
	gets(a);
	for (i=0;i<strlen(a);i++)
	{if (a[i]=='{'||a[i]=='('||a[i]=='[')
		{	t++;
			a[t]=a[i];}
		else if (a[i]==']'||a[i]=='}'||a[i]==')')
		{	t++;
			a[t]=a[i];
			}
		if (a[t-1]=='(')
			{if (a[t]==')')
				t=t-2;}
		if (a[t-1]=='{')
			{if (a[t]=='}')
				t=t-2;}
		if (a[t-1]=='[')
			{if (a[t]==']')
				t=t-2;}}
	if (t==-1)
		printf("Yes");
	else
		printf("No");}
