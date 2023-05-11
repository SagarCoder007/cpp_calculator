#include <iostream>
using namespace std;

int main(){
	char opp;
	int num1,num2;
	
	cout <<"choose your choice ('+','-','*','/'):-";
	cin >>opp;
	
	cout<<"Enter The first Number: ";
	cin>>num1;
	
	cout<<"Enter The second Number: ";
	cin>>num2;
	
	switch(opp){
		case '+':
		cout<<num1 + num2;
		break;
		
		case '-':
		cout<<num1 - num2;
		break;
		
		case '*':
		cout<<num1 * num2;
		break;
		
			case '/':
			if(num2 != 0)
			cout<<num1 / num2;
			break;
			
			default :
			cout<<"invalid operator";
			break;
	
		return 0;
	}
}