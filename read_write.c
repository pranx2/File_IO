#include<stdio.h>

   int main (){
      FILE *read;
      read = fopen ("write.txt" , "r" );
      for (int i = 0; i < 13 ; i++)
      {
          printf("%c" ,  fgetc (read)); //fgetc is char by char taken function ;
      }
     
      //write ;
         read = fopen ("write.txt" , "a"); //a->append ;
         fputc ('T' , read);
         fputc ('E' , read);
         fputc ('S' , read);
         fputc ('T' , read);
         //After initializing write data will store after read data....
       fclose(read);
   return 0 ;
   }