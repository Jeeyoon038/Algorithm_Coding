int solution(int num) {
    long long result = num;  // 오버플로우 방지
    int cnt = 0;

    while (result != 1) {
        if (result % 2 == 0) {
            result = result / 2;
        } else {
            result = result * 3 + 1;
        }
        cnt++;
        if (cnt >= 500)
            return -1;
    }

    return cnt;
}
