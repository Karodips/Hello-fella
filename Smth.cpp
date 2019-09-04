#include <iostream>
#include <string>

using namespace std;

int main()
{
  float a, b, c, maximum, minimum;
  cout << "Введите 3 числа";
  cin >> a >> b >> c;
  maximum = a > b ? a : b;
  maximum = maximum < c ? c : maximum;
  minimum = a < b ? a : b;
  minimum = minimum > c ? c : minimum;
  cout << "Максимальое число " << maximum << "Минимальное " << minimum;
  return 0;
}
