#include <stdio.h>

int main() {
    int total, days, remainder, hours, minutes, seconds;
    scanf("%d", &total);

    days = total / 86400;
    remainder = total % 86400;
    hours = remainder / 3600;
    minutes = (remainder % 3600) / 60;
    seconds = remainder % 60;

    if (days > 0) {
        printf("%d hari %02d:%02d:%02d\n", days, hours, minutes, seconds);
    } else {
        printf("%02d:%02d:%02d\n", hours, minutes, seconds);
    }
    return 0;
}