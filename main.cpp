///SRI.41.008.040.22
///ARTHUR MOSES
/// COMPUTER SCIENCE AND ENGINEERING B
/// PROJECT WORK

#include<iostream>
#include<string.h>
#include <iomanip>
#include <ctime>
#include "customer.h"
#include "room.h"
#include "hotel.h"
using namespace std;

int main()
{
    system("color 20");
	hotel Des;		//CREATING OBJECT OF CLASS HOTEL
	char ch;
	cout<<endl<<"=================================WELCOME TO DESTINY GROUP OF HOTELS=======================================";
	do
	{		//MAIN MENU FOR OPTION
		cout<<endl<<"----------------------------------------------------------------------------------------------------------";
		cout<<endl<<"------------------------";
		cout<<endl<<""
				"MENU:\n"
				"1.OPERATE AS ADMIN\n"
				"2.OPERATE AS CUSTOMER\n"
				"3.EXIT\n";
        cout<<"------------------------"<<endl;
        cout<< "Enter your choice(1-3): ";

		cin>>ch;//MENU 1 TO USE WHEN A ADMIN ADMIN WANT TO ADD INFO
		switch(ch)
		{
		case '1':
			cout<<"INPUT YOUR PASSWORD"<<endl;
			Des.password();
			if (Des.password_check==true){
            cout<<"PASSW0RD CHECKED."<<endl;
            cout<<"------------------------------"<<endl;
            cout<<"ADD DATABASE OF ROOMS IN HOTEL"<<endl;
            cout<<"------------------------------"<<endl;
			Des.addRooms();
			cout<<"Database updated. Going back to main menu."<<endl;
			break;
			}
			else if(Des.password_check==false){                     //CHECKING FOR PASSWORD STATEMENT
			system("pause");
			system("break");
			system("cls");
			}


		case '2':
			char ch1;
			do
			{
				//MENU 2 TO USE WHEN A CUSTOMER WANTS TO CHECK IN
				cout<<endl<<"************************************************************************"<<endl;
				cout<<"~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~WELCOME TO DESTINY HOTEL~~~~~~~~~~~~"<<endl;
				cout<<"\n\t\t\t\t\t\t\t\t\t\t\t"
						"Menu:\n\t\t\t\t\t\t\t\t\t\t\t"
						"1.Check Availability of rooms.\n\t\t\t\t\t\t\t\t\t\t\t"
						"2.Search Room\n\t\t\t\t\t\t\t\t\t\t\t"
						"3.Check In\n\t\t\t\t\t\t\t\t\t\t\t"
						"4.Search Customer\n\t\t\t\t\t\t\t\t\t\t\t"
						"5.Guest Summary\n\t\t\t\t\t\t\t\t\t\t\t"
						"6.Checkout.\n\t\t\t\t\t\t\t\t\t\t\t"
						"7.Go back to Main Menu.\n\t\t\t\t\t\t\t\t\t\t\t"
						"Enter your choice:";


				cin>>ch1;
				switch(ch1)
				{
				case '1':
					Des.availability();
					break;
				case '2':
					Des.searchroom();
					break;
				case '3':
					Des.CheckIn();
					break;
				case '4':
					Des.searchcust();
					break;
				case '5':
					Des.Summary();
					break;
				case '6':
					Des.CheckOut();
					break;
				case '7':
					break;
				default:
					cout<<"Invalid Choice."<<endl;
					break;
				}
			}while(ch1!='7');
			break;
		case '3':
			cout<<"Thank you!";
			exit(0);
		default:
			cout<<"Invalid Choice."<<endl;
			break;
		}
	}while(ch!='3');
	return 0;
}

