//Autumn Macon
//Date: 398
//File: Github Main.cpp
//Description:

#include <iostream>

using namespace std;

//function
int sum(int num){
  int sum =0;
  for(int i =1; i <=num; i++){
    sum +=i;
  }
  return sum;
}


int main(){

  int n;
  
  cout << "Hello World!" << endl;

  cout << "Please enter a number!" <<endl;
  cin >> n;

  cout << "The sum is: " << sum(n) << endl; 
  //sum(n);
}

