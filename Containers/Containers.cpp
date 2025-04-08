#include <iostream>
#include <array>
#include <vector>
#include <list>
#include <stack>
#include <map>
using namespace std;


int main() {
	// array
	array<string, 7> a = { "Monday","Tuesday", "Wednesday", "Thursday", "Friday", "Saturday", "Sunday" };
	cout << a.size() << endl;

	for (int i = 0; i < a.size(); i++) {
		cout << a[i] << endl;
	}

	//vector 
	vector<int> v = { 1, 2, 3, 4, 5 };
	v.push_back(7);
	v.pop_back();

	for (int i = 0; i < v.size(); i++) {
		cout << v[i] << endl;
	}


	//list
	list <string> l = { "Strawberry", "Banana", "Watermelon"};
	l.insert(l.begin(), "Orange");
	l.insert(l.end(), "Apple");
	l.remove("Banana");
	for (string s : l) {
		cout << s << endl;
	}

	//map
	map<string, int> m;
	m["Toilet Paper"] = 10;
	m["Soap"] = 15;
	m["String Cheese"] = 150;
	m["Toilet Paper"] = 20;
	for (const auto& pair : m) {
		std::cout << "Key: " << pair.first << ", Value: " << pair.second << std::endl;
	}
	


	//cout << &i << endl;
	/*cout << (void*)(&a[0]) << endl;
	cout << (void*)(&a[1]) << endl;*/

	


	return 0;
}