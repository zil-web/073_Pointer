#include <iostream>
#include <string>
using namespace std;

class pelajar;

class manusia {
public:
	void showNilaipelajar(pelajar&);

};

class pelajar {
private:
	int Nilai;
public:
	pelajar() {
		Nilai = 100;
	}
	friend void manusia::showNilaipelajar(pelajar& x);
};

void manusia::showNilaipelajar(pelajar& x) {
	cout << "nilai pelajar: " << x.Nilai;
}
int main()
{
	manusia m;
	pelajar p;
	m.showNilaipelajar(p);
	cout << endl;
	system("\npause");
	return 0;
}
