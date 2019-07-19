#include <iostream>
#include <queue>
#include <string>
#include <ctime>

class Shelter {
	std::time_t timestamp;
	std::queue<std::pair<std::string, std::time_t>> dogs;
	std::queue<std::pair<std::string, std::time_t>> cats;
public:
	void enqueue(std::string&, std::string&);
	void dequeueAny();
	void dequeueDog();
	void dequeueCat();
};

int main() {
	std::cout << "\n.. Welcome to Animal Shelter ..\n";
	std::cout << "\nTo sell a cute dog, type \"sell dog <dogname>\" \n";
	std::cout << "\nTo sell an ugly cat, type \"sell cat <catname>\" \n";
	std::cout << "\nTo buy a cute dog, type \"buy dog\" \n";
	std::cout << "\nTo buy an ugly cat, type \"buy cat\" \n";
	std::cout << "\nTo buy either, type \"buy any\" \n";

	Shelter sh;

	std::string s;
	std::string query, type, name;
	do {
		std::cin >> query;
		if (query == "sell") {
			std::cin >> type >> name;
			sh.enqueue(type, name);
		}
		else if (query == "buy") {
			std::cin >> type;
			if (type == "dog")
				sh.dequeueDog();
			else if (type == "cat")
				sh.dequeueCat();
			else if (type == "any")
				sh.dequeueAny();
			else
				std::cout << "\n\nPlease check the format..\n\n";
		}
		else {
			std::cout << "\n\nPlease check the format..\n\n";
		}

		std::cout << "\nFriend stay!\n";
		std::cin >> s;
	} while(s == "okay");

	return 0;
}

void Shelter::enqueue(std::string& s, std::string& name) {
	timestamp = std::time(NULL);
	if (s == "dog") {
		dogs.push(std::pair<std::string, std::time_t>(name, timestamp));
	}
	else if (s == "cat") {
		cats.push(std::pair<std::string, std::time_t>(name, timestamp));
	}
}

void Shelter::dequeueAny() {
	if (dogs.empty() && cats.empty()) {
		std::cout << "\nNo animals avaiable at the time, come back later..\n";
		return;
	}
	else if (cats.empty()) {
		std::cout << "\nYou get the cute dog " << dogs.front().first << "\n";
		dogs.pop();
		return;
	}
	else if (dogs.empty()) {
		std::cout << "\nYou get the ugly cat " << cats.front().first << "\n";
		cats.pop();
		return;
	}

	std::time_t dogTime = dogs.front().second;
	std::time_t catTime = cats.front().second;

	if (dogTime < catTime) {
		std::cout << "\nYou get the cute dog " << dogs.front().first << "\n";
		dogs.pop();
	}
	else {
		std::cout << "\nYou get the ugly cat " << cats.front().first << "\n";
		cats.pop();
	}
}

void Shelter::dequeueDog() {
	if (dogs.empty()) {
		std::cout << "\nSorry, no dogs available at the moment..\n";
		return;
	}
	std::cout << "\nYou get the cute dog " << dogs.front().first << "\n";
	dogs.pop();
}

void Shelter::dequeueCat() {
	if (cats.empty()) {
		std::cout << "\nSorry, no cats available at the moment..\n";
		return;
	}
	std::cout << "\nYou get the ugly cat " << cats.front().first << "\n";
	cats.pop();
}
