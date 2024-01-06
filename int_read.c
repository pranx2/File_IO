#include<stdio.h>

   int main (){
      FILE *integer ;
      integer = fopen("int.txt" , "r");
      
     int n;
     while (n < 10) //Max digit 10;
     {
      fscanf(integer , " %d" , &n );//read data from int.txt and store it in n;
      printf("%d", n);//print n data;
     }
      fclose(integer);
      return 0 ;
   }