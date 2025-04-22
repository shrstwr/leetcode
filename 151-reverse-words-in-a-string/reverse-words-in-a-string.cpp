class Solution { 
public:


    void reverseStr(string& s,int st,int en){
        int i=st;
        int e=en-1;
        while(i<e){
            swap(s[i++],s[e--]);
        }
    }
    string reverseWords(string s) {
        reverseStr(s,0,s.size());
        int prevB=0;
        if(s.size()==0 || s.size()==1){
            return s;
        }else{
            for(int i=0;i<s.size()+1;i++){
                if(s[i]==' '){
                    reverseStr(s,prevB,i);
                    prevB=i+1;
                }else if(s[i]=='\0'){
                    reverseStr(s,prevB,i);
                }
            }
            trimInPlace(s);
            return s;

        }
        
    }
    void trimInPlace(string& s) {
    int n = s.size();
    int idx = 0;
    int i = 0;
    while (i < n && s[i] == ' ') i++;

    while (i < n) {
        if (s[i] != ' ') {
            s[idx++] = s[i++];
        }
        else {
            s[idx++] = ' ';
            while (i < n && s[i] == ' ') i++;
        }
    }
    if (idx > 0 && s[idx - 1] == ' ') idx--;

    s.resize(idx);
}

    
};