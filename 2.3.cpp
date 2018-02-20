// Example program
#include <iostream>
#include <string>
using namespace std;
class sample
{
    public:
    int n,i;
    bool isPrime=true;
    int calc()
    {
    for(i = 2; i <= n / 2; ++i)
  {
      if(n % i == 0)
      {
          isPrime = false;
          break;
      }
  }
  if (isPrime)
      cout << "This is a prime number";
  else
      cout << "This is not a prime number";
         return 0;
    }
};
int main()
{
  sample s;
  cout << "Enter a positive number: ";
  cin >> s.n;
  s.calc();
  return 0;
}
