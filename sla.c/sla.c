/******************************************************************************

Welcome to GDB Online.
GDB online is an online compiler and debugger tool for C, C++, Python, Java, PHP, Ruby, Perl,
C#, OCaml, VB, Swift, Pascal, Fortran, Haskell, Objective-C, Assembly, HTML, CSS, JS, SQLite, Prolog.
Code, Compile, Run and Debug online from anywhere in world.

*******************************************************************************/
#include <stdio.h>

int main(){
   int idade;
   printf("digite sua idade");
   scanf("%d" , &idade);
   
   if(idade>=18){
       printf("entra\n");
   }else if("idade<16"){
       printf("chora\n");
   }else{
       printf("espie 5 minutos");
   }
   printf("va para casa\n");
   return 0;
   }
   
