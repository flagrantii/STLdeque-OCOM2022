#include <bits/stdc++.h>
using namespace std;

void show(deque<int> dq) {
    deque<int> :: iterator t;
    for (t=dq.begin();t!=dq.end();t++) {
        cout<<*t<<" ";
    }
}

int main() {
    int n,m,x;
    string cmd;
    cin>>n;
    while(n--) {
        deque<int> dq;
        cin>>m;
        while(m--) {
            cin>>cmd;
            if(cmd=="1"){
                cin>>x;
                dq.push_front(x);
                show(dq);
            }
            if(cmd=="2"){
                cin>>x;
                dq.push_back(x);
                show(dq);
            }
            if(cmd=="3"){
                dq.pop_front();
                show(dq);
            }
            if(cmd=="4"){
                dq.pop_back();
                show(dq);
            }
            if(cmd=="5"){
                sort(dq.begin(),dq.end());
                show(dq);
            }
            if(cmd=="6"){
                reverse(dq.begin(), dq.end());
                show(dq);
            }
            if(cmd=="7"){
                show(dq);
            }
            if(cmd=="8"){
                cout<<dq.size()<<" ";
            }
            if(cmd=="9"){
                cout<<dq.front()<<" ";
            }
            if(cmd=="10"){
                cout<<dq.back()<<" ";
            }
            if(dq.empty()){
                cout<<-1<<" ";
            }
        }
    }
}
