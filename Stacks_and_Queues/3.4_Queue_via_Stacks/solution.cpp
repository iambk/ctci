#include <iostream>
#include <stack>

class MyQueue {
	std::stack<int> s1, s2;
public:
	void enQueue(int);
	void deQueue();
};

int main() {
	MyQueue q;
	int choice, data, queries;

	std::cout << "\n.. Menu ..\n";
	std::cout << "1. EnQueue\n2. DeQueue\n";

	std::cout << "\n.. Query formats ..\n";
	std::cout << "For enqueueing: 1 <data>\n";
	std::cout << "For dequeueing: 2\n";

	std::cout << "\nEnter number of queries: ";
	std::cin >> queries;

	while (queries--) {
		std::cin >> choice;

		switch(choice) {
			case 1: std::cin >> data;
				q.enQueue(data);
				break;
			case 2: q.deQueue();
				break;
			default: std::cout << "\nWrong choice..\n";
		}
	}

	return 0;
}

void MyQueue::enQueue(int data) {
	s1.push(data);
}

void MyQueue::deQueue() {
	if (s1.empty() && s2.empty()) {
		std::cout << "\nStack underflow..\n";
	}
	else {
		if (s2.empty()) {
			while (!s1.empty()) {
				s2.push(s1.top());
				s1.pop();
			}
		}
		std::cout << "Dequeued element: " << s2.top() << "\n";
		s2.pop();
	}
}
