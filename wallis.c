float wallis_pi(int n)
 {
    float s=1.0;
    for (int i=1; i<=n; i++)
    {
        s=s*(4*i*i)/((4*i*i)-1);
    }
   return (2*s); 
 }

