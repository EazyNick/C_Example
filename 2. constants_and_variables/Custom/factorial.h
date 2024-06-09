#define ONE 1

int factorial(int n)
{
    if(n > ONE)
        return(n*factorial(n-1));
    else
        return(ONE);
}