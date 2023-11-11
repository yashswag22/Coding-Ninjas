Freqsequence


string findFreqsequence(string s) {
    string ans ="";
    map <char,int>mpp;
    for(int i=0;i<s.size();i++)
    mpp[s[i]]++;
    
    int maxfreq = INT_MIN;

    for(auto it:mpp)
    {
        maxfreq = max(it.second,maxfreq);
    }

    for(int i=0;i<s.size();i++)
    {
        if(mpp[s[i]]== maxfreq)
        ans+=s[i];
    }
    return ans;

}
