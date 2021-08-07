#include<stdio.h>
#include<string.h>
int maxN=1e5;
int min(int n, int m)
{
     if(n<m)
     return n;
     else
     return m;
}

int Strncmp(char *s,char *t,int n)
{
    int n1=strlen(s);
    int n2=strlen(t);



    for(int idx = 0; idx < min(n , min( n1 , n2 )) ;++idx)
    {
        if(*(s+idx)!=*(t + idx))
        {
            
            return (int)(*(s+idx) - *(t + idx));
        }
        idx++;
    }
    if(n1==n2) 
    return 0;
    if(n1<n2) 
    return 1;
    else
    return -1; 
}

void Strncat(char *s, char*  t )
{
	int n = strlen(s);
	for(int i = 0; i < (int)strlen(t) ; ++i)
	{
		s[n] = t[i];
		n++;
	}
}

void Strncpy (char *s, char*  t , size_t n)
{
	if(strlen(t) < n)
	{
		for(int i = 0 ; i < (int)strlen(t) ; ++i)
		{
			s[i] = t[i];
		}

	}
	else
	{

            for(int i = 0 ; i < n ; ++i)
                {
                        s[i] = t[i];
                }


	}

}
int main()
{
	char s[maxN];
	char t[maxN];
	int n;
        printf("Enter n = ");
	scanf("%d",&n);




	printf("Enter two strings : ");
	scanf("%s %s",s,t);
	if(Strncmp(s,t,n) == 0)
        printf("Both Strings are equal\n");
	else if(Strncmp(s,t,n) > 0)
        printf("String 1 is larger\n");
        else
            printf("String 2 is larger\n");
        char cpy[maxN];
	for(int i = 0; i <(int) strlen(s) ; ++i) {
		    cpy[i]=s[i];
	    }
	printf("Concatinating %s and %s = ",s,t);
        Strncat(cpy,t);
        printf("%s\n",cpy);
        Strncpy(s,t,n);
	printf("Two strings after we copy n characters are : s = %s\n t = %s\n",s,t);


}