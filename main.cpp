#include <iostream>
#include <string>

using namespace std;

int main(){
  int sum_result = sum(5, 6);
  cout << "Hello World !" << sum_result << endl;
  return 0;
}

int sum(int a, int b){
  return a + b;
}