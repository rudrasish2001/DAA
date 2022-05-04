#include<stdio.h>
int main()
{
    int i, n_649, lar_649,sm_649, elem_649;
    printf ("Enter total number of elements n =");
    scanf ("%d", &elem_649);
    printf ("Enter first number n = ");
    scanf ("%d", &n_649);
    lar_649 = n_649;
    sm_649 =n_649;
    for (i=1; i<= elem_649 -1 ; i++)
    {
        printf ("n Enter next number n =");
        scanf ("%d",&n_649);
        if (n_649>lar_649)
        lar_649=n_649;
        if (n_649<sm_649)
        sm_649 =n_649;
    }
    printf ("\n The largest number is %d", lar_649);
    printf ("\n The smallest number is %d", sm_649);
    return 0;
}
