#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

// Function to reverse a string in-place in C++
void reverse(string &s)
{
	int n = s.length();
	for (int i = 0; i < n/2; i++)
		std::swap(s[i], s[n-i-1]);
}

int main()
{
	std::string s("Reverse a string in C++");

	reverse(s);
	cout << s;
	return 0;
}
