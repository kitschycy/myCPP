#include <iostream>

string maxPublicString(string & s1, string & s2){
    string ans;
    for(int i = 0; i < s1.size(); ++i){
        string tmp;
        int rec = i;
        for(int j = 0; j < s2.size(); ++j){
            while(s1[i] == s2[j]){
                ++i;
                ++j;
                tmp = tmp + s1[i];
            }
        }
        ans = tmp.size()>ans.size() ? tmp : ans;
        i = rec;
    }

    return ans;
}
