/* WAP to traversal of array through a function */

#include<stdio.h>

void traverse( int arr[], int a);
void main()
{
    int a; 
    printf("Enter the size of arrya : ");
    scanf("%d",&a);

    int arr[a];
    printf("Enter the elements of array : ");
        for(int i=0; i<a; i++)
        {
            scanf("%d",&arr[i]);
        }
        // Call function to traverse :
        traverse(arr,a);
        
}
void traverse( int arr[], int a)
{
    printf("Given array is : \n");
        for(int i=0; i<a; i++)
        {
            printf("%d \n",arr[i]);
        }
}
