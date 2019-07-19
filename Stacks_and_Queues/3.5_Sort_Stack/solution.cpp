#include <iostream>
#include <stack>

int main() {
	int size;
	std::cin >> size;

	std::stack<int> s;
	int data;
	while (size--) {
		std::cin >> data;
		s.push(data);
	}

	std::stack<int> temp;
	while (!s.empty()) {
		int top = s.top();
		s.pop();
		if (!temp.empty() && top >= temp.top())
			temp.push(top);
		else {
			while (!temp.empty() && top < temp.top() ) {
				s.push(temp.top());
				temp.pop();
			}
			temp.push(top);
		}
	}

	std::cout << "Desc order: ";
	while (!temp.empty()) {
		std::cout << temp.top() << " ";
		s.push(temp.top());
		temp.pop();
	}
	std::cout << std::endl;

	std::cout << "Asc order: ";
	while (!s.empty()) {
		std::cout << s.top() << " ";
		s.pop();
	}
	std::cout << std::endl;
}
