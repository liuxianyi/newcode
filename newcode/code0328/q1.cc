#include<iostream>
#include<vector>
#include<algorithm>
#include<stack>
using namespace std;
int main() {
    int N;
    cin >> N;
    vector<vector<int>> v(N, vector<int>(2, 0));
    for (int i=0; i<N; i++) {
        cin >> v[i][0] >> v[i][1];
    }

    sort(v.begin(), v.end(), [](vector<int> a, vector<int> b){
        return a[0] > b[0];
    });

    // 筛选 按x轴，从大到小便利， 当前点位于前一个点的第二象限和第四象限区域内
    // vector<vector<int>> results;
    // results.push_back({v[0][0], v[0][1]});
    stack<vector<int>> s;
    s.push({v[0][0], v[0][1]});
    for (int i=1; i<v.size(); i++) {
        if (v[i][1] > s.top()[1]) {
            s.push(v[i]);
        }
    }
    while(s.size()) {
        vector<int> vv = s.top();
        s.pop();
        printf("%d %d\n", vv[0], vv[1]);
    } 
    return 0;
}