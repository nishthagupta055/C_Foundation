#include <stdio.h>

int strend(char *s,char *t)
{


	int l1=0;
	int l2=0;
	for(int i=0;s[i]!='\0';i++)
	{
		l1++;
	}
	for(int i=0;t[i]!='\0';i++)
	{
		l2++;
	}

	int j=0;
	int count=0;

	for(int i=l1-1;i>=0;i--)
	{

		while(s[i]==t[l2-j-1]&&j<l2)
		{
			count++;
			i--;
			j++;
		}

		if(count==l2)
		{
			return 1;
		}
		break;
	}
	return 0;
}
int main()
{
	char s[]="abkdcdddkd";
	char t[]="kd";
	int index= strend(s,t);
	printf("%d",index);
	return 0;
}