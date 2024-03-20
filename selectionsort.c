#include<stdio.h>      
    void print(int a[], int n) 
    {  
    int i;  
    for(i = 0; i < n; i++)    
    {    
       printf("%d",&a[i]);    
    }        
    }  
 void bubblesort(int a[], int n) 
 {  
 int i, j, small;  
   for(i = 0; i < n; i++)    
    {    
        small=i;
      for(j = i+1; j < n; j++)    
        {    
            if(a[j] > a[i])   
             small=j;
            {    
                    int temp = a[small];  
                    a[small] = a[j];  
                    a[j] = temp;  
            }     
        }     
    }     
    
 }  
int main(){
   int n;
   n = 5;
   int a[5] = {67, 44, 82, 17, 20}; 
   printf("Array before Sorting: ");
   for(int i = 0; i<n; i++)
      printf("%d ",a[i]);
   printf("\n");
   bubblesort(a, n);
   printf("Array after Sorting: ");
   for(int i = 0; i<n; i++)
      printf("%d ", a[i]);
   printf("\n");
}