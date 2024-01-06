#include<stdio.h> 

   int main(){
      FILE *data_ptr ;
      data_ptr = fopen("data.txt","a"); //w->write , a->append , r->read
   //Data text was'Alpha';
      fprintf(data_ptr , "%c" , 'B');
      fprintf(data_ptr , "%c" , 'E');
      fprintf(data_ptr , "%c" , 'T');
      fprintf(data_ptr , "%c" , 'A');
   fclose(data_ptr);   //After write it is 'BETA';
return 0;
   }