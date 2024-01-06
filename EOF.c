#include<stdio.h>

      int main (){
         FILE *eof ; 
         eof = fopen ("eof.txt" , "r");
            char ch;
            ch = fgetc(eof);
               while (ch !=EOF)//End Of File ;
               {
                  printf("%c", ch);
                  ch = fgetc (eof);
               }
               
         fclose(eof);
      }
