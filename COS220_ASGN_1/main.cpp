/*
COS 220
Assignment 2
Feb. 28, 2018

Mathew Schaefer
--------------------------------------------------------------------------
This program produces a bill to the customer from the Caswell Catering
Company. This bill includes; meals, gratuity, room reservation, and state
tax.
--------------------------------------------------------------------------
*/

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    const double STATE_TAX = 0.065;
    const double GRATUITY = 0.18;

    double meal_beef = 12.95;
    double meal_chicken = 10.95;
    double meal_vegan = 8.95;

    int num_beef,num_chicken,num_vegan,num_meals = 0;

    int room_1 = 250;
    int room_2 = 200;
    int room_3 = 100;
    int room_4 = 50;

    int cost_room = 0;
    int num_people = 0;

    cout<<"Enter the number of beef meals: ";
        cin>>num_beef;
        cout<<endl;
        if(num_beef < 0){
            cout<<"Error invalid number of meals."<<endl;
            return(0);
        }
    cout<<"Enter the number of chicken meals: ";
        cin>>num_chicken;
        cout<<endl;
        if(num_meals < 0){
            cout<<"Error invalid number of meals."<<endl;
            return(0);
        }
    cout<<"Enter the number of vegan meals: ";
        cin>>num_vegan;
        cout<<endl;
        if(num_vegan < 0){
            cout<<"Error invalid number of meals."<<endl;
            return(0);
        }
    num_people = num_beef + num_chicken + num_vegan;
    if(num_people <= 200 && num_people > 150){
        cost_room = 250;
    }else if (num_people <= 150 && num_people > 100){
        cost_room = 200;
    }else if (num_beef <= 100 && num_people > 30){
        cost_room = 100;
    }else cost_room = 50;

    cout<<left<<fixed<<"\nCastwell Caterers by Matthew Schaefer\n\n";
    cout<<setw(30)<<"Number in party"<<setw(10)<<right<<num_people<<endl;
    cout<<left<<setw(30)<<"Room Cost: "<<setw(20)<<right<<setprecision(2)<<"$"<<cost_room<<endl;
    cout<<left<<setw(30)<<"Room Tax: "<<setw(20)<<right<<setprecision(2)<<"$"<<cost_room*STATE_TAX<<endl;
    cout<<left<<setw(30)<<"Number of beef diners"<<setw(10)<<right<<num_beef<<endl;
    cout<<left<<setw(30)<<"Cost of beef diners "<<setw(20)<<right<<setprecision(2)<<"$"<<num_beef*meal_beef<<endl;
    cout<<left<<setw(30)<<"Number of chicken diners"<<setw(10)<<right<<num_chicken<<endl;
    cout<<left<<setw(30)<<"Cost of chicken diners "<<setw(20)<<right<<setprecision(2)<<"$"<<num_chicken*meal_chicken<<endl;
    cout<<left<<setw(30)<<"Number of vegan diners"<<setw(10)<<right<<num_vegan<<endl;
    cout<<left<<setw(30)<<"Cost of vegan diners "<<setw(20)<<right<<setprecision(2)<<"$"<<num_vegan*meal_vegan<<endl;
    cout<<left<<setw(30)<<"Food Gratuity: "<<setw(20)<<right<<setprecision(2)<<"$"<<((num_beef*meal_beef)+(num_chicken*meal_chicken)
    +(num_vegan*meal_vegan))*GRATUITY<<endl;
    cout<<left<<"--------------------------------------------------------------------------"<<endl;
    cout<<setw(30)<<"Total:"<<setw(20)<<right<<setprecision(2)<<"$"<<cost_room+cost_room*STATE_TAX+(((num_beef*meal_beef)+(num_chicken*meal_chicken)
    +(num_vegan*meal_vegan))*(1+GRATUITY))<<endl;

    return 0;
}
