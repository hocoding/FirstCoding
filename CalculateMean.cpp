#include <iostream>
#include <cstdio>
#include <vector>

using std::cout;
using std::cin;

int main ()
{
  int total_number;
  float sum,average;
  
  cout << "How many numbers do you need to average? ";
  cin >> total_number;
  
  cout << "Enter " << total_number << " numbers: ";
  std::vector<float> numbers (total_number);
  int i =0;
  for(i=0;i<total_number;i++) cin >> numbers[i];
  sum=0;
  for(i=0;i<total_number;i++) sum += numbers[i];
  average = (1.0*sum)/total_number;
  printf("The average is %.4f.\n",average);
}
