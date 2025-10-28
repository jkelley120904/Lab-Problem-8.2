#include <iostream>
#include <string>
using namespace std;

int countWords(string str);

int main(void)
{
	string str;

	while (true)
	{
		cout << "Enter a string or Q to quit: ";
		getline(cin, str);
		if (str == "Q" || str == "q") break;
		cout << "Word count: " << countWords(str) << endl;
	}
}

int countWords(string str)
{
	int numWords = 1;
	char c;
	for (int i = 0; i < str.length(); i++)
	{
		c = str[i];

		if (c == ' ')
		{
			numWords++;
		}

	}
	return numWords;
}