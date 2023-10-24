
#include<iostream>
using namespace std;
#define size 20
class stack{
	char c[size];
	int top;
public:
	char pop();
	void push(char);
	stack(){
		c[0]='\0';
		top=-1;
	}
};
char stack::pop(){
	if(top==-1){
		cout<<"\nEmpty\n";
		return '\0';
	}
	else{
		return c[top--];
	}
}
void stack::push(char ch){
	if(top==size){
		cout<<"\nFull\n";
	}
	else{
		c[++top]=ch;
	}
}
int main(){
	stack s;
	char exp[20];
	int invalid=0;
	cout<<"\nEnter an Expression.\n";
	cin>>exp;

	for(int i=0;exp[i]!='\0';i++){
		if(exp[i]=='('){
			s.push(exp[i]);continue;
		}

		else if(exp[i]=='{'){
			s.push(exp[i]);continue;
		}

		else if(exp[i]=='['){
			s.push(exp[i]);continue;
		}

		else if(exp[i]==')'){
			if(s.pop()!='('){
				invalid=1;
			}
		}
		else if(exp[i]=='}'){
			if(s.pop()!='{'){
				invalid=1;
			}
		}
		else if(exp[i]==']'){
			if(s.pop()!='['){
				invalid=1;
			}
		}

		if(invalid==1){
			cout<<"\nInvalid\n";
			return 0;
		}

	}
	cout<<"\nValid..!!\n";

}





















