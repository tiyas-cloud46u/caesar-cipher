#include <iostream>
using namespace std;

int gcd(int a, int b, int& x, int& y) {
    if (b == 0) {
        x = 1;
        y = 0;
        return a;
    }
    int x1, y1;
    int d = gcd(b, a % b, x1, y1);
    x = y1;
    y = x1 - y1 * (a / b);
    return d;
}

int main()
{
  int x, y;
  x = 4, y = 6;
  int a = 3, m = 4;
  int g = gcd(a, m, x, y);
  if (g != 1) {
    cout << "No solution!";
  }
  else {
    x = (x % m + m) % m;
    cout << x << endl;
}
}