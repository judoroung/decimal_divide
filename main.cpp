#include<iostream>

using namespace std;

int main(){
    int x,y;
    unsigned long long int repe;
    cin >> x >> y >> repe;
    cout << x/y << '.';
    x = x%y;
    for(unsigned long long int i=0;i<repe;i++){
        if(x<y)x*=10;
        cout << x/y;
        x = x%y;
        if(x%y==0)break;
    }
}