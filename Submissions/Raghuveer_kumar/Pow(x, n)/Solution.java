class Solution {
    public double myPow(double x, int n) {
        if( n==0) return 1.0;
        if(x==1 || x==-1 && n%2==0) return 1.0;
        if(x==0) return 0;
        if(x==-1 && n%2!=0) return -1;
        double ans=1;
        long bin=n;
        if(n<0)
        {
            x=1/x;
            bin=-bin;
        }
        
        while(bin>0)
        {
            if(bin%2==1)
            {
                ans*=x;
            }
            x*=x;
            bin/=2;
        }
        return ans;
    }
}