#include <iostream>
#include <cstdio>

using namespace std;

int main()
{
    double number, hour, salary;
    cin >> number >> hour >> salary;
    cout << "NUMBER = " << number << endl;
    printf("SALARY = U$ %.2lf\n",salary*hour);
    return 0;
}
