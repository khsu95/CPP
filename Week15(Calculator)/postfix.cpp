#include"postfix.h"

void PostFix::convert()
{
	char symbol; precedence token;
	int n = 0; int top = 0; int WasOperand = 0; int index = 0; int IsFirst = 1;
	for (token = get_token(&symbol, &n); token != eos; token = get_token(&symbol, &n))
	{
		if (token == operand)
		{
			if((WasOperand==0)&&(IsFirst==1))	postfix[index++] = ' ';
			postfix[index++] = symbol;
			WasOperand = 1;
		}
		else if (token == rparen)
		{
			while (stack.stack[top] != lparen)
			{
				postfix[index++] = ' ';
				postfix[index++] = print_token(stack.pop(&top));
			}
			stack.pop(&top);
		}
		else//Comapre Primary
		{
			while (isp[stack.stack[top]] >= icp[token])
			{
				postfix[index++] = ' ';
				postfix[index++] = print_token(stack.pop(&top));
			}
			stack.push(&top, token);
			WasOperand = 0;
		}
		IsFirst = 1;
	}
	while ((token = stack.pop(&top)) != eos)
	{
		postfix[index++] = ' ';
		postfix[index++] = print_token(token);
	}
	postfix[index] = '\0';
}

precedence PostFix::get_token(char* psymbol, int* pn)
{
	*psymbol = infix[(*pn)++];
	switch (*psymbol)
	{
	case '(': return lparen;
	case ')': return rparen;
	case '+': return ::plus;
	case '-': return ::minus;
	case '*': return times;
	case '/': return divide;
	case '%': return mode;
	case ' ': return eos;
	case '\n': return eos;
	}
	if (48 > (*psymbol) || (*psymbol) > 57)
		return eos;
	else	return operand;
}

char PostFix::print_token(precedence token)
{
	switch (token)
	{
	case 0: return 40;
	case 1: return 41;
	case 2: return 43;
	case 3: return 45;
	case 4: return 42;
	case 5: return 47;
	case 6: return 37;
	}

}