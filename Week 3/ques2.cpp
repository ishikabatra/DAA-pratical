//Given an unsorted array of integers
//design an algorithm and implement a program to sort this array using selection sort
//Your program should also find number of comparisons and number of swaps required.
    
 #include <stdio.h>

int main()
{
    int t,a[100],n;
    scanf("%d",&t);
    while(t>0){
    scanf("%d",&n);

    for(int i=0;i<n;i++)
        scanf("%d",&a[i]);

    int key,comp=0,flag=0;
    scanf("%d",&key);

    int l=0,r=n-1,mid;
    mid=(l+r)/2;

    while(l<=r){
        comp++;
        if(a[mid]==key){
            printf("key found\n");
            printf("index is : %d\n",mid);
            flag=1;
            break;
        }
        else if(a[mid]>key)
            r=mid-1;
        else
            l=mid+1;

        mid=(l+r)/2;
    }

    if(flag==0){
        printf("key not found\n");
    }
    printf("Total comparisons : %d\n",comp);
 }
 t=t-1;
}
