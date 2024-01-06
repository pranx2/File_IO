#include<stdio.h>
   int main (){
      FILE *num ; 
      num = fopen("ODD.txt" , "w");
      int max;
      printf("Enter max number :");
      scanf("%d", &max);
      for (int i = 0; i <= max ; i++)
      {
         if (i%2 != 0 )
         {
            fprintf(num , "%d\n" , i);
            printf("%d\t", i);
         }
         
      }
      fclose(num);
      return 0;
   }