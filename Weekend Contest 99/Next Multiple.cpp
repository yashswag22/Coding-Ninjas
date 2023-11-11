int nextMultiple(int n, int m) {

    int i = n+1;
    if(n<m){
        i = m;
    }
        if(i%m == 0)
        return i;
        else{
            while(i>=m)
            {
                if(i%m==0)
                return i;
                i++;
            }
        }
    
}
