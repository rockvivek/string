#include <iostream>
#include<string>
using namespace std;

int isAnagram(string str1,int length1,string str2,int length2){
    char arr[256]={0};
    if(length1!=length2){
        return 0;
    }
    for(int i=0;i<length1;i++){
        arr[str1[i]]++;
        arr[str2[i]]--;
    }
    for(int i=0;i<256;i++){
        if(arr[i]==1)
            return 0;
    }
    return 1;
}

int main()
{
    //it is a c++ program to check weather the given string is anagram or not....
    string str1 = "vivek";
    int len1 = str1.size();
    string str2 = "kesvi";
    int len2 = str2.size();
    if(isAnagram(str1,len1,str2,len2)){
        cout<<"yes string is anagram"<<endl;
    }
    else{
        cout<<"No string is not anagram"<<endl;
    }
    return 0;
}
