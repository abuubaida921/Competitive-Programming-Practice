#include<bits/stdc++.h>
using namespace std;
// Function to calculate the greatest common divisor (gcd)
int gcd(int a, int b) {
    if (b == 0)
        return a;
    return gcd(b, a % b);
}
int maxPrefixLength(string a, string b) {
    unordered_map<char, int> charCount;
    
    // Count occurrences of characters in string a
    for(char c : a) {
        charCount[c]++;
    }
    
    int prefixLength = 0;
    // Check if each character in b exists in a
    for(char c : b) {
        if(charCount.find(c) != charCount.end() && charCount[c] > 0) {
            prefixLength++;
            charCount[c]--;
        } else {
            break;
        }
    }
    
    return prefixLength;
}

void run_case(){
	string s;
    cin >> s ;
    bool c1=false;
    bool c2=false;
    bool c3=false;
    if(s.length()>3){
        c1=true;
        for(int i=0;i<s.length();i++){
            char car=tolower(s[i]);
            cout << car << endl;
            /*if(car == '@' || car == '#' || car == '$'){
                c3=false;
            }else if(car == 'a' ||car == 'e' || car == 'i' || car == 'o' || car == 'u' ){
                c2=true;
            }else{
                c3=true;
            }*/
        }
    }
    /*if(c1 && c2 && c3){
        cout << true;
    }else{
        cout << false;
    }*/

}

int main(){
	int tests;

	cin >> tests;

    while(tests--)run_case();
    return 0;
}