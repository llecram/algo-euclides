#include <iostream>
#include <cmath>
using namespace std;
void gcd(int a,int b){
    int x=a;
    int y=b;
    while(y!=0){
        int r=x%y;
        x=y;
        y=r;
        cout<<x<<" "<<y<<" "<<r<<" "<<endl;
    }
}
void gcd2(int a, int b){
    int r=a%b;
    int d=b;
    while(r>0){
        int c=d;
        int d=r;
        r=c%d;
        cout<<c<<" "<<d<<" "<<r<<" "<<endl;
    }
    cout<<endl;
}
void gcd3(int a, int b){
    int c=a;
    int d=b;
    while(d!=0){
        int r=abs(c%d);
        c=d;
        d=r;
        cout<<c<<" "<<d<<" "<<r<<" "<<endl;
    }
    cout<<endl;
}
void gcd4(int a, int b){
    int d,x,y,q,r;
    d=0;
    x=a;
    y=b;
    q=0;
    r=0;
    if(b==0){
        d=a;
        x=1;
        y=0;
    }
    int x1,x2,y1,y2;
    x2=1;
    x1=0;
    y2=0;
    y1=1;
    cout<<endl<<x<<" "<<y<<" "<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<" "<<r<<" "<<q<<endl;
    while(b>0){
        q=abs(a/b);
        r=a-(q*b);
        x=x2-(q*x1);
        y=y2-(q*y1);
        a=b;
        b=r;
        x2=x1;
        x1=x;
        y2=y1;
        y1=y;
        cout<<x<<" "<<y<<" "<<x1<<" "<<x2<<" "<<y1<<" "<<y2<<" "<<r<<" "<<q<<endl;
    }
    d=a;
    x=x2;
    y=y2;
    cout<<x<<endl<<y<<endl<<d;
}
int main(){
    gcd(4278,8602);
    gcd2(4278,8602);
    gcd3(4278,8602);
    gcd4(8602,4278);
}
