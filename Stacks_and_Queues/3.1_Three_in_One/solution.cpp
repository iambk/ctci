// This is the fixed division approach

#include <iostream>

#define SIZE 50

class stack {
	static int array[SIZE];
	int beg;
	int end;
	int tos;

public:
	stack(int beg, int end);
	bool isEmpty();
	bool isFull();
	void push(int data);
	int pop();
	void display();
};

int stack::array[SIZE];

stack::stack(int beg, int end) {
	this->beg = beg;
	this->end = end;
	this->tos = beg - 1;
}

bool stack::isEmpty() {
	if (this->tos == this->beg - 1) return true;
	return false;
}

bool stack::isFull() {
	if (this->tos == this->end) return true;
	return false;
}

void stack::push(int data) {
	if (this->tos != this->end) this->tos++;
	array[this->tos] = data;
}

int stack::pop() {
	int popped = array[this->tos];
	this->tos--;

	return popped;
}

void stack::display() {
	if (this->isEmpty()) {
		std::cout << "\nStack is empty..\n";
	}
	else {
		for (int i = this->tos; i >= this->beg; i--) {
			printf("%d\n", array[i]);
		}
	}
}

int main() {
	stack s1(0, 15);
	stack s2(16, 32);
	stack s3(33, 49);

	char ch;
	do {
		int choice, data;
		std::cout << "\n\n... Menu ...\n\n";
		std::cout << "1. Use stack 1\n2. Use stack 2\n3. Use stack 3\n";
		std::cout << "Enter your choice: ";
		std::cin >> choice;

		switch(choice) {
			case 1: do {
								std::cout << "\n\n.. Sub menu for stack 1..\n\n";
								std::cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
								std::cout << "\nEnter your choice: ";
								std::cin >> choice;

								switch(choice) {
									case 1: std::cout << "\nEnter element to be pushed: ";
													std::cin >> data;
													if (s1.isFull()) {
														std::cout << "\nStack overflow..\n";
													}
													else {
														s1.push(data);
													}
													break;
									case 2: if (s1.isEmpty()) {
														std::cout << "\nStack underflow..\n";
													}
													else {
														data = s1.pop();
														std::cout << "\nPopped element = " << data;
													}
													break;
									case 3: std::cout << "\nStack 1 status -> \n";
													s1.display();
													break;
									case 4: break;
									default: std::cout << "\nWrong choice\n";
								}
							}while(choice != 4);
								break;

			case 2: do {
								std::cout << "\n\n.. Sub menu for stack 2..\n\n";
								std::cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
								std::cout << "Enter your choice: ";
								std::cin >> choice;

								switch(choice) {
									case 1: std::cout << "\nEnter element to be pushed: ";
													std::cin >> data;
													if (s2.isFull()) {
														std::cout << "\nStack overflow..\n";
													}
													else {
														s2.push(data);
													}
													break;
									case 2: if (s2.isEmpty()) {
														std::cout << "\nStack underflow..\n";
													}
													else {
														data = s2.pop();
														std::cout << "\nPopped element = " << data;
													}
													break;
									case 3: std::cout << "\nStack 2 status -> \n";
													s2.display();
													break;
									case 4: break;
									default: std::cout << "\nWrong choice\n";
								}
							}while (choice != 4);
								break;

			case 3: do {
								std::cout << "\n\n.. Sub menu for stack 3..\n\n";
								std::cout << "1. Push\n2. Pop\n3. Display\n4. Exit\n";
								std::cout << "Enter your choice: ";
								std::cin >> choice;

								switch(choice) {
									case 1: std::cout << "\nEnter element to be pushed: ";
													std::cin >> data;
													if (s3.isFull()) {
														std::cout << "\nStack overflow..\n";
													}
													else {
														s3.push(data);
													}
													break;
									case 2: if (s3.isEmpty()) {
														std::cout << "\nStack underflow..\n";
													}
													else {
														data = s3.pop();
														std::cout << "\nPopped element = " << data;
													}
													break;
									case 3: std::cout << "\nStack 3 status -> \n";
													s3.display();
													break;
									case 4: break;
									default: std::cout << "\nWrong choice\n";
								}
							}while (choice != 4);
								break;
			default: std::cout << "\nWrong choice\n";
		}

		std::cout << "\nDo you wanna continue?(y/n) ";
		std::cin >> ch;
	}while (ch == 'y');

	return 0;
}
