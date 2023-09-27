#include <stdio.h>
#include <string.h>
// This code belongs to HARSH ZINDAL
int stack[30];
top=-1;
n=sizeof(stack);
int x;

int main() {
    
 push();
 push();
 push();
 push();
 //here i had pushed 4 times and poped 4 times and below is the code which is commented for checking all the elements 
//   for(top=0 ; top < n ; top++){
//      // printf("inside for loop\n");
//      printf("%d",stack[top]); 
//     } 
 
 pop();
 pop();
 pop();
 pop();
 return 0;

}

void push(){
    if (top == n-1 ){
        printf("\n stack overflow");
    }
    else{
        //printf("we are in else\n");
        top = top+1;
        printf("enter an element\n");
        scanf("%d",&x);
        stack[top]=x;
        printf("%d\n",stack[top]);
    }
}

void pop(){
//    printf("\ninside pop");
   if(top== -1){
     printf("stack is empty no elements to pop");
   }
   else{
     printf("%d\n",stack[top]);
     top = top -1;
   }
}



