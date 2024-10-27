#include<iostream>
using namespace std;

int sum_of_digits(int num);       
int sum_of_digits_recur(int num);

int main(){
  
  int num{};
  
  cout << "Enter a 4 digit number: ";
  cin >> num;
  
  cout << "Sum of 4 Digit number using loop: " << sum_of_digits(num) << endl;
  cout << "Sum of 4 Digit number using recursion: " << sum_of_digits_recur(num) << endl;

  return 0;
}

// Sum of Numbers using loop
int sum_of_digits(int n){
  int result = 0;
  while(n != 0)
  {
      result += (n % 10);
      n = n / 10;
  } 
  
  return result;
}

// Sum of Numbers using recursion
int sum_of_digits_recur(int n){
  if(n == 0)
    return n;
  return (n % 10) + sum_of_digits_recur(n / 10);
}

