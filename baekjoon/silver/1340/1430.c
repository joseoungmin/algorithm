#include<stdio.h>
#include<string.h>
#include<stdlib.h>

char*   pointing_day(char **str)
{
    char    *ptr = *str;

    while (**str != '\0' && **str != ' ' && **str != ',' && **str != ':')
        (*str)++;
    if (**str != '\0')
        *(*str)++ = '\0';
    return (ptr);
}

void print_persent(char *str)
{
    const char  month[12][9] = {"January", "February", "March", "April", "May", "June", "July", "August", "September", "October", "November", "December"};
    const int   m_arr[12] = {0, 44640, 84960, 129600, 172800, 217440, 260640, 305280, 349920, 393120, 437760, 480960};
    char*       ptr = pointing_day(&str);
    int         m_idx;
    long double total = 0;
    int         result = 525600;

    m_idx = 0;
    while (m_idx < 12)
        if (!strcmp(ptr, month[m_idx++]))
            break;
    total += m_arr[m_idx - 1];
    ptr = pointing_day(&str);
    total += (atoi(ptr) - 1) * 1440;
    str++;
    ptr = pointing_day(&str);
    if (atoi(ptr) % 4 == 0 && (atoi(ptr) % 100 != 0 || atoi(ptr) % 400 == 0))
    {
        result += 1440;
        if (m_idx > 2)
            total += 1440;
    }
    ptr = pointing_day(&str);
    total += atoi(ptr) * 60;
    ptr = pointing_day(&str);
    total += atoi(ptr);
    printf("%.15Lf\n", total / result * 100);
}

int main(void)
{
    char        str[25];

    scanf("%[^\n]", str);
    print_persent(str);
    return (0);
}