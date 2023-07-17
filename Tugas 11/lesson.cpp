#include <iostream>
#include <string>

using namespace std;

class Pelajaran { // class name
	public: // access specifier
		Pelajaran() { // constructor
			cout << "Ini adalah materi c++ tentang Constructors!";
		}
};

int main() {
	Pelajaran pel; // instance objek
	
	return 0;
}