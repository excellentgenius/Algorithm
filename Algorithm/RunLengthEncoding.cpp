#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
	string inputString, outputString;
	cin >> inputString;
	int n = inputString.size();
	outputString = inputString[0];
	int i, count = 1;
	for (i = 1; i<n; i++)
	{
		if (inputString[i] == inputString[i - 1])
		{
			count++;
		}
		else
		{
			outputString = outputString + to_string(count) + inputString[i];
			count = 1;
		}
	}
	outputString = outputString + to_string(count);
	cout << outputString << endl;
	return 0;
}