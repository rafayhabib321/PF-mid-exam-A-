#include <iostream>   //header library
using namespace std;
int main (){
	int choice;               //initializng 
	int balance = 1000;   
	int d = 0,w = 0;
	
	cout<<"Welcome to Habib Bank\n";
	do{										//using do loop to run menu and runtime input
		cout<<"\n1.Check balance\n";
		cout<<"2.Deposit Money\n";
		cout<<"3.Withdraw Money\n";
		cout<<"4.Exit\n";
		
		cout<<"Enter your choice (1-4)";
		cout<<":";cin>>choice;
		
		switch(choice){                     //switch 
			case 1 :
				cout<<"Your Total Balance is: $"<<balance;
				continue;
			case 2:
				cout<<"Enter money you want to Deposit: $";			
				cin>>d;
				balance += d;
				cout<<"Your total balance after deposit is: $"<<balance<<endl;
				continue;
			case 3:
				cout<<"Enter money you want to withdraw: $";
				cin>>w;
				if(w<=balance){
					balance -= w;
					cout<<"Your balance after withdraw: $"<<balance<<endl;
					continue;
				}else{      
					cout<<"error";      
					continue;
				}	
			case 4:
				cout<<"You want to Exit.";
				break;
			}
		}while(choice!=4);
		
	return 0;
}