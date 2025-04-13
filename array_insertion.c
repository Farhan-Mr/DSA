/* WAP to insert an element in a decleared array */

    // Question class 

    #include<stdio.h>
    #include<stdlib.h>
    #include<conio.h>
    
      void insertion(int arr[], int n, int loc, int item );
  
      void main()
      {
          int n, loc, item;
          printf("Enter size of array : ");
          scanf("%d",&n);
  
          int arr[n];
          printf("Enter elements for array : ");
              for(int i=0; i<n; i++)
              {
                  scanf("%d",&arr[i]);
              }
  
          printf("Enter Location : ");
          scanf("%d",&loc);
          
          printf("Enter the which you want to insert : ");
          scanf("%d",&item);
  
          insertion(arr,n,loc,item);
  
          getch();
      }
  
      void insertion(int arr[], int n, int loc, int item )
      {
          int j = n;
          while (j>loc)
          {
              arr[j] = arr[j-1];
              j-- ;
          }
          arr[loc] = item ;

          // Print modify array
          
          for(int i=0; i<n; i++)
          {
            printf("%d ",arr[i]);
          }
      }
  