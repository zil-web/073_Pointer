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
}