int main()
#define N 100000
{
    int n = 0;
    srand(time(NULL)); rand();
    for (int i = 0; i < N; i++)
    {
        float x = rand() * 2.0 / RAND_MAX+ 1.0;
        float y = rand() * 28.0 / RAND_MAX;
        if (y<= 3*x*x +1.0)n++;
    }
    std::cout << n * 56.0 / N << "\n";
}