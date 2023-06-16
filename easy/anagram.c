/*Given two strings s and t, return true if t is an anagram of s, and false otherwise.

An Anagram is a word or phrase formed by rearranging the letters of a different word or phrase, typically using all the original letters exactly once.

Example 1:

Input: s = "anagram", t = "nagaram"
Output: true

Example 2:

Input: s = "rat", t = "car"
Output: false
 
Constraints:

1 <= s.length, t.length <= 5 * 10^4
s and t consist of lowercase English letters.*/


#include <string.h>
bool isAnagram(char * s, char * t){
    /*int i,j,n1,n2;
    n1=strlen(s);
    n2=strlen(t);
    char temp;
    for(i=0;i<n1-1;i++){
        for(j=i+1;j<n1;j++){
            if(s[i]>s[j]){
                temp=s[i];
                s[i]=s[j];
                s[j]=temp;
            }
        }
    }
    for(i=0;i<n2-1;i++){
        for(j=i+1;j<n2;j++){
            if(t[i]>t[j]){
                temp=t[i];
                t[i]=t[j];
                t[j]=temp;
            }
        }
    }
    if (strcmp(s,t)==0){
        return true;
    }
    else{
        return false;
    }*/
    int ar1[26];
    int ar2[26];
    int i,j,n1,n2;
    for(i=0;i<26;i++){
        ar1[i]=0;
        ar2[i]=0;
    }
    n1=strlen(s);
    n2=strlen(t);
    int x=0;
    
    for(i=0;i<n1;i++){
        x=s[i]-97;
        ar1[x]+=1;
    }
    for(j=0;j<n2;j++){
        x=t[j]-97;
        ar2[x]+=1;
    }
    if (n1!=n2){
        return false;
    }
    else{
        int flag=1;
        for(i=0;i<26;i++){
            if (ar1[i]!=ar2[i]){
                flag=0;
                break;   
            }

        }
        if (flag==1){
            return true;
        }
        else{
            return false;
        }
    }
    return 0;
}
