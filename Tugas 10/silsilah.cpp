#include <iostream>

using namespace std;

class Silsilah {
	protected:
		string orangtua = "Albert Wijaya dan Jenny Lim";
		string anak = "Agatha Wijaya dan Jonathan Wijaya";
	
	public:
		string cekSilsilah() {
			return "Ayah bernama Albert Wijaya dan ibu bernama Jenny Lim";
		}
};

class Cucu: public Silsilah {
	protected:
		string cucu = "Wilbert Tan dan Rayanza Wijaya";
	
	public:
		string cekAnak() {
			return "Anak pertama keluarga Wijaya adalah Agatha Wijaya dan anak kedua dari keluarga Wijaya adalah Jonathan Wijaya";
		}
};

class Anak: public Cucu {
	public:
		string lihatSilsilah() {
			return "Silsilah Keluarga Wijaya";
		}
		
		string cekCucu() {
			return "Cucu pertama bernama Wilbert Tan dan Cucu kedua bernama Rayanza Wijaya";
		}
};

int main() {
	Anak silsilahWijaya;
	
	cout << silsilahWijaya.lihatSilsilah() << endl;
	cout << silsilahWijaya.cekSilsilah() << endl;
	cout << silsilahWijaya.cekAnak() << endl;
	cout << silsilahWijaya.cekCucu() << endl;
	
	return 0;
}