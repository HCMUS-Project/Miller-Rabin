#include <iostream>

using namespace std;

long power_mod(long b, long e, long m)
{
  // input: b (base), e (exponent), m (modulus)
  // output: b^e mod m

  b %= m;
  long result = 1;
  while (e > 0) {
    // Check odds
    if (e & 1) {
      result = result * b % m;
    }
    b = b * b % m;
    e >>= 1;
  }

  return result;
}

bool miller_rabin(long n)
{
   // input: n
   // output: true/false
   return true;
}

int main()
{
   long n;
   cout << "-----------------------------------";
   cout << "--          Miller Rabin         --";
   cout << "-----------------------------------";
   cout << "-- 19127392 - To Gia Hao         --";
   cout << "-- 19127525 - Nguyen Thanh Quan  --";
   cout << "-- 19127625 - Lam Chi Van        --";
   cout << "-- 19127631 - Duong Tien Vinh    --";
   cout << "-----------------------------------";

   cout << "> Input n:";
   cin >> n;

   bool ML = miller_rabin(n);
   if (ML == true)
     cout << n << " is prime";
   else
     cout << n << " is not prime";

   return 0;
}
