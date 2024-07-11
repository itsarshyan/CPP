#include <iostream>
using namespace std;

int main() 
{
	int selected_car1,rent_car,hours,total_expense_before_depature;// declaring variables
	string id_card_name_first,id_card_name_last;
	 
    string  rent_Mercedes,rent_Audi,rent_BMW,rent_Lamborghini,rent_Tesla,rent_RollsRoyce,rent_Ford;//The string statement is used to store variables, numbers and characters alike
    string  selected_car_final,selected_car2;
    
    string final_car,car_number_Mercedes,car_number_Audi,car_number_BMW,car_number_Lamborghini,car_number_Tesla,car_number_RollsRoyce,car_number_Ford;
    
    rent_Mercedes="500 dollars";// rent of the cars
    rent_Audi="400 dollars";
    rent_BMW="600 dollars";
    rent_RollsRoyce="800 dollars";
    rent_Lamborghini="900 dollars";
    
    
	cout<<"\t\t\t\t\t|||Welcome to rent a car|||\n"<<endl;//\t provides 8 spaces, \n is used to skip to the next line
	cout<<"Please enter your First name : ";// it will show the name of customer on screen
	cin>>id_card_name_first;
	cout<<"Please enter your Last name : ";
	cin>>id_card_name_last;

	cout<<"Please select a car from the following list";
	cout<<":\n1.Mercedes\n2.Audi\n3.BMW\n4.Lamborghini\n5.Tesla\n6.Rolls-Royce\n7.Ford\n\n";
	cout<<"Enter the number before the car to select the car :";// by selecting numbers the details of the car will shown up
	
	cin>>selected_car1;// if customer selects 1 then that car's details will be shown.
	switch (selected_car1)  
	{
    case 1:
         cout<<"You have chosen Mercedes"<<endl;// number 1 car details
	    
	     cout<<"Do you want to rent the car Mercedes (Y or N)"<<endl;
	     car_number_Mercedes="K9222";
	     selected_car2="Mercedes";
	     rent_car=500;
	     final_car=car_number_Mercedes;
        break;

    case 2:
        cout<<"You have chosen Audi"<<endl;// number 2 car details
        cout<<"Do you want to rent the car Audi (Y or N)"<<endl;
	    selected_car2="Audi";
	    car_number_Audi="IO-D-341";
	    rent_car=400;
	    final_car=car_number_Audi;
        break;
        
    case 3:
        cout<<"You have chosen BMW"<<endl;// number 3 car details
        cout<<"Do you want to rent the car BMW (Y or N)"<<endl;
	    selected_car2="BMW";
	    car_number_BMW="C52641";
	    rent_car=600;
	    final_car=car_number_BMW;
        break;
        
    case 4:
        cout<<"You have chosen Lamborghini"<<endl;// number 4 car details
        cout<<"Do you want to rent the car Lamborghini (Y or N)"<<endl;
	    selected_car2="Lamborghini";
	    car_number_Lamborghini="DL 1 CS 2444";
	    rent_car=800;
	    final_car=car_number_Lamborghini;
        break;
        
    case 5:
        cout<<"You have chosen Tesla"<<endl;// number 5 car details
        cout<<"Do you want to rent the car Tesla (Y or N)"<<endl;
	    selected_car2="Tesla";
	    car_number_Tesla="NO 67 GAS";
	    rent_car=650;
	    final_car=car_number_Tesla;
        break;      
    case 6:
        cout<<"You have chosen Rolls-Royce"<<endl;// number 6 car details
        cout<<"Do you want to rent the car Rolls-Royce (Y or N)"<<endl;
	    selected_car2="Rolls-Royce";
	    car_number_Mercedes="F4TSO";
	    rent_car=900;
	    final_car=car_number_Mercedes;
        break;
	case 7:
        cout<<"You have chosen Ford"<<endl;// number 7 car details
        cout<<"Do you want to rent the car Ford (Y or N)"<<endl;
	    selected_car2="Ford";
	    car_number_Ford="CMDY 815";
	    rent_car=700;
	    final_car=car_number_Ford;
        break;    
		  
    default:// if the user selects unknown number which didn't exist in the program then this statement will be shown up
	    cout<<"You have entered wrong number"<<endl;
		break;
	}
	
	cin>>selected_car_final;
	
    if(selected_car_final=="Y" or selected_car_final=="y") // by selecting Y the car will be finalized
       {
       	cout<<"You have selected "<<selected_car2<<endl;
	   }
	   
	else if(selected_car_final=="N" or selected_car_final=="n") // by selecting N the deal gets cancel
	{
		cout<<"So you don't want to rent the car, well better luck next time\n";
		goto label;
	}
	
	else
	    cout<<"You have not selected any car\n";    // if customer didn't select anything then this statement will shown up
	
	cout<<"OK, now please tell us the amount of hours you will be needing the car ";// if the deal gets final then this statement will shown up

		cin>>hours;
		total_expense_before_depature=rent_car*hours;
		cout<<"\n\n\t\t\t\t||| Name : "<<id_card_name_first<<" "<<id_card_name_last<<" |||"<<endl;// customer name
		cout<<"\t\t\t\t||| Car Name : "<<selected_car2<<" |||"<<endl;//selected car name
		cout<<"\t\t\t\t||| Car Number : "<<final_car<<" |||"<<endl;// selected car number
		cout<<"\t\t\t\t||| Rent accumalated : "<<total_expense_before_depature<<" Dollars |||"<<endl;// rent of the car
	label:
	return 0;
}

