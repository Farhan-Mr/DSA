/* WAP to create an array and enter its element 
then print it without using arr[i] */

        // Class Question -

    #include<stdio.h>
        void main()
        {
            int a; 
            printf("Enter size of array : ");
            scanf("%d",&a);

            int arr[a];
            printf("Enter elements for array : ");
                for(int i=0; i<a; i++)
                {
                    scanf("%d",&arr[i]);
                }
            // Print array :
            for(int i=0; i<a; i++)
            {
                printf("%d  ",*(arr+i));
            }  
    
        }