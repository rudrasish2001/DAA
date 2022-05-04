/* Let A be n*n square matrix array. WAP by using appropriate user defined
functions for the following:
a) Find the number of nonzero elements in A
b) Find the sum of the elements above the leading diagonal.
c) Display the elements below the minor diagonal.
d) Find the product of the diagonal elements.*/

#include<stdio.h>
int i,j,m_649,n_649,d1_649=0,d2_649=0, a_649[100][100];
int main()
{
printf("How many rows and columns:");
scanf("%d%d",&m_649,&n_649);
printf("Enter matrix elements:\n");
int product_649 = 1;
for (i = 0; i < j; i++)
{
product_649 = product_649 * a_649[i][j];
product_649 = product_649 * a_649[i][j - i - 1];
if (j % 2 == 1) {
product_649 = product_649 / a_649[j / 2][j / 2];
}
return product_649;
}
int counter_649=0;
for (i = 0; i < m_649; ++i)
{
for (j = 0; j < n_649; ++j)
{
scanf("%d", &a_649[i][j]);
if (a_649[i][j] != 0)
{
++counter_649;
}
}
}
for (i = 0; i < m_649; ++i)
{
for (j = 0; j < n_649; ++j)
{
scanf("%d",&a_649[i][j]);
if(j>i)
{
d1_649+=a_649[i][j];
}
else
if(i>j)
{
d2_649+=a_649[i][j];
}
}
}
printf("Sum of elements above the diagonal=%d\n",d1_649);
printf("Sum of elements below the diagonal=%d",d2_649);
printf("\nProduct of the diagonals of the array is=%d",
product_649);
printf("\nThe number of nonzeros=%d", counter_649);
return 0;
}
