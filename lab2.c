#include<stdio.h>
int stack[100],choice,i,val,max,top=-1;
void push()
{
    if(top==max-1)
    {
        printf("Overflow");
    }
    else
    {
        while(top<max-1)
        {
        top=top+1;
        printf("Enter the element in %d position: ",top);
        scanf("%d",&val);
        stack[top]=val;
        }
        printf("Elements after pushing are: ");
        for(i=top;i>=0;i--)
        {
             printf("%d ",stack[i]);
        }
        
    }
}
void pop()
{
    if(top==-1)
    {
        printf("Underflow");
    }
    else
    {
        int c;
        printf("Enter the no. of elements you want to pop..\n");
        scanf("%d",&c);
        if(c>max)
        {
            printf("Not enough element in stack\n");
        }
        else
        {
            top-=c;
            printf("Elements are deleted\n");
            printf("The elements after deletion are: ");
            for(i=top;i>=0;i--)
            {
                printf("%d ",stack[i]);
            }
        }
    }
}
int main()
{
    printf("Enter the maximum number of elements\n");
    scanf("%d",&max);
    while(1)
    {
        printf("\nEnter 1 for push, 2 for pop and 3 for exiting;  ");
        scanf("%d",&choice);
        switch(choice)
        {
            case 1:
            push();
            break;
            case 2:
            pop ();
            break;
            case 3:
            return 0;
            default:
            printf("Invalid Choice");
            
        }
    }
}