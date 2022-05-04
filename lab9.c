#include <stdio.h>
 #include <conio.h>
 
 int main()
{
    int a[10000],b[10000],i,n_649,j,k,temp_649,c_649=0;
   
    printf("Enter size of the  array : ");
    scanf("%d", &n_649);
    printf("Enter elements in array : ");
    for(i=0; i<n_649; i++)
    {
        scanf("%d",&a[i]);
        if(a[i]%2==1)
         c_649++;
    }
    for(i=0; i<n_649-1; i++)
    {
           
        for(j=0; j<n_649-i-1; j++)
        {
           if(a[j]>a[j+1])
           {
           	temp_649=a[j];
           	a[j]=a[j+1];
           	a[j+1]=temp_649;
		   }
 
        }
       
    }   
	
	k=0;
    j=n_649-c_649;
    
	for(i=0; i<n_649; i++)
    {
        if(a[i]%2==0)
        {
        	if(k<n_649-c_649)
        	  b[k++]=a[i];
		}  
		else
		{
			if(j<n_649)
        	  b[j++]=a[i];
	    }
    }
    
    printf("\narray after sorting even and odd elements separately:\n ");
 
    for(i=0; i<n_649; i++)
    {
    	a[i]=b[i];
       printf("%d ",a[i]);
    }
    
    
 }
