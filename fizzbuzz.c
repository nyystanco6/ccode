#include <iostream>
using namespace std; 
int main(){
	
	int number;
	for (number == 1; number < 101; number++){ 
	if(number%3==0&number%5==0){cout<<"FizzBuzz";} 
	else if(number%3!=0 & number%5!=0){
cout<<number <<endl;} 
	else if(number%3==0){cout<<"Fizz";}
	else if(number%5==0){cout<<"Buzz";}  
	 
}		 
	
 

return 0;
}
