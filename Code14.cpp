int fibonacciNumber(int n){
    // Write your code here.
  int a=1;
    int b=1;
    int c=0;
    int mod = (int) 1e9 + 7;
    if(n==1 || n==2)
    {
        return 1;
    }
    else
    {
        for(int i=3; i<=n; i++)
    {
            c = (a+b) % mod;
            a=b;
            b=c;
    }
        return c;
    }
}
