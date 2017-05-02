#include <iostream>
#define INVALID -1

using namespace std;

int Nextday(int year,int month,int day){
	bool leap =false;
	bool bigmonth=true;
	if ((year<1812)||(year>2012)||(month<1)||(month>12||(day<1)||(day>31))){
		return INVALID;
	}
	else if((year%4)==0&&((year%100)!=0||(year%400)==0)){
		leap=true;
	}
	if(!leap && month==2 && day>28){
		return INVALID;
	}
	if ((month<7 && month%2==0)||(month>=8 &&month%2==1)){
		bigmonth=false;
	}
	else{
		bigmonth=true;
	}
	day+=1;
	if(month!=2 && bigmonth){
		if(day==32){
			day=1;
			month+=1;
		}
	}
	else if (month!=2 && !bigmonth){
		if(day==31){
			day=1;
			month+=1;
		}
	}
	else if (month==2&&(( leap&&(day==30)) ||(!leap&&(day==29)))){
		day=1;
		month+=1;
	}
	if (month==13){
		month=1;
		year+=1;
	}
	return year*10000+month*100+day;
}

/*int main(){
	int year,month,day;
	cout<<"input year,month,day for Nexyday"<<endl;
	cin >> year;
	cin >> month;
	cin >> day;
	cout<<Nextday(year,month,day)<<endl;
}*/
