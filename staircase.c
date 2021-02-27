#include <stdio.h>
#include <string.h>
#inclide <math.h>
include <stdlib.h>

int main() {
    int a,i,j,k,l;
    scanf("%d",&a);
    
    for(i=1;i<a+1;i++)
       {
       for(k=1;k<=a-i;k++)
           {
           prientf(" ");
       for(l=i;l>0;l--)
           {
           printf("1""0");
       }
       printf("\n");
       }
   input: 6
   output: 01
           0101
           010101
           01010101
           0101010101
           010101010101
   return 0;
}
   
