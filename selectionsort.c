#include<stdio.h>
int main()
{
    int a[]={45,67,2,8,12,90,3};
    int size=sizeof(a)/sizeof(a[0]);
    int i,j,min,temp;

    for(i=0; i<size-1; i++)
    {
        min=i;
        
        for(j=i+1; j<size; j++)
        {
            if(a[j]<a[min])
            {
                min=j;

            }
        }
        temp=a[min];
        a[min]=a[i];
        a[i]=temp;
    } printf("after the selection sort:");
    for(i=0; i<size ; i++)
    {
        printf(" %d ",a[i]);

    }
    return 0;
}