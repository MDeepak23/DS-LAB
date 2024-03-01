#include<stdio.h>
  void read(int a[],int n);
  void print(int a[],int n);
  void swap(int *x,int*y);
  void selection(int a[],int n);
           void read(int a[],int n)   
        {
               int i; 
              
               for(i=0;i<n;i++)
              {
                printf("a[%d]=",i);
                scanf("%d",&a[i]);
              }
        } 
            void  print(int a[],int n)
       {
                int i;
                for(i=0;i<n;i++)
               
                  printf("%4d",a[i]);
             printf("\n");               
       }
             void swap(int *x,int*y)
       {
                    int t;
                      t = *x;
                   *x = *y;
                   *y = t;
       }
             void selection(int a[],int n)
       {
                    int  i,j,min_idx;
                       for(i=0;i<n-1;i++)
                      {
                        min_idx=i;
                        for(j=i+1;j<n;j++)
                     {
                        if(a[j]<a[min_idx])
                      {
                          min_idx = j;
                       }
                     }
                        if(min_idx!=i)
                        swap(&a[i],&a[min_idx]);
                      }
        }           
                 int main()
             {
                 int n,a[100];
                  printf("enter the array size\n");
                 scanf("%d",&n);
                read(a,n);
                printf("before sort\n");
                print(a,n);
                selection(a,n);
                printf("after sort\n");
                print(a,n);
             }  
        
        
                          
              
                    
                     
       
               
