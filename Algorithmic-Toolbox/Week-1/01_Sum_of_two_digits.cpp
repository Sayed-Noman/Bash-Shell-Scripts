#include <iostream>

int sum_of_two_digits(int first_digit, int second_digit) {
    return first_digit + second_digit;
}

int main() {
    int first_digit = 0;
    int second_digit = 0;
    std::cin >> first_digit;
    std::cin >> second_digit;
    std::cout << sum_of_two_digits(first_digit, second_digit);
    return 0;
}