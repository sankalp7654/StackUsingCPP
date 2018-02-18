#include <iostream>

using namespace std;

struct stack{

	private:
		int top = -1, stack[20];
		const int SIZE = 20;

	public:
		void push(int item) {  
			if(top == SIZE-1)
				cout << "Stack Full" << endl;
			else
				stack[++(top)] = item;
		}

		int pop() {
			if(top == -1) 
				return -1;
			else
				return (stack[(top)--]);
		}

		void display() {
			if(top == -1) 
				cout << "Stack Empty";
			else{
				for(int i = 0; i <= top ; i++) {
					cout << stack[i] << " " ; 
				}	
			}
			cout << endl;
		}
};

int main( )
{ 
	stack s;
	int ch, item, value;
	for( ; ; ) {
		cout << "1 PUSH\n2 POP\n3 DISPLAY\n4 EXIT" << endl;
		cin >> ch;
		switch(ch) {
			case 1:
				cout << "Enter the item: ";
				cin >> item;
				s.push(item);
				break;

			case 2:
				value = s.pop();
				if(value == -1)
					cout << "Stack empty" << endl;
				else
					cout << "Popped Item: " << value << endl;
				break;

			case 3:
				s.display();
				break;

			default: 
				exit(0);
		}
	}
	return 0;
}