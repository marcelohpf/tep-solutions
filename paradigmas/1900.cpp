#include <map>
#include <cstdio>
  
#define getcx getchar_unlocked
#define pc(x) putchar_unlocked(x)
 
using namespace std;
 
inline void inp( long long &n ){
    n=0;
    long long ch=getcx();long long sign=1;
    if(ch==-1){
        n=-1;
        return;
    }
      
    while( ch < '0' || ch > '9' ){if(ch=='-')sign=-1; ch=getcx();}
  
    while(  ch >= '0' && ch <= '9' )
        n = (n<<3)+(n<<1) + ch-'0', ch=getcx();
  
    n=n*sign;
}
 
inline void writeInt (long long n){
    long long N = n, rev, count = 0;
    rev = N;
    if (N == 0) { pc('0'); return ;}
    while ((rev % 10) == 0) { count++; rev /= 10;} //obtain the count of the number of 0s
    rev = 0;
    while (N != 0) { rev = (rev<<3) + (rev<<1) + N % 10; N /= 10;}  //store reverse of N in rev
    while (rev != 0) { pc(rev % 10 + '0'); rev /= 10;}
    while (count--) pc('0');
}
 
int main(){
    long long n, num, soma, count;
    map <long long, long long> m;
 
    m[0]=1;
 
    inp(n);
 
    soma=0;
    count=0;
    while(n--){
        inp(num);
        soma+=num;
 
        count+=m[soma]++;
    }
 
    writeInt(count);
    pc('\n');
 
    return 0;
}
