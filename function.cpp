#include <iostream>
#include <iomanip>

using namespace std;

long double factorial(int num){
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

long double e(long double raise){ 
	 long double  answer = 0;
	for( int i = 0; i<=20; i++){
		 answer =  answer + wow(raise, i)/factorial(i);
	}
	return answer; 
}

long double sqr(long double n){
	long double ans =1; 
	for( int i =0; i< 200; i++){
		long double number = n/ans;
		ans =(number + ans) * 1/2;
	}
	return ans;
}


long double seq(long double x, int n, int i){
	
    	if ( i>=n){
    		return 0.0;
    	}
    	else{ 
    	cout << "this is i "<< i << endl;
         return  sqr(2+seq(x,n, i+1));
         
   		}

 
}

long double pi(){ 
	long double pi = 2;
	double pls = 1/2; 
	for( int i =1; i< 100; i++){ 

		// recursive???
		pi = pi * 2/seq(2.0,i,0);
		//pls = pls*1/2;

	}

	return pi;
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
	long double PIE2 = pi();
	long double sqr2 = sqr(2);
	long double seq2 = seq(2.0,2,0);

	cout << fixed << setprecision(11) << PIE2 << endl;

	double theta;

	// SINX
	cout << "Enter Degree"; 
	cout << endl;

	cin >> theta;
	
	theta = theta * PIE2 / 180;
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