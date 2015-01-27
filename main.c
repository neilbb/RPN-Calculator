#include "stack.h"
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>
#include <stdbool.h>


int main(){
   char buf[256];
   char addition[] = "+";
   char multiplication[] = "*";
   char divide[] = "/";
   char subtraction[] = "-";
   int num;

   Stack *s = stack_init();   
   printf("Welcome to the RPN Calculator 1.0 \n");
   printf("Please Enter: \n");
  while (scanf("%s", buf) != EOF){
       
       if (strcmp(buf, addition) == 0) {
		int rightOP = stack_pop(s);
                int leftOP = stack_pop(s);
                int result = leftOP + rightOP;
                stack_push(s, result);
           }
    else if (strcmp(buf, subtraction) == 0){
                int rightOP = stack_pop(s);
                int leftOP = stack_pop(s);
                int result = leftOP - rightOP;
                stack_push(s, result);
	   }
    else if (strcmp(buf, multiplication) == 0){
                int rightOP = stack_pop(s);
                int leftOP = stack_pop(s);
                int result = leftOP * rightOP;
                stack_push(s, result);
	  }
    else if (strcmp(buf, divide) == 0){
                int rightOP = stack_pop(s);
                int leftOP = stack_pop(s);
                int result = leftOP / rightOP;
                stack_push(s, result);
	  }
    else if (atoi(buf) != 0){
       num = atoi(buf);
       stack_push(s,num);
       }
    else {
         printf("invalid Operand or Operator\n");
         }
   }  
   int solution = stack_pop(s);
   printf("= %d\n", solution); 
 return 0;
}
