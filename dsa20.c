#include<stdio.h>
#define size 5
int stack[size];
int top=-1;

void push(int element){
    if (top==size-1)
    {
        printf("The stack is full \n");
    }
    else{
        top++;
        stack[top]=element;
        printf("\n pushed element is %d:\n", element);
    }
    

}
void display(){
    if(top==-1){
        printf("\nThe stack is empty:\n");
    }
    else{
        printf("\nThe stack elements are: \n");
        for (int i = top; i >=0; i--)
        {
            printf("%d ",stack[i]);
        }
        
    }
}
 
 
int main(){
    push(5);
    push (7);


    return 0;

}