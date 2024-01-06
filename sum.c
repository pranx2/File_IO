#include<stdio.h>
   int main (){
      FILE *sum ;
      sum = fopen("sum.txt", "r");//Read only
         int a,b;
            printf("Enter the 1st digit :");
            scanf("%d", &a);
            printf("Enter the 2nd digit :");
            scanf("%d", &b);
               // fprintf(sum , "First digit :%d\n",a);
               // fprintf(sum , "Last digit  :%d\n",b);
      fclose(sum);
        sum = fopen("sum.txt" , "w");//Write only
            fprintf(sum, "Sum is :   %d\n", a+b); //In txt file, only sum will be stored;
            printf("sum is : %d",a+b);
         fclose(sum);
         return 0 ;
   }