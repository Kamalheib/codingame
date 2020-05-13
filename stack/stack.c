#include "stack.h"

int stack[MAX];
int top = 0;

int push(int x)
{
    if (top >= MAX)
        return 1;

    stack[++top] = x;
}

int pop(void)
{
    if (top == 0)
        return -1;
    return stack[top--];
}

int peek(void)
{
    if (top == 0)
        return -1;

    return stack[top];
}

int is_empty(void)
{
    return top == 0;
}