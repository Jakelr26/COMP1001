/*
------------------DR VASILIOS KELEFOURAS-----------------------------------------------------
------------------COMP1001 ------------------------------------------------------------------
------------------COMPUTER SYSTEMS MODULE-------------------------------------------------
------------------UNIVERSITY OF PLYMOUTH, SCHOOL OF ENGINEERING, COMPUTING AND MATHEMATICS---
*/


#include<stdio.h> 
#include <windows.h>  
  
#define N 2000

void stack_crash();

int main() 
{ 

printf("\nHi before the heap is crashed\n");

stack_crash();    

printf("\n\nIt looks like the head did not crash. Use a larger N size\n");

system("pause");
return 0;
} 


void stack_crash(){

int i,j;

int A[N][N]; //the size of this array is bigger than the stack size. Normally, the stack is about 1Mbyte

for (i=0;i<N;i++)
 for (j=0;j<N;j++)
  A[i][j]=i+j;


for (i=0;i<N;i++)
 for (j=0;j<N;j++)
  printf(" , %d",A[i][j]);

}

