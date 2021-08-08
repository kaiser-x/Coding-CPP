
#include <bits/stdc++.h>
using namespace std;

    struct meeting{
        int start;
        int end;
        int pos;
    };
    bool comparator(struct meeting m1,struct meeting m2){
        if(m1.end<m2.end) return true;
        else if(m1.end>m2.end) return false;
        else if(m1.pos<m2.pos) return true;
        return false;
    }
    int maxMeetings(int start[], int end[], int n)
    {
        struct meeting meet[n];
        for(int i=0;i<n;i++){
            meet[i].start=start[i],
            meet[i].end=end[i],
            meet[i].pos=i+1;
        }
        sort(meet,meet+n,comparator);
        vector<int> res;
        int count=1;
        int limit=meet[0].end;
        for(int i=1;i<n;i++){
            if(meet[i].start>=limit){
                limit=meet[i].end;
                // res.push_back(meet[i].end);
                count++;
            }
        }
        // for(int i=0;i<res.size();i++)
        //     cout<<res[i]<<" ";
        return count;
    }


int main() {
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int start[n], end[n];
        for (int i = 0; i < n; i++) cin >> start[i];

        for (int i = 0; i < n; i++) cin >> end[i];

        int ans = maxMeetings(start, end, n);
        cout << ans << endl;
    }
    return 0;
} 