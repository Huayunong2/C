#pragma once
#include <stdio.h>
#include <stdlib.h>
#include <assert.h>
#include <stdbool.h>
typedef int STDataType;
typedef struct Stack
{
	STDataType* a;
	int top; //ջ��λ��
	int capacity; //����
}ST;
void StackInit(ST* ps);
void StackDestory(ST* ps);
void StackPush(ST* ps, STDataType x);
void StackPop(ST* ps);
bool StackEmpty(ST* ps);
STDataType StackTop(ST* ps);