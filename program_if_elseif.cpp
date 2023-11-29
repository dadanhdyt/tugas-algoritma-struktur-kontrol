#include <iostream>
using namespace std;
int main(){
	int bil1,bil2,bil3;
	cout << "Masukan bilangan 1: ";
	cin >> bil1;
	
	cout << "Masukan bilangan 2: ";
	cin >> bil2;
	
	cout << "Masukan bilangan 3: ";
	cin >> bil3;
	
	if ( bil1 > bil2 && bil1 > bil3 ){
		cout << "Bilangan terbesar adalah: "<<bil1;
	} else if(bil2 > bil1 && bil2 > bil3) {
	    cout << "Bilangan terbesar adalah: "<<bil2;
	} else if(bil3 > bil2 && bil3 > bil1) {
	    cout << "Bilangan terbesar adalah: "<<bil3;
		
	}
	return 0;
}