
#include <stdio.h>
#include "stack.h"

int main222w() {
    int a;
    printf("Nhap di: "); scanf("%d",&a);
    stackType stack;
    
    init(stack);
    Eltype eltype = 1;
    printf("EL: %d", eltype); 
           
    push(eltype, stack);
    
    printf("Pop result: %d", pop(stack));
    
        
    return 0;
}

