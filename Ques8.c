#include <stdio.h>
void reverse(char *s,int size)
{
	char a[size];
	for(int i=0;i<size;i++)
	{
		a[i]=s[size-i-1];
	}
	for(int i=0;i<size;i++)
	{
		printf("%c",a[i]);
	}

}


int main()
{
	char s[]="hello world";
	int i=0,len=0;
	while(s[i]!='\0')
	{
		len++;
		i++;
	}

	reverse(s,len);


}