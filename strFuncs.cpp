#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>
#include "strFuncs.h"
using namespace std;


/* Precondition: Two valid strings s1 and s2, each containing a mix of alphabets, spaces and punctuations
 * Post condition: Return true if one string is an anagram of the other string. White spaces, punctuations and
 * the case for the letters (upper or lower) should not
 * affect your result. 
 */
bool isAnagram(string s1, string s2){
  int lengthS1 = s1.length();
  int lengthS2 = s2.length();
  string s3 = "";
  string s4 = "";
  for(int i = 0;i < lengthS1;i++){
    if(isalpha(s1[i])){
      s3 += tolower(s1[i]);  
    }
  }
  for(int j = 0;j < lengthS2;j++){
    if(isalpha(s2[j])){
      s4 += tolower(s2[j]);  
    }
  }
  sort(s3.begin(),s3.end());
  sort(s4.begin(),s4.end());
  if(s3 == s4){
    return true;
  }
  else{
    return false;
  }
}

/* Precondition: s1 is a valid string that may contain upper or lower case alphabets, no spaces or special characters
 * Postcondition: Returns true if s1 is a palindrome, false otherwise
 *You should provide a recursive solution*/
bool isPalindrome(const string s1){
  int lengthS1 = s1.length();
  string s2 = "";
  for(int i = 0;i < lengthS1;i++){
    if(isalpha(s1[i])){
      s2 += tolower(s1[i]);  
    }
  }
	if (s2 == string(s2.rbegin(), s2.rend())){
    return true;
	}
	else{
		return false;
	}
}


