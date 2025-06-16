#include<bits/stdc++.h>

using namespace std;

void printDivisorsOptimal(int n){
    int count=0;
   for (int i =1; i <=n;  i++)
   {
    if(n%i==0){
        count++;

    }

   }
   if (count==2)cout<<"the number is prime";
else cout<<"the no. is not";
}



int main(){

        return 0;
}

