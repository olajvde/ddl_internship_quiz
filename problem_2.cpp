#include <bits/stdc++.h>
#include <stdio.h>

using namespace std;

// Complete the staircase function below.
void staircase(int n) {
    int x, y;
    cout << "Enter number of rows: ";
    cin  >> n;
    
    for(x=0; x<=n; ++x){
        for(y=x; y<=n; ++y){
            cout << " ";   
        }
        for(y=1; y<=x; ++y){
            cout << "#";
        }
        
        cout << "\n";
            
        
    }
        cout<<endl;
}

int main()
{
    int n;
    cin >> n;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');

    staircase(n);

    return 0;
}
