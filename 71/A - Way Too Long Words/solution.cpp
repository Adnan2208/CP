#include <iostream>
using namespace std;
 
int main() {
    int n;
    cin >> n;
 
    for(int i = 0; i < n; i++){
        string s = "";
        string ans = "";
 
        cin >> s;
 
        if(s.size() > 10){
            ans += s[0];
            ans += to_string(s.size() - 2);
            ans += s[s.size() - 1];
        } else {
            ans = s;
        }
 
        cout << ans << "
";
    }
 
    return 0;
}