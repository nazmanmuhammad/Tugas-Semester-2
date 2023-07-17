#include <iostream>
#include <string>

using namespace std;

// implementasi destructor
class Mahasiswa {
	public:
		Mahasiswa(string nama, int umur): nama_(nama), umur_(umur) {
			cout << "Constructor Mahasiswa" << endl;
		}
		
		~Mahasiswa() {
			cout << "===Contoh Destructor Mahasiswa===" << endl;
		}
		
		void tampilkanBiodata() {
			cout << "Nama: " << nama_ << endl;
			cout << "Umur: " << umur_ << endl;
		}
		
	private:
		string nama_;
		int umur_;
};

int main() {
	{
		Mahasiswa mhs("Rega", 20);
		mhs.tampilkanBiodata();
	}
	
	return 0;
}