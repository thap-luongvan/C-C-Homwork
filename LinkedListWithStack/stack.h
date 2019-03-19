


#define max 50

typedef int Eltype;
typedef Eltype stackType[max];
int top;

void init(stackType stack);
int isEmpty(stackType stack);
int isFull(stackType stack);
void push(Eltype el, stackType stack);
Eltype pop(stackType stack);


