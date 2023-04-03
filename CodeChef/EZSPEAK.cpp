#include <iostream>
#include <string>
#include <vector>

using namespace std;

int main() 
{	
	const string alphabet = "bcdfghjklmnpqrstvwxyzaeiou";
	vector <int> charIndex(26);
	int T, N;
	string word;

	for (int i = 0; i < 26; i++) {
		charIndex[alphabet[i] - 'a'] = i;
	}

	cin >> T;
	while(T--) {

		cin >> N;
		cin >> word;
		int wordCounter = 0;

		for (int j = 0; j < N; j++) {

			int index = charIndex[word[j] - 'a'];

			if (wordCounter == 4) {
				break;
			}

			if (index < 21) {
				wordCounter++;
			} else {
				wordCounter = 0;
			}
		}

		cout << (wordCounter == 4 ? "NO" : "YES") << "\n";

	}
	return 0;
}
