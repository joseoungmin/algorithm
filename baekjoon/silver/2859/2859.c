#include <stdio.h>

const char* weekday[7] = { "Saturday", "Sunday", "Monday", "Tuesday", "Wednesday", "Thursday", "Friday" };

int main(void) {
    int h, m, as, bs, at, bt;
    scanf("%d:%d", &h, &m);
    as = h * 60 + m;
    scanf("%d:%d", &h, &m);
    bs = h * 60 + m;
    scanf("%d:%d", &h, &m);
    at = h * 60 + m;
    scanf("%d:%d", &h, &m);
    bt = h * 60 + m;
    for (int i = 0; i < 103000; i++) {
        if (as < bs)
			as += at;
        else if (as > bs)
			bs += bt;
        else
			break;
    }

    if (as != bs)
		printf("Never");
    else
		printf("%s\n%02d:%02d", weekday[as / 1440 % 7], as / 60 % 24, as % 60);

    return 0;
}
