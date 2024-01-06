#include<stdio.h>
      int main (){
         FILE *info ; 
         info = fopen("Student_information.txt" , "w");

         char name[100];
         int roll ; 
         float cgpa;
            printf("Student Name : ");
            scanf("%s",  &name );
            printf("Student Roll : ");
            scanf( "%d", &roll);
            printf("Student CGPA : ");
            scanf( "%f", &cgpa);

                  fprintf(info , "Student Name : %s\n" , name); // Data initializing into .txt file
                  fprintf(info , "Student Roll : %d\n" , roll);
                  fprintf(info , "Student CGPA : %f\n\n" , cgpa);
                  fclose(info);//Close file;
                  return 0;
      }