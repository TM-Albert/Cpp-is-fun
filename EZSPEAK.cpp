#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main() {
	
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
	    int charCounter = 0;
	    
	    for (int j = 0; j < N; j++) {
	        
	        if (charCounter == 4) {
	            break;
	        }
	        
	        int index = charIndex[word[j] - 'a'];
	        
	        if (index < 21) {
	            charCounter++;
	        } else {
	            charCounter = 0;
	        }
	    }
	    
	    cout << (charCounter == 4 ? "NO" : "YES") << "\n";
	}
	
	return 0;
}
