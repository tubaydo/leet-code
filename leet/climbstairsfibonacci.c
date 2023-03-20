int climbStairs(int n){
    int a = 1;
    int b = 2;

    if(n <= 2)
        return(n);
	for(int i = 3; i <= n; i++)
	{
        int sum = a + b;
        a = b;
        b = sum;
    }
    return(b);
}