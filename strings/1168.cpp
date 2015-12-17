#include <iostream>
#include <algorithm>
#include <cstdio>
#include <string>
 
using namespace std;
int led(char c){
    if (c == '1') return 2;
    if (c == '2' || c == '5' || c == '3' ) return 5;
    if (c == '4') return 4;
    if (c == '6' || c == '9' || c == '0') return 6;
    if (c == '7') return 3;
    if (c == '8') return 7;
}
void printled(string num){
    int sum=0;
    int i=0;
    while(num[i]!='\0')
        sum+=led(num[i++]);
    printf("%d leds\n",sum);
}
int main(){
    int nums;
    cin >> nums;
    while(nums--){
        string num;
        cin >> num;
        printled(num);
    }
 
    return 0;
}
