#include <iostream>
#include <iomanip>

using namespace std;

double long factorial(int num){
	int num2 = 1;
	for( int i =1; i<= num; i++){
	     num2 = i* num2; 
	}
	return num2;
}

double wow(double num, int raise) { 
	double total = 1;
	for(int i = 1; i<= raise; i++)
	{
		total = total * num;
	}
	return total;
}

double long e(long double raise){ 
	long double answer = 0;
	for( int i = 0; i<=20; i++){
		 answer =  answer + wow(raise, i)/factorial(i);
	}
	return answer; 
}




 long double sin(double theta){
	long double answer = 0;
	int j=0;
	for( int i= 0; i<= 20; i++){
		if(i%2 ==0 ){
		 answer = answer;
		}
		else{ 
			answer = answer + (wow(-1,j))*(wow(theta,i)/factorial(i));
			j++;
		}
	}
	return answer;
 }


int main()
{
	long double pi = 3.14159265359;
	double theta;

	// SINX
	cout << "Enter Degree"; 
	cout << endl;

	cin >> theta;
	
	theta = theta * pi / 180;
	long double answer = sin(theta);

	cout << fixed << setprecision(10) << answer << endl;
	
	//E^X
	cout << "Enter power of e:";
	cout << endl;
	
	long double power;
	cin >> power;
	long double answer2 = e(power);
	cout << fixed << setprecision(10) << answer2 << endl;
		
	return 0;
}