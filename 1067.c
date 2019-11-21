int main() {
    int X,i;
    scanf("%d", &X);
    printf("1\n");
    for ( i = 1; i < X-1; i+=2) {
       int oddNumber = i + 2;
        printf("%d\n", oddNumber);
    }
}
