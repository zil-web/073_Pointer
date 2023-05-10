#include <iostream>
using namespace std;

class mahasiswa {
public:
	int nim;
	void shownim(); // deklarasi method
};

void mahasiswa::shownim() { //implementasi method di luar class
	cout << "No induk = " << nim << endl;
}

int main()
{
	mahasiswa mhs{ 1 };     //object mhs
	mhs.shownim();          //member access operator 

	mahasiswa& ref = mhs;   //pointer access refMhs
	ref.nim = 2;            //member access operator
	mhs.shownim();

	mahasiswa* pmhs = &mhs; //pointer dereference pmhs
	pmhs->nim = 3;          //arrow operator
	pmhs->shownim();
	system("pause");
	return 0;
}