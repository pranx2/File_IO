#include<stdio.h>

   int main (){
      FILE *text_new ;
            text_new = fopen ("text_new.txt" , "r");
      FILE *text ;//FILE->text.txt
            text = fopen ("text.txt" , "r"); //pointer file define;
         // if (text_new == NULL)
         // {
         //    printf("No text here");
         // }
         // else
         // {
         //    fclose(text_new);
         // }
         char ch; 
         fscanf(text_new,"%c",&ch);
         printf("%c",ch);
         fscanf(text_new,"%c",&ch);
         printf("%c",ch);
         fscanf(text_new,"%c",&ch);
         printf("%c",ch);
         fscanf(text_new,"%c",&ch);
         printf("%c",ch);
         fscanf(text_new,"%c",&ch);
         printf("%c",ch);
         fscanf(text_new,"%c",&ch);
         printf("%c",ch);

         fclose(text_new);

            char ch2;
            fscanf(text , "%c" , &ch);
               printf("%c",ch);
            fscanf(text , "%c" , &ch);
               printf("%c",ch);
            fscanf(text , "%c" , &ch);
               printf("%c",ch);
            fscanf(text , "%c" , &ch);
               printf("%c",ch);
            fscanf(text , "%c" , &ch);
               printf("%c",ch);
            fscanf(text , "%c" , &ch);
               printf("%c",ch);
      

               fclose(text);
      return 0;         
   }
