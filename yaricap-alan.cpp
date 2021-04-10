#include <iostream>
#include <cmath>

using namespace std;

double radius;
double fradius(int x1,int y1,int x2,int y2){  //yarýçap fonksiyonu
	
	radius = sqrt(pow(x2-x1,2)+pow(y2-y1,2));
	return radius;
	
	
}
double farea(){     //alan fonksiyonu
	
	return M_PI * radius * radius;
	
}
double fcircumference(){  //çevre fonksiyonu
	
	return 2 * M_PI * radius;
}

int main() {
	int x1,y1,x2,y2;
	
	cout << "x2 value: ";
	cin>>x2;
    cout << "x1 value: ";
	cin>>x1;
	cout << "y2 value: ";
	cin>>y2;
	cout << "y1 value: ";
	cin>>y1;
	cout << "radius: " << fradius(x1,y1,x2,y2) << endl;
	cout << "area: " << farea() << endl;
	cout << "circumference: " << fcircumference() << endl;
	cout << "diameter: " << 2 * fradius(x1,y1,x2,y2) << endl; 
		
	
}
