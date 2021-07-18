//Mutharib(i200476) assignment 1

#include <iostream>
#include <iomanip>
using namespace std;
int main(){
	
	int anum,bnum,cnum,dnum;		//variables for number of seats of each class
	float tincome;				//variable for total generated income
	cout<<"Enter number of tickets sold for seats of class a,b,c and d respectively \n(separated with a space): ";
	cin>>anum>>bnum>>cnum>>dnum;		//Taking input for the number of seats of each class
	tincome=(20*anum)+(15*bnum)+(10*cnum)+(5*dnum);	//Calculating the total income using formula
	cout<<fixed<<setprecision(2)<<showpoint<<"The total income generated is $"<<tincome<<endl;		//Total income printed in the right format	
	
	return 0;
}
