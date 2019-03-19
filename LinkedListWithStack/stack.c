#include "stack.h"
#include <stdio.h>


void init(stackType stack) {
    top = 0;
    
}
int isEmpty(stackType stack){
    return top == 0;
}
int isFull(stackType stack){
    return top == max;
}
void push(Eltype el, stackType stack){
    
    if(isFull(stack)){
        printf("StackoverFlow");
    } else {
        ++top;
        stack[top] = el;
    }
}
Eltype pop(stackType stack){
    printf("Chay pop\n");
    if(isEmpty(stack)){
        printf("stack underflow");
    } else {
        return stack[--top];
    }
}


