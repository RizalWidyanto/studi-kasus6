#include <iostream>
#include <iomanip>
using namespace std;

class BaseProject {
	public :
	void input();
	void proses();
	int rekursif(int j, int i);
	void output();
	
	private:
	string a [20];
	string nama;
	int  b[20];
	int hsks;
	int bykA, i, nim; 	
	float total,jumlah, diskon;
};
