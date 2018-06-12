#include <iostream>
int main(void)
{
    int a[5] = {1, 2, 3, 4, 5,};
    int b[] = {1, 2, 3, 4, 5,};

    size_t a_index = sizeof(a) / sizeof(a[0]);
    size_t b_index = sizeof(b) / sizeof(b[0]);

    size_t index = a_index > b_index ? b_index : a_index;

    for (size_t i = 0; i < index; ++i) {
        if (a[i] == b[i])
            continue;
        else {
            puts("Error");
            break;
        }
    }

    return 0;

}