#include <iostream>
#include <cstdio>
#include <cmath>
#include <ctype.h>
#include <cstdlib>

using namespace std;

int main()
{
    char* name;
    name = (char*) malloc(sizeof(char)*512);
    cin >> name;
    double fixed_salary, value_sold;
    cin >> fixed_salary >> value_sold;
    printf("TOTAL = R$ %.2lf\n", fixed_salary+(value_sold*0.15));
    return 0;
}
