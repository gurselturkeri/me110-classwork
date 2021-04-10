#include <iostream>
#include <cmath>
using namespace std;

int x1,x2,x3,x4,x5;  
double ortalama;                                     // ortalama fonksiyonu
double fortalama(int x1,int x2,int x3,int x4,int x5){  

return ortalama = (x1+x2+x3+x4+x5) / 5;

 	
}

double fsapma(){  //standart sapma fonksiyonu
	
	
	return sqrt((pow(x1-ortalama,2)+pow(x2-ortalama,2)+pow(x3-ortalama,2)+pow(x4-ortalama,2)+pow(x5-ortalama,2)) / 5);
	
}


int main() {
	
	cout << "sayilari gir: ";
cin >> x1;
cin >> x2;
cin >> x3;
cin >> x4;
cin >> x5;
	cout << "Ortalama: " <<  fortalama(x1,x2,x3,x4,x5) << endl;
    cout << "Standart Sapma: " << fsapma() << endl;
}

