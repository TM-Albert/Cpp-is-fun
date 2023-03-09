#include <iostream>
#include <string>
using namespace std;

int main() {
	int T,N,K,A;
	
	cin >> T;
	
	while(T--) {
	    
	       string R;
	       
	       cin >> N >> K;
	       
	       for(int i = 0; i < N; i++) {
	           cin >> A;
	           
	           if ((K - A) >= 0) {
	               R += "1";
	               K = K - A;
	           }
	           
	           else {
	               R += "0";
	           }
	       }
	       
	       cout << R << "\n";
	}
	
	return 0;
}
