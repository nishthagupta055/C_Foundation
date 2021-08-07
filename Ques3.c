#include <stdio.h>


int main()
{

    char s[]="C Course";
    int Vowels=0,Consonants=0;
    for(int i=0;i<s[i]!='\0';i++)
    {
        if(s[i]=='a'||s[i]=='A'||s[i]=='e'||s[i]=='E'||s[i]=='i'||s[i]=='I'||s[i]=='o'||s[i]=='O'||s[i]=='u'||s[i]=='U')
        {
            Vowels++;
        }
        else 
        {
            Consonants++;
        }
    }
    printf("Vowels = %d\n",Vowels);
    printf("Consonants = %d\n",Consonants);


}