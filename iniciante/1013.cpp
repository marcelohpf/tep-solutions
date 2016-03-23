#include <iostream>
#include <cstdio>
#include <cmath>

using namespace std;

unsigned int MaiorAB(unsigned int, unsigned int);

int main()
{
    unsigned int a, b, c;
    cin >> a >> b >> c;

    unsigned int greatest = 0;
    greatest = MaiorAB(a, MaiorAB(b,c));

    cout << greatest << " eh o maior" << endl;
    
    return 0;
}

unsigned int MaiorAB(unsigned int a, unsigned int b)
{
    unsigned int maior = 0;
    a > b ? maior = a: maior = b;
    return maior;
}
