#include <stdio.h>  
   
int main()  
{  
    int rows, cols;  
    int a[][3] = {  
                    {4, 5, 6},  
                    {3, 4, 1},  
                    {1, 2, 3}  
                 };  
    int b[][3] = {  
                      {2, 0, 3},  
                     {2, 3, 1},  
                     {1, 1, 1}  
                 };  
  
    rows = (sizeof(a)/sizeof(a[0]));  
    cols = (sizeof(a)/sizeof(a[0][0]))/rows;  
      

    int diff[rows][cols];  
    
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
            diff[i][j] = a[i][j] - b[i][j];  
        }  
    }  
      
    for(int i = 0; i < rows; i++){  
        for(int j = 0; j < cols; j++){  
           printf("%d ", diff[i][j]);  
        }  
        printf("\n");  
    }  
   
    return 0;  
}  