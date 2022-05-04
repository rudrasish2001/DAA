#include<stdio.h>
#include<time.h>
#include<time.h>
#include<unistd.h>
int inputs[]={5000,10000,15000,20000,25000,30000,35000,40000,45000,50000};
int max_heapify(int arr[50000], int i, int size)
{
    int largest;
    int l = (2*i) + 1;
    int r = l + 1;

    if(l < size && arr[l] > arr[i])
        largest = l;
    else
        largest = i;

    if(r < size && arr[r] > arr[largest])
        largest = r;

    if(largest != i)
    {
        arr[i]^=arr[largest]^=arr[i]^=arr[largest];
        max_heapify(arr, largest, size);
    }
}
void heap_sort(int arr[],int n)
{
   build_max_heap(arr,n);
   int sz = n;
   int i;
   for(i = n - 1; i > 0; i--)
   {
        swap(&arr[0], &arr[i]);
        sz--;
        max_heapify(arr, 0, sz);
    }
}
int choices()
{
    printf("MENU\n");
    printf("Enter your choices\n");
    printf("1.Create array\n");
    printf("2.Display array\n");
    printf("3.Sort in ascending\n");
    printf("4.Sort in descending\n");
    printf("5.Time taken to sort in ascending\n");
    printf("6.Time taken to sort stored data\n");
    printf("7.Time taken to sort data stored in descending order\n");
    printf("0.Exit\n");
}

void display_array(int n,int arr[])
{
	int i;
    for(i=0;i<n;i++)
        printf("%d ",arr[i]);
    printf("\n");
}
int descending(int a[],int n)
{
    int i,j;
    for(i=0,j=n-1;i<=j;i++,j--)
    {
        if(a[i]<a[j])
            a[i]^=a[j]^=a[i]^=a[j];
    }
}
void display_table(){
    clock_t s1,s2,s3,e1,e2,e3;
    double t1,t2,t3;
    int i;
    for(i=0;i<8;i++){
        create_array(inputs[i],arr);
        s1=clock();
        sleep(1);
        heap_sort(arr,inputs[i]);
        e1=clock();
        t1=(double)(e1-s1)/CLOCKS_PER_SEC;
        s2=clock();
        sleep(1);
        heap_sort(arr,inputs[i]);
        e2=clock();
        t2=(double)(e2-s2)/CLOCKS_PER_SEC;
        descending(arr,inputs[i]);
        s3=clock();
        sleep(1);
        heap_sort(arr,inputs[i]);
        e3=clock();
        t3=(double)(e3-s3)/CLOCKS_PER_SEC;
        random_num[i]=t1;
        asc[i]=t2;
        desc[i]=t3;
    }
    printf("INPUTS\tRANDOM\tASCENDING\tDESCENDING\n");
    for(i=0;i<8;i++){
        printf("%d\t%f\t%f\t%f\n",inputs[i],random_num[i],asc[i],desc[i]);
    }
int main()
{
    int n,choice;
    int arr[10000];
    clockid_t s1,s2,s3,e1,e2,e3;
    double t1,t2,t3;
    do
    {
        choices();
    scanf("%d",&choice);
    switch(choice)
    {
    case 1:
        printf("Enter the size of the array\n");
        scanf("%d",&n);
        create_array(n,arr);
        break;
    case 2:
        display_array(n,arr);
        break;
    case 3:
        s1=clock();
        sleep(1);
        heap_sort(arr);
        e1=clock();
        t1=(double)(e1-s1)/CLOCKS_PER_SEC;
        break;
    case 4:
        descending(arr,n);
        break;
    case 5:
        printf("Time taken to sort random data =\t%lf\n",t1);
        break;
    case 6:
        heap_sort(arr);
        s2=clock();
        sleep(1);
        heap_sort(arr);
        e2=clock();
        t2=(double)(e2-s2)/CLOCKS_PER_SEC;
        printf("Time taken to sort ascending data data =\t%lf\n",t2);
    case 7:
        descending(arr,n);
        s3=clock();
        sleep(1);
        heap_sort(arr);
        e3=clock();
        t3=(double)(e3-s3)/CLOCKS_PER_SEC;
        printf("Time taken to sort data which is sorted in descending order =\t%lf\n",t2);
    default:
        printf("Invalid input\n");
    }
    }
    while(choice!=0);

    return 0;
}
