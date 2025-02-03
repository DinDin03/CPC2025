#include <iostream>
#include <numeric>
#include <vector>
using namespace std;

int main() {
    int cheeseBalls;
    cin >> cheeseBalls;
    int h = 0;
    int balls = 0;
    while(true){
        int next = ((h+1)*(h+2))/2;
        if(balls + next <= cheeseBalls){
            balls += next;
            h++;
        }
        else{
            break;
        }
    }
    cout << h << endl;
    return 0;
}
