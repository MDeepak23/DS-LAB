#include<stdio.h>
void read(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    scanf("%d",&a[i]);
}
void print(int a[],int n)
{
    int i;
    for(i=0;i<n;i++)
    printf("%d",a[i]);
}
void Ls(int a[],int n,int key)
{
    int pos=-1,i;
    for(i=0;i<n;i++)
    {
        if(key==a[i]){
          pos=i;
          break;
        }
    } 
    if(pos>0)
    printf("key is found at %d",pos+1);
}
void bs(int a[],int n,int key)
{
    int start=0,end=n-1,mid,pos=-1;
    while(start<=end)
    {
        mid=(start+end)/2;
        if(a[mid]==key)
        {
          pos=mid+1;
          break;
        }
        else if(key < a[mid])
        {
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        

    }
     if(pos>=0)
    printf("key is found at %d",pos);
     
}
  void sort(int a[],int n)
  {
    int i,j,t;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1]) {
              t=a[j];
              a[j]=a[j+1];
              a[j+1]=t;
        }
    }
  }
  }
  void ss(int a[],int n)
  {
    int minidx,t,i,j;
    for(i=0;i<n-1;i++)
    {
        minidx=i;
        for(j=i+1;j<n;j++){
            if(a[j]<a[minidx])
            {
              minidx=j;
            }
        }
        if(minidx!=i){
            t=a[i];
            a[i]=a[minidx];
            a[minidx]=t;
        }

    }
  }
  void is(int a[],int n)
  {
    int i,j,key;
    for(i=0;i<n;i++)
    {
        key=a[i];
        j=i-1;
        while(j>=0&&a[j]>key){
            a[j+1]=a[j];
            j--;
        }
        a[j+1]=key;
    }
  }
int main(){
    int i,a[50],key,n,p;
    scanf("%d",&n);
    read(a,n);
    is(a,n);
     print(a,n);
    
}