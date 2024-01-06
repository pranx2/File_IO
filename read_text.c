#include<stdio.h>

   int main (){
      FILE *reading ;
      reading = fopen ("reading.txt" , "r");
      char ch;                                  
      ch = fgetc (reading);
         while (ch != EOF)
         {
            printf("%c", ch );
            ch=fgetc(reading);
         }
         printf("\n");
         fclose(reading);
         return 0 ;
   }