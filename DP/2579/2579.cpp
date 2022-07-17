#include <iostream>
#include <algorithm>
using namespace std;

int stairs[301];
int oneStep = 0;
int main(){
    int N;
    cin >> N;
    stairs[0] = 0;
    for (int i = 1; i <= N; i++){
        cin >> stairs[i];
    }
}