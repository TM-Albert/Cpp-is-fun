#include <iostream>

using namespace std;

int main()
{
	int T, X;

	cin >> T;

	while(T--) {
		
		cin >> X;

		if (X < 2000) {
			cout << "NO" << "\n";
		} else {
			cout << "YES" << "\n";
		}
	}

	return 0;
}
