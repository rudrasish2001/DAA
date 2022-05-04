#include<stdio.h>
#include<stdlib.h>

void printMaxActivities(int s_649[], int f_649[], int n_649)
{
    int i, j;
 
    printf ("Following activities are selected:");
    i = 0;
    printf("%d ", i);
    for (j = 1; j < n_649; j++)
    {
      if (s_649[j] >= f_649[i])
      {
          printf ("%d ", j);
          i = j;
      }
    }
}

int main()
{
    int start[30] ,finish[30],m,n,i,j;
    printf("Enter the number of elements of Start:");
    scanf("%d",&n);
    printf("Enter the elements of Start:");
    for(i=0;i<n;i++)
    scanf("%d",&start[i]);
    printf("Enter the number of elements in Finish:");
    scanf("%d",&m);
    printf("Enter the elements of Finish:");
    for(j=0;j<m;j++)
    scanf("%d",&finish[j]);
    int o = sizeof(start)/sizeof(start[0]);
    printMaxActivities(start, finish, o);
    return 0;
}
