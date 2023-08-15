// Every step in a function adds to complexity
int main()
{
for (int i = 0; i < count; i++) // C1: i<count and i++
{
    if (/*condition*/) //C2
    {
        /* return code */ 
    }  //C3
    
}
}
    // therfore overall complexity is f(n)= nC1 + nC2 + C3

    // Dont use specific f(n)'s , use Upper Bound instead, (large n's, so that algorithm is scalable)

    // f(n) = O(g(n)) iff there is some c in R, and n0 in N, such that for all n >= n0: f(n) <= cg(n)
    // So if f(n) is <= cg(n) for all n after n0, then f(n) = O(n)

    //f(n) = n+2 , f(n) = O(n)?
    // for all n => n0 : n+2 <= cn
    // say c =2
    // n+2 <= 2n
    // 2 <= n
    // therfire c =2, n0 = 2

    // log are the slowest/ best for big O
    // exponential are the fastes growing/ worst for big O