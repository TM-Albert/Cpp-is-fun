#include <iostream>
#include <string>

using namespace std;

int main() 
{
	string W;

	cin >> W;

	for(int i = 0; i < W.length(); i++) {

		if (W[i] == '1') {
			cout << "This is one" << "\n";
		}

		cout << W[i] << "\n";
	}

	return 0;
}
