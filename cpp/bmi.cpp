#include <iostream>

using namespace std;

int main(int argc, char **argv)
{
	float waga; 
	float wzrost;
	float bmi;
	
	wzrost = 0;
	waga = 0;
	bmi =  0;
	
	cout <<"Podaj swoją wagę w kilogramach: ";
	cin>>waga;
	
	cout<<"Podaj swój wzrost w centymetrach: ";
	cin>>wzrost;
	
	wzrost = wzrost/100; 
	
	bmi = waga/(wzrost*wzrost);
	 
	 
	cout<<bmi<<endl;
	if (bmi < 0) {
		cout<<"Błędne dane";
	return 0;
}
{	if (bmi <18.5)
		cout<<"Niedowaga";
    else if (bmi < 25) 
		cout<<"BMI w normie";
    else if (bmi < 30) 
		cout<<"Nadwaga";
    else 
		cout<<"Otyłość";
	
	 
	return 0;
}
}

