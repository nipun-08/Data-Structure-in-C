#include<stdio.h>
void search();
void insert();
void delete();
int a[100],i,n,choice,position,element,c=0,del;
int main()
{
    printf("Enter the number of elements in an array\n");
    scanf("%d",&n);
    printf("Enter the elements in array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("Elements of array are: ");
    for(i=0;i<n;i++)
    {
        printf("%d  ",a[i]);
    }
    printf("Enter 1 for searching, 2 for deleting and 3 for inserting an element\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        search();
        break;
        case 2:
        delete();
        break;
        case 3:
        insert();
        break;
        default:
        printf("Invalid choice\n");
    }
    return 0;
}
void search()
{
    printf("Enter the element you have to search\n");
    scanf("%d",&element);
    for(i=0;i<n;i++)
    {
        if(element==a[i])
        {
            c++;
            position=i;
        }
    }
    if(c==0)
    {
        printf("Element not found\n");
    }
    else{
        printf("Element found at position %d",position);
    }

}
void insert()
{
    printf("Enter the element you have to insert ");
    scanf("%d",&element);
    printf("Enter the position where you want to insert the element\n");
    scanf("%d",&position);
    for(i=n-1;i>=position;i--)
    {
        a[i+1]=a[i];
    }
    a[position]=element;
    n=n+1;
    printf("The elements after inserting are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}
void delete()
{
    printf("Enter the element to delete ");
    scanf("%d",&del);   
    for(i=0;i<n;i++)
    {
        if(del==a[i])
        {
            c=1;
            position=i;
        }
    }
    if(c!=1)
    {
        printf("Element not found");

    }
    for(i=position;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("Array after deleting the element is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
}