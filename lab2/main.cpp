#include <iostream>
#include <cmath>
using namespace std;
long double fact(int a){
    if (a==0 or a==1) {
        return 1;
    }
    
    return a*fact(a-2);
        
}
long double t(long double x){
    long double sum1=0, sum2=0;
    
    for (int k=0;k<=10;k++){
        sum1+=pow(x,2*k+1)/fact(2*k+1);
    }
    for (int j=0;j<=10;j++){
        sum2+=pow(x,2*j)/fact(2*j);
    }
    return sum1/sum2;
}
int main() {
    long double y;
    cin >> y;
    long double result = (7*t(0.25)+2*t(1+y))/(6-t(y*y-1));
    cout << result << endl;
    return 0;
}
