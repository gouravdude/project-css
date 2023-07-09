// #include <iostream>
// #include <string>
// using namespace std;

// int main() {
//     string a ="abcd";
//     string b ="ef";
//     string sum=a+b;
//     int a =4;
//     int b=2;

//     cout<<sum;
//     return 0;
// }

// are of circle 

#include<iostream>
using namespace std;
int main()
{int a,b;
char ch;
cin>>a,cin>>b;
cin>>ch;

if (ch=='+')
{
    /* code */cout<<a+b;
}
else if (ch=='-')
{
    /* code */cout<<a-b;
}

else if (ch=='*')
{
    /* code */cout<<a*b;
}
else if (ch=='/')
{
    /* code */cout<<a/b;
}

else if (ch=='%')
{
    /* code */cout<<a%b;
}
else
{
    /* code */cout<<"wrong";
}

}