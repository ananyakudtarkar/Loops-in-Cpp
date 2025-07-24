// Floyd's series
#include <iostream>
using namespace std;

int main() {
    int i,j;
    int k=1;
    int n=4;
    for(i=1;i<=n;i++){
        for(j=1;j<=i;j++){
            cout<<k<<" ";
            k++;
        }
        cout<<endl;
    }
    return 0;
}

/*
OUPUT:
1 
2 3 
4 5 6 
7 8 9 10 
*/
