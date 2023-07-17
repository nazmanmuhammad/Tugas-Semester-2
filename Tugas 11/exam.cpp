#include <iostream>

using namespace std;

class Latihan { // class name
	private: // access specifier
		int nilai; // attribut private
	
	public:
		// constructor
		Latihan(int n) {
			nilai = n; // pemberian suatu nilai kedalam attribut
		}
		
		// getter
		int getNum() {
			return nilai;
		}
};

int main() {
	// instance object
	Latihan lat(10);
	// return method getter
	cout << "Nilai yang diinputkan: " << lat.getNum() << endl;
	
	return 0;
}