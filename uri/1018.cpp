#include <iostream>

using namespace std;

int proc(int value, int remain) {
  int count = remain / value;

  cout << count << " nota(s) de R$ " << value << ",00"  << endl;

  return remain%value;
}
int main() {

  int value;
  cin >> value;

  cout << value << endl;
  value = proc(100, value);
  value = proc(50, value);
  value = proc(20, value);
  value = proc(10, value);
  value = proc(5, value);
  value = proc(2, value);
  value = proc(1, value);

    return 0;
}
