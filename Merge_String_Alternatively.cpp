#include<bits/stdc++.h>
using namespace std;

string mergeAlternately(string word1, string word2){
 string merged;
 int i=0, j=0;
    while (i < word1.length() && j < word2.length()) {
        merged = merged + word1[i];
        merged = merged + word2[j];
        i++;
        j++;
    }
    while(i < word1.length()) {
        merged = merged + word1[i];
        i++;
    }
    while(j < word2.length()){
         merged = merged + word2[j];
         j++;
    }
    return merged;
}
int main(){
    string word1, word2;
    cout<< "Enter first string: ";
    cin >>  word1; 
    cout<< "Enter string string: ";
    cin >>  word2;
    string result = mergeAlternately(word1, word2);
    cout << "Merged string: " << result << endl;
    return 0;


}