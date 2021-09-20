#include <iostream>
using namespace std;

int main(){
int i=1;
int j,n;
cin>>n;
while(i<=n){
    char ch = 'A'+n-i;
j=1;
while(j<=i){

cout << ch;
 ch++;
 j++;
}

cout<< endl;
i++;

}
}