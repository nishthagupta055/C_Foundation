#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int maxN=1000;
int st[1000];
int index_=-1;

int top()
{
    return st[index_];
}

void push(int x)
{
    index_++;
    if(index_==maxN)
    return;
    st[index_]=x;
}

void pop()
{
    if(index_==-1)
    return ;
    index_--;
}



int main()
{
	int tokens;
	printf("Enter : ");
	scanf("%d",&tokens);
	for(int tc=0;tc<tokens;++tc)
	{
		char cur_token[maxN];
		scanf("%s",cur_token);

        if(strcmp(cur_token,"+")==0)
                {
			int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        
		        int new_value= no1 + no2;	
                        push((new_value));
                }
		
		else if(strcmp(cur_token,"-")==0)
                {    

			int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        
			int new_value=no2 - no1;
                        push(new_value);
                }
		
		else  if(strcmp(cur_token,"*")==0)
                {     
			int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        
                        int new_value=no2 * no1;
                        push(new_value);

                }
		
		else if(strcmp(cur_token,"/")==0)
                {     
		        int no1=top();
                        pop();
                        int no2=top();
                        pop();
                        
                        int new_value = no2 / no1;
                        push(new_value);


                }
            
            else
            {
		      
                       int top_value = atoi(cur_token);
                       push(top_value);
            }
	}
	    
	    int answer=top();
	    pop();
	    printf("%d\n",answer);

	
            return 0;

}