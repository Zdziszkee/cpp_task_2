#include <iostream>

int main() {
    char string1[100] = {0};
    std::cin >> string1;
    char string2[100] = {0};
    std::cin >> string2;
    for (int i = 0; i < 100; ++i) {
        char first = string1[i];
        std::cout << first << std::endl;
        char second = string2[i];
        std::cout << second << std::endl;
        int result = strncasecmp(&first, &second, 1);
        std::cout << result << std::endl;
        if (result != 0) {
            std::cout << "Strings are not equal";
            return 0;
        }
    }
    std::cout << "Strings are  equal";
    return 0;
}
