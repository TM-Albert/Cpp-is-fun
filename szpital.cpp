#include <iostream>
#include <queue>
#include <sstream>
#include <string>

using namespace std;

int main() 
{
	int N;
	queue<string> q;

       	string inst;       
	cin >> N;

	for (int i = 0; i <= N; i++) {
		cin >> inst;
		
		if (inst[0] == 'n') {
			cin >> inst;
			
			q.push(inst);		
		}
		else if (inst[0] == 'z') {
			cout << q.front() << "\n";
			q.pop();
		}
		else {
			cout << q.size() << "\n";
		}
	};

	return 0;
}
