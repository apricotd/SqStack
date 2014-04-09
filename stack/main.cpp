//
//  main.cpp
//  stack
//
//  Created by ZhangFan on 14-4-9.
//  Copyright (c) 2014年 ZhangFan. All rights reserved.
//

#include <iostream>
#define MAXSIZE 50
typedef int EleType;


typedef struct{
    EleType data[MAXSIZE];
    int top;
}SqStack;

void initStack(SqStack *s);
bool isEmpty(SqStack *s);
EleType Top(SqStack *s);
EleType Pop(SqStack *s);
void Push(SqStack *s,EleType e);

void initStack(SqStack *s)
{
    s->top = -1;
}

bool isEmpty(SqStack *s)
{
    if (s->top == -1) {
        return true;
    }else
        return false;
}

EleType Top(SqStack *s)
{
    if (!isEmpty(s)) {
        return s->data[s->top];
    }
    return -1;
}

EleType Pop(SqStack *s)
{
    if (!isEmpty(s)) {
        int e=s->data[s->top];
        s->top--;
        return e;
    }
    return -1;
}

void Push(SqStack *s,EleType e)
{
    if (s->top >= MAXSIZE -1) {
        return;
    }
    s->top++;
    s->data[s->top] = e;
}


int main(int argc, const char * argv[])
{
    SqStack s;
    initStack(&s);
    
    Push(&s, 1),Push(&s, 2),Push(&s, 3),Push(&s, 4);
    printf("%d %d\n",Pop(&s),Pop(&s));
    
    
    // insert code here...
    std::cout << "Hello, World!\n";
    return 0;
}

