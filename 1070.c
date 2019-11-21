int main() {
    int X,i,d;
    scanf("%d", &X);
    d=X%2;
    if(d==0)
    {
    X++;
    for ( i = 1; i <=6; i++)
        {
        printf("%d\n", X);
        X+=2;
        }
}
else
    {
    for ( i = 1; i <=6; i++)
        {
        printf("%d\n", X);
        X+=2;
        }
}
}
