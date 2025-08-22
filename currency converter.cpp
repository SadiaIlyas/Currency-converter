#include<iostream>
#include <iomanip>
using namespace std;
double toUsd(int source,double amount){
	switch(source){
		case 1:{
			return amount;  	//usd
			break;}
		case 2:{
			return amount*0.0036;   	//pkr
			break;}	
		case 3:{
			return amount*1.09;  //EUR
			break;}	
		case 4:{
			return amount*1.30;			//GBP
			break;}	
		case 5:{
			return amount*0.012;		//INR
			break;}	
		case 6:{
			return amount*0.27;			//AED(Dirham)
			break;}	
		case 7:{
			return amount*0.00074;		//KRW(Won)
			break;}	
		case 8:{
			return amount*0.2667;		//SAR(Riyal)
			break;}
		default:{
			return -1;
			break;
		}}}	
double fromUsd(int target,double amount){
	switch(target){
		case 1:{
			return amount;  	//usd
			break;}
		case 2:{
			return amount/0.0036;   	//pkr
			break;}	
		case 3:{
			return amount/1.09;  //EUR
			break;}	
		case 4:{
			return amount/1.30;			//GBP
			break;}	
		case 5:{
			return amount/0.012;		//INR
			break;}	
		case 6:{
			return amount/0.27;			//AED(Dirham)
			break;}	
		case 7:{
			return amount/0.00074;		//KRW(Won)
			break;}	
		case 8:{
			return amount/0.2667;		//SAR(Riyal)
			break;}
		default:{
			return -1;
			break;
		}}}
void showMenu() {
    cout << "\nSelect currency:\n";
    cout << "1. USD\t\t2. PKR\n3. EUR\t\t4. GBP\n5. INR\t\t6. AED (Dirham)\n7. KRW (Won)\t\t8. SAR (Riyal)\n";
}
int main()
{
		int source,target;
		double amount,value,finalamount;
		char choice;
		do{
			cout<<"enter the currency of your amount/n";
			showMenu();
			cin>>source;
			cout<<"enter your amount/n";
			cin>>amount;
			cout<<"enter the currency in which you want to convert the amount/n ";
			showMenu();
			cin>>target;
			value=toUsd(source,amount);
			if(value==-1)
				cout<<"Invalid input currency!\n";
			else{
				finalamount=fromUsd(target,value);
				if(finalamount==-1)
					cout<<"invalid target currency\n";
				else{	
					cout<<"the converted amount is:"<<setprecision(4)<<finalamount<<endl;}
			}
			cout<<"do you want to convert another amount(Y/N)"<<endl;
			cin>>choice;
		}while(choice=='y'||choice=='Y');
		cout << "Thank you for using the Currency Converter!\n";
		return 0;
	}
		