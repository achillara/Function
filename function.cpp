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
	 long double storage = 0;
	for( int i = 0; i<=100; i++){
		storage = wow(raise, i);
		for(int n = i; n>0; n--)
		{
			storage = storage / (n*1.0);
		}
		 answer =  answer + storage;
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

long double arctan(double x){ 
	long double answer = 0;
	int j=0;
	if(x>1){ 
		long double y = 1.0/x;
		cout<<"are you rwokringr"; 
		cout<< y << endl;
 	for( int i= 0; i<= 100000; i++){
		if(i%2 ==0 ){
 	 		answer = answer;
 		}
 		else{ 
 		  long double num = wow(y,i);
 		  long double den = i; 
 		  long double frac = num/den;
 		  answer = answer + (wow(-1,j))*frac;
 		  j++;
 		}
 	}
 	 answer = pi()/2.0 - answer;
 	 cout<< answer<<endl;
 	 cout<<answer<<endl;
 }

 	else { 
 		cout<<"are you rwokringr"; 
 	  for( int i= 0; i<= 100000; i++){
			if(i%2 ==0 ){
	 	 		answer = answer;
	 		}
	 		else{ 
	 		  long double num = wow(x,i);
	 		  long double den = i; 
	 		  long double frac = num/den;
	 		  answer = answer + (wow(-1,j))*frac;
	 		  j++;
 			}
		}
	}
 	
 	answer = answer * 180/pi();
 	return answer;


}


/*long double arcsin(double x){ 
	long double answer = 0;
	int j=0;
 	for( int i= 0; i<= 20; i++){
		if(i%2 ==0 ){
 	 		answer = answer;
 		}
 		else{ 
 		  long double num = wow(x,i);
 		  long double den = i; 
 		  long double frac = num/den;
 		  answer = answer + (wow(-1,j))*frac;
 		  j++;
		}

	}
} */





 long double sin(double theta){
	 bool sign_check = false;
	 if(theta < 0)
	 {
		 theta = -1.0 * theta;
		 sign_check = true;
	 }
	long double answer = 0;
	long double storage = 0;
	int j = 0;
	for( int i= 0; i<= 200; i++)
	{
		if(i%2 ==0 ){
		 answer = answer;
		}
		else
		{
			storage = (wow(-1,j))*(wow(theta,i));
		for(int n = i; n >0; n--)
		{
			storage = storage / (n*1.0);
		}
			answer = answer + storage;
			j++;
		}
	}
	if(sign_check ==true)
	{
		return answer * -1.0;
	}
	else
	{
		return answer;
	}
	}
 


int main()
{
	long double PIE2 = pi();
	long double sqr2 = sqr(2);
	long double seq2 = seq(2.0,2,0);

	cout << setprecision(12) << PIE2 << endl;

	double theta;

	
	cout << "Enter arctan:";
	cout << endl;
	
	long double power;
	cin >> power;
	long double answer2 = arctan(power);
	cout << setprecision(12) << answer2 << endl;
		
	return 0;
}