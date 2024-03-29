double myPow(double x, int n){
    double result = 1;

    if(x == 1.0) 
        return x;
    else if(x == -1.0)
        return (n%2 ? -1.0 : 1.0);
    else if(n == -2147483648)
        return(0);
    else if(n < 0)
    {
        x = 1/x;
        n = -n;
    }
    for(int i = 0; i < n && result*x != result ; i++)
        result *= x;
    return(result);
}