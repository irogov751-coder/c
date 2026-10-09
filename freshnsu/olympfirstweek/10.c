#include <stdio.h>

int main() {
    // Открываем файлы в соответствии с условием задачи
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);

    long long n;
    if (scanf("%lld", &n) != 1) {
        return 0;
    }

    long long answer = 0;

    // Цикл по наименьшей стороне A (A <= root_3(N))
    for (long long a = 1; a * a * a <= n; a++) {
        
        // Цикл по средней стороне B (B >= A и A * B * B <= N)
        for (long long b = a; a * b * b <= n; b++) {
            
            // Максимально возможное значение для стороны C
            long long max_c = n / (a * b);
            
            // Так как C >= B, добавляем количество подходящих вариантов
            if (max_c >= b) {
                answer += (max_c - b + 1);
            }
        }
    }

    // Выводим результат через %lld, как указано в замечании к задаче
    printf("%lld\n", answer);

    return 0;
}