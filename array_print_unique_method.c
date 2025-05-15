/* WAP to print array with pointer */

    // new method -

#include<stdio.h>
int main()
{
    int n; 
    printf("Enter size of array : ");
    scanf("%d",&n);

 int arr[n];
 
    printf("Enter elements for array : ");
        for(int i=0; i<n; i++)
        {
            scanf("%d",&arr[i]);
        }
    // Print array :
    for(int i=0; i<n; i++)
    {
        printf("%d  ",*(arr+i));
       
    }  
    return 0;
}