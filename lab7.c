#include<stdio.h>
int main()
{
	int freq[100000];
	int arr[50];
	int n_649;
	printf("Enter the number of elements:");
	scanf("%d",&n_649);
	int c_649=0,i;
	for(i=0;i<100000;i++)freq[i]=0;
	for(i=0;i<n_649;i++)
	{
		printf("Enter %d element:",i);
		scanf("%d",&arr[i]);
		freq[arr[i]]+=1;
		if(freq[arr[i]]>1)
		c_649++;
	}
	int max_649=0;
	for(i=0;i<100000;i++)
	{
		if(freq[i]>max_649)
		max_649=i;
	}
	printf("Number of duplicate elements=%d\nmost occuring element=%d",c_649,max_649);
}
