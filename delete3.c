 #include<stdio.h>
void main()
{
     int n,i,a[10],pos;
     printf("Enter the number of  elements you want in an array:");
     scanf("%d",&n);

     printf("Enter the array elements:");
     for(i=0; i<n; i++){
        scanf("%d", &a[i]);
     }

     printf("Array elements are:");
     for(i=0; i<n; i++){
        printf("%d\n", a[i]);
     }

     printf("Enter the position of an deleting element:");
     scanf("%d", &pos);
     for(i=pos; i<n-1; i++){
        a[i]=a[i+1];
     }

     printf("Array after delete the element:");
     for(i=0; i<n-1; i++){
        printf("%d\n", a[i]);
     }

}