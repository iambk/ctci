#include <iostream>
#include <vector>

#define SIZE 10

class stack {
	int array[SIZE];
	int tos;
public:
	stack() { tos = -1; }
	bool isEmpty();
	bool isFull();
	void push(int);
	int pop();
	void display();
};

class StackOfPlates {
	std::vector<stack> stacks;
public:
	StackOfPlates();
	bool isEmpty();
	void push(int);
	int pop();
	int popAt(int);
	void display();
};

// Follow up function
int StackOfPlates::popAt(int index) {
	int popped = stacks[index].pop();

	if (stacks[index].isEmpty() && stacks.size() != 1) stacks.erase(stacks.begin() + index);
	return popped;
}

int main() {
	StackOfPlates sp;
	char ch;
	int choice, data, index;

	do {
		std::cout << "\n...Menu...\n";
		std::cout << "1. Push\n2. Pop\n3. Pop At\n4. Display\n";
		std::cout << "Your choice? ";
		std::cin >> choice;

		switch(choice) {
			case 1: std::cin >> data;
				sp.push(data);
				break;
			case 2: std::cout << "\nPopped element = " << sp.pop() << "\n";
				break;
			case 3: std::cin >> index;
				std::cout << "\nPopped element = " << sp.popAt(index) << "\n";
				break;
			case 4: sp.display();
				break;
			default: std::cout << "\nWrong choice.. Try again!\n";
		}

		std::cout << "\nDo you wanna continue?(y/n): ";
		std::cin >> ch;
	} while (ch == 'y');

	return 0;
}

bool stack::isEmpty() {
	if (tos == -1) return true;
	return false;
}

bool stack::isFull() {
	if (tos == SIZE - 1) return true;
	return false;
}

void stack::push(int data) {
	if (tos != SIZE - 1) tos++;
	array[tos] = data;
}

int stack::pop() {
	int popped = array[tos];
	tos--;

	return popped;
}

void stack::display() {
	if (isEmpty())
		std::cout << "\nStack is empty..\n";
	else 
		for (int i = tos; i >= 0; i--) std::cout << array[i];
}

StackOfPlates::StackOfPlates() {
	stack s;
	stacks.push_back(s);
}

bool StackOfPlates::isEmpty() {
	if (stacks[stacks.size() - 1].isEmpty()) return true;
	return false;
}

void StackOfPlates::push(int data) {
	if (stacks[stacks.size() - 1].isFull()) {
		stack s;
		stacks.push_back(s);
	}
	stacks[stacks.size() - 1].push(data);
}

int StackOfPlates::pop() {
	int popped = stacks[stacks.size() - 1].pop();

	if (isEmpty() && stacks.size() != 1) stacks.erase(stacks.end() - 1);
	return popped;
}

void StackOfPlates::display() {
	for (auto it = stacks.rbegin(); it != stacks.rend(); it++) (*it).display();
}
