#include <stdio.h>
int any(char *s1,char *s2,int len1,int len2)
{   int k;

	for(int i=0;i<len2;i++)
	{
       for(int j=0;j<len1;j++)
		{
			if(s1[j]==s2[i])
			{
				return j;
			}
		}
    }
	return -1;
}


int main()
{
	char s1[]="abcd";
	char s2[]="kz";
	int i=0,j=0,len1=0,len2=0;
	while(s1[i]!='\0')
	{
		len1++;
		i++;
	}
	while(s2[j]!='\0')
	{
		len2++;
		j++;
	}
	int d=any(s1,s2,len1,len2);
	printf("%d",d);

}
