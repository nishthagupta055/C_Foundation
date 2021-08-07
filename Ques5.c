#include<stdio.h> 

int main()
{   int size;    
    printf("Size = ");
    scanf("%d", &size);
    printf("Matrix 1 = ");
    int matrix1[size+1][size+1],matrix2[size+1][size+1];
    int answer[size+1][size+1];
   
    for(int i = 0 ; i < size ; ++i)
    {
	    for(int j = 0; j < size; ++j)
	    {
		    scanf("%d" , &matrix1[i][j]);
		    answer[i][j] = 0;
	    }
    }
    printf("Matrix 2 = ");
    for(int i = 0;i < size ; ++i)
    {
            for(int j = 0; j < size; ++j)
            {
                    scanf("%d" , &matrix2[i][j]);
                    
            }
    }


    
    for(int i = 0; i < size ; ++i)
    {
	    for( int  j = 0; j < size ; ++j)
	    {
               for(int k = 0 ; k < size; ++k)
	       {
		       answer[i][j] += matrix1[i][k] * matrix2[k][j];
	       }
	    }
    }
    for(int i =0;i< size ;++i)
    {
            for(int j = 0; j< size; ++j)
            {
                    printf("%d ", answer[i][j]);
            }
	    printf("\n");
    }


      
}
