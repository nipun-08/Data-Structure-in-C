#include<stdio.h>
void search();
void insert();
void delete();
int a[20],n,i,choice,x,c,pos,position,m,d,posi;
int main()
{
    printf("Enter the number of elements in array\n");
    scanf("%d",&n);
    printf("Enter the elements\n");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("The elements of array are \n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }
    printf("\nEnter 1 for searching, 2 for inserting and 3 for deleting\n");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        search();
        break;

        case 2:
        insert();
        break;

        case 3:
        delete();
        break;
         
        default:
        printf("Invalid Choice\n");
    }
    return 0;
}
void search()
{
    printf("Enter the element you have to search\n");
    scanf("%d",&x);
    for(i=0;i<n;i++)
    {
        if(x==a[i])
        {
            c++;
            pos=i;
        }
    }
    if(c==0)
    {
        printf("Element not found\n");
    }
    else
    {
        printf("Element found at index position %d",pos);
    }
}
void insert()
{
    printf("Enter the index position where you have to insert the element\n");
    scanf("%d",&position);
    printf("Enter the element you have to insert\n");
    scanf("%d",&m);
    for(i=n;i>=position;i--)
    {
        a[i+1]=a[i];
       
    }
    a[position]=m;
    n=n+1;
    printf("The elements after inseting are\n");
    for(i=0;i<n;i++)
    {
        printf("%d ",a[i]);
    }

}
void delete()
{
    printf("Enter the element to delete\n");
    scanf("%d",&d);
    for(i=0;i<n;i++)
    {
        if(d==a[i])
        { 
            c=1;
            posi=i;
        }
    }
    if(c!=1)
    {
        printf("Element not found\n");
    }
    for(i=posi;i<n;i++)
    {
        a[i]=a[i+1];
    }
    n=n-1;
    printf("Array after deleting the element is\n");
    for(i=0;i<n;i++)
    {
        printf("%d ", a[i]);
    }

}