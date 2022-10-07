//chocolates
#include<stdio.h>
  int choco(int arr[],int n)
{
  int p=0;
  int q=n-1;
  for(int i=0;i<n;i++)
   {
      if(p==q)
      {
        return arr[p];
      }
     else if(arr[p]>arr[q])
      {
        p++;
      }
     else
     {
       q--;
    }
}
}
int main()
{
  int n=5;
   int arr[]={4,3,1,2,8};
   int b=chocolate(arr,n);
   printf("%d",b);
}


