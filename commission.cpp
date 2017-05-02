#include <iostream>
#define TERMINAL -1
using namespace std;
double commission(int lock,int stock,int barrel){
	double sales;
	if (lock==-1 || lock>70 || stock >80 || barrel>90){
		return TERMINAL;
	}
	sales=(lock*45+stock*30+barrel*25);
	if (sales<=1000){
		return( sales*0.1);
	}
	else if(sales>1000 && sales<=1800){
		return(1000*0.1+(sales-1000)*0.15);
	}
	else if (sales>1800){
		return(1000*0.1+800*0.15+(sales-1800)*0.2);
	}
}

/*int main(){
	int lock,stock,barrel;
	cout<<"input lock,stock,barrel for commission"<<endl;
	cin >> lock;
	cin >> stock;
	cin >> barrel;
	cout<< commission(lock,stock,barrel)<<endl;
}*/
