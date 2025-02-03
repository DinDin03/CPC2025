#include <iostream>
#include <numeric>
#include <vector>
#include <stack>
using namespace std;

int main() { 
    stack<pair<int,int>> stk;
    vector<pair<int,int>> res;
    int num;
    cin >> num;
    
    for(int i = 0; i < num; i++){
        int degree, mins;
        cin >> degree >> mins;
        res.push_back({degree, mins});
    }
    sort(res.begin(), res.end());
    int total = 0;
    
    for(int i = 0; i < num; i++){
        if(stk.empty() || abs(res[i].first - stk.top()) <= 5){
            stk.push(res[i].second);
        }
        else{
            while(!stk.emtpy()){
                total += stk.top();
                stk.pop();
            }
        }
    }
    
    cout << total << endl;
    
    return 0;
}
