#include <stdio.h>
int main()
{
int a[100], n, i, j, position, swap;
printf("Enter number of elementsn");
scanf("%d", &n);
printf("Enter %d Numbers", n);
for (i = 0; i < n; i++)
scanf("%d", &a[i]);
for(i = 0; i < n - 1; i++)//no.of iterations 
{
position=i;//taking 0indexposition and take every position furrther to check all the index positions
for(j = i + 1; j < n; j++)
{
if(a[position] < a[j])// comparing with other positions to check the smallest
position=j;//if j pos is less than position then 
}
if(position != i)//swap them 
{
swap=a[i];
a[i]=a[position];
a[position]=swap;
}
}
printf("Sorted Array:n");
for(i = 0; i < n; i++)
printf("%d\t", a[i]);
return 0;
}