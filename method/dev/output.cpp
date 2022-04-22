#include "../base.h"

void BaseProject::proses() {
	int j=1;
	i--;
 	hsks=150000;
	rekursif(j,i);
	diskon=total*0.25; 
  	total=total-diskon;
}

int BaseProject::rekursif(int j, int i){ 
	if(i<0){
		return i;
	}
	else{
		jumlah+=b[i];
		total+=hsks*b[i];
		return rekursif(j,(i-1));
	}
}

int main(){
 BaseProject base;
 	base.proses();
}
