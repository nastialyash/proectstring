

#include <iostream>
using namespace std;
class String {
	char* str;
	int length;

public:
	String(const char* s = "") {
		
		str = new char[length + 1];
		for (int i = 0; i < length; ++i) {
			str[i] = s[i];
		}
		str[length] = 0;
	}
	String(int l,char s)
	{
		length = 0;
		
	}
	String(const String& other) {
		this->length = 0;
		this->str = nullptr;
	}
	

	
	~String() {
		delete[] str;
	}

	
		char operator[](int index) const {
			return (index >= 0 && index < length);
	}


	int operator()(char c) const {
		for (int i = 0; i < length; ++i) {
			if (str[i] == c) {
				return i;
			}
		}
		return -1; 
	}


	explicit operator int() const {
		return length;
	}


	
	void print() const {
		cout << str << endl;
	}
};
int main()
{
	String myString("Hello, world!");

cout << "Symbol is : " << myString[7] << endl;

	
	char symbol = 'w';
	int index = myString(symbol);
	if (index != -1) {
		cout << "Symbol '" << symbol << "'found " << index << endl;
	}
	else {
		cout << "Symbol '" << symbol << "not found" << endl;
	}
}

