
#include<bits/stdc++.h>
using namespace std;

// GALAT HAI

bool checkArmstrong(int n){
	//Write your code here
	int sum=0;
	int d=int (log10 (n)+ 1);
	int k=n;
	int m;
   while(n!=0){
	   m=n%10;
	   sum=sum+pow(m,d);
	   n=n/10;
   }
   if (sum==k) return true;
   else return false;
}

int main(){
int n;
cin>>n;

cout<< checkArmstrong(n);

    return 0;

}
//      SECOND SOLUTION

#include <bits/stdc++.h>
using namespace std;
bool ArmstrongNumber(int n)
{
    int originalno = n;
    //cout<<originalno<<endl;
    int count = 0;
    int temp = n;
    while (temp != 0)
    {
        count++;
        temp = temp / 10;
        
    }
    double sumofpower = 0;
    while (n)
    {
        int digit = n % 10;
        cout<<"digit: "<<digit<<endl;
        sumofpower = sumofpower + pow(digit,count);
        n = n/10;
        cout<<"n: "<<n<<endl;
        cout<<sumofpower<<endl;
    }
    //cout<<sumofpower<<endl;
    if(sumofpower == originalno)
            return true;
    else
            return false;        
}
int main()
{
    int n1 ;
    cin>>n1;
    
    if (ArmstrongNumber(n1))
    {
        cout << "Yes, it is an Armstrong Number\n";
    }
    else
    {
        cout << "No, it is not an Armstrong Number\n";
    }
    return 0;
}
