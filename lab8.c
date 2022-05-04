#include <stdio.h>
void Swap(int *a_649, int *b_649, int *c_649);
int main() {
    int a_649, b_649, c_649;

    printf("Enter a, b and c respectively: ");
    scanf("%d %d %d", &a_649, &b_649, &c_649);

    printf("Value before swapping:\n");
    printf("a = %d \nb = %d \nc = %d\n", a_649, b_649, c_649);

    Swap(&a_649, &b_649, &c_649);

    printf("Value after swapping:\n");
    printf("a = %d \nb = %d \nc = %d", a_649, b_649, c_649);

    return 0;
}

void Swap(int *x_649, int *y_649, int *z_649) {
    int temp_649;
    temp_649 = *y_649;
    *y_649 = *x_649;
    *x_649 = *z_649;
    *z_649 = temp_649;
}
