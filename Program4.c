#include <stdio.h>    
     
int main()    
{    
        
    int a,b,c,d,e,f,g,h,i,j,arr[20],n;
  printf("Enter size of array: ");
  scanf("%d",&n);
  printf("Enter any %d elements in array: ",n);
  for(i=0;i<n;i++)
  {
   scanf("%d",&arr[i]);
  }
  for(i=0;i<n;i++)
   {
       if(arr[i]%1==0)
       ++a;
       
        if(arr[i]%2==0)
       ++b;
       
       if(arr[i]%3==0)
       ++c;
       
       if(arr[i]%4==0)
       ++d;
       
       if(arr[i]%5==0)
       ++e;
       
       if(arr[i]%6==0)
       ++f;
       
       if(arr[i]%7==0)
       ++g;
       
       if(arr[i]%8==0)
       ++h;
       
       if(arr[i]%9==0)
       ++j;
   }
   printf("%d: %d %d: %d %d: %d %d: %d %d: %d %d: %d %d: %d %d: %d %d: %d ",1,a,2,b,3,c,4,d,5,e,6,f,7,g,8,h,9,j);
    return 0;    
}  
