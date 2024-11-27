class Solution {
public:
    int strStr(string haystack, string needle) {

        int start = -1, j = 0;
        int needleEnd = needle.size();
        
        for(int i = 0; i < haystack.size(); i++){
            
            if(start == -1 && haystack[i] == needle[0]){
                start = i;
                j++;
            }
            else if(start != -1 && j < needleEnd && haystack[i] == needle[j])
                j++;
                
            else if(start != -1 && haystack[i] != needle[j]){
                i = start;
                j = 0;
                start = -1;
            }
            if(j == needleEnd)
                return start;
        }

        return -1;
    }
};