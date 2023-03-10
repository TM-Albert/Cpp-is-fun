#include <iostream>
#include <string>
using namespace std;

int main() {
	
	int T;
	
	cin >> T;
	
	while (T--) {
	    
	       int feedBack = 0;
	       string N;
	       
	       cin >> N;
	       
	       int wordL = N.length() - 1;
	       for (int i = 0; i < wordL; i++) {
	           
	           if (feedBack > 0 || i == wordL - 1) {
	               break;
	           }
	           
	           if (N[i] == '1') {
	               
	               if (N.substr(i, 3) == "101") {
	                   feedBack += 1;
	               }
	               
	           } else {
	               
	               if (N.substr(i, 3) == "010") {
	                   feedBack += 1;
	               }
	               
	           }
	           
	       }
	       
	       cout << ((feedBack > 0) ? "Good" : "Bad") << "\n";
	    
	}
	
	return 0;
}
