#include<iostream>
using namespace std;

int main()
{
    float price;
    cout << "Enter price of 1 product: ";
    cin >> price;
    int n;
    cout << "Enter number of products bought: ";
    cin >> n;
    float discount;
    if(n<=1000)
        discount=0;
    else if(n>1000 && n<=5000)
        discount=(n*price)*5/100;
    else if(n>5000)
        discount=(n*price)*10/100;
    cout << "The final cost of the order equals: " << (n*price)-discount;
}