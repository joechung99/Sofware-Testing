#include<iostream>
using namespace std;
class judgTrangle{
	public:
		int a1;
		int a2;
		int a3;
		static int trangletype(int,int,int);	
		static int isboundary(int,int,int);
		static int test(int a,int b);
};
int judgTrangle::test(int a,int b){
	return a+b;
}
int judgTrangle::isboundary(int a1,int a2,int a3){
	if (a1<1||a1>200){
		//cout << "a invalid"<<endl;
		return 0;
	}
        else if (a2<1||a2>200){
                //cout << "b invalid"<<endl;
                return 0;
        }
        else if (a3<1||a3>200){
                //cout << "c invalid"<<endl;
                return 0;
        }
}
int judgTrangle::trangletype(int a1,int a2,int a3){
	if (isboundary(a1,a2,a3)==0){
		//cout << "not trangle"<<endl;
		return 0;
	}
	if (a1>=a2+a3){
		//cout <<"not trangle"<<endl;
		return 0;
	}
        else if (a2>=a1+a3){
                //cout <<"not trangle"<<endl;
                return 0;
        }
        else if (a3>=a2+a1){
                //cout <<"not trangle"<<endl;
                return 0;
        }
	if (a1==a2&&a2==a3){
		//cout <<"Equilateral"<<endl;
		return 1;
	}
	else if(a1!=a2 && a1!=a3 && a2!=a3){
		//cout <<"Scalene"<<endl;
		return 2;
	}
	else{
		//cout<<"Isosceles"<<endl;
		return 3;
	}
}
/*int main(){
	int a1,a2,a3;
	cout<<"input a,b,c for trangle"<<endl;
	cin >> a1;
	cin >> a2;
	cin >> a3;
	judgTrangle test;
	test.trangletype(a1,a2,a3);
}*/
