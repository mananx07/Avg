#include<bits/stdc++.h>
using namespace std;
int main()
{
    vector<int> v;
    cout << "enter -1 to exit input" << endl;
    while(1){
        int n;
        cin >> n;
        if(n == -1) break;
        v.push_back(n);
    }

    if(v.size() == 0){
        cout << "empty array " <<endl;
    }
    else {
        int sum = 0;
        for(int i=0; i<v.size(); i++) {
            sum += v[i];
        }

        cout << "Avg of input numbers is: " <<sum/v.size() <<endl;

    }


    return 0;
}
