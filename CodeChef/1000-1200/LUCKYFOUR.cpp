#include <string>
#include <iostream>

using namespace std;

int main()
{
	int T;
	string word;
	cin >> T;

	while(T--) {

		int O = 0;
	
		cin >> word;

		for (int i = 0; i < word.length(); i++) {
			
			if (word[i] == '4') {
				O += 1;
			}
		}

		cout << O << "\n";
	
	}

	return 0;
}
