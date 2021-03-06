#include<string>
#include<iostream>

#ifndef POSTFIX_H
#define POSTFIX_H
#include"stack.h"
#include"precedence.h"

using namespace std;

static int isp[] = { 0,19,12,12,13,13,13,0 };
static int icp[] = { 20,19,12,12,13,13,13,0 };

class PostFix {
	Stack stack;
public:
	char infix[MAX_SIZE + 1];
	char postfix[MAX_SIZE + 1];

	precedence get_token(char* psymbol, int* pn);
	void convert();
	char print_token(precedence token);
};

#endif // POSTFIX_H