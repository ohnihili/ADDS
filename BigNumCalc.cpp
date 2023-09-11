#include "BigNumCalc.h"

bigNumCalc::bigNumCalc(){};
bigNumCalc::~bigNumCalc(){};

std::list<int> bigNumCalc::buildBigNum(std::string numString)
{
    std::list<int> num;
    for (char digit : numString) {
        if (isdigit(digit)) {
            num.push_back(digit - '0');
        }
    }
    return num;
}
std::list<int> bigNumCalc::add(std::list<int> num1, std::list<int> num2)
{
    std::list<int> result;
        int carry = 0;

        while (!num1.empty() || !num2.empty() || carry) {
            int sum = carry;
            if (!num1.empty()) {
                sum += num1.back();
                num1.pop_back();
            }
            if (!num2.empty()) {
                sum += num2.back();
                num2.pop_back();
            }
            carry = sum / 10;
            result.push_front(sum % 10);
        }

        return result;
}

std::list<int> bigNumCalc::sub(std::list<int> num1, std::list<int> num2)
{
    return num1;
}

std::list<int> bigNumCalc::mul(std::list<int> num1, std::list<int> num2)
{
    return num1;
}