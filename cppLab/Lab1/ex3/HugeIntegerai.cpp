#include "HugeInteger.h"
#include <iostream>
#include <cstring>
#include <cctype>

using namespace std;

// Helper: set all digits to zero
static void clearDigits(int a[40]) {
    for (int i = 0; i < 40; ++i) a[i] = 0;
}

HugeInteger::HugeInteger(int value) {
    clearDigits(integer);
    if (value < 0) value = 0; // do not handle negatives per spec
    int idx = 39;
    if (value == 0) {
        // already zeros
        return;
    }
    while (value > 0 && idx >= 0) {
        integer[idx] = value % 10;
        value /= 10;
        --idx;
    }
}

HugeInteger::HugeInteger(const char* s) {
    input(s);
}

HugeInteger HugeInteger::add(const HugeInteger& op2) {
    HugeInteger result;
    clearDigits(result.integer);
    int carry = 0;
    for (int i = 39; i >= 0; --i) {
        int sum = integer[i] + op2.integer[i] + carry;
        result.integer[i] = sum % 10;
        carry = sum / 10;
    }
    // per spec, assume no overflow
    return result;
}

HugeInteger HugeInteger::add(int value) {
    HugeInteger temp(value);
    return add(temp);
}

HugeInteger HugeInteger::add(const char* s) {
    HugeInteger temp(s);
    return add(temp);
}

HugeInteger HugeInteger::subtract(const HugeInteger& op2) {
    HugeInteger result;
    clearDigits(result.integer);
    int borrow = 0;
    for (int i = 39; i >= 0; --i) {
        int diff = integer[i] - op2.integer[i] - borrow;
        if (diff < 0) {
            diff += 10;
            borrow = 1;
        } else {
            borrow = 0;
        }
        result.integer[i] = diff;
    }
    // per spec, assume *this >= op2 so no negative result
    return result;
}

HugeInteger HugeInteger::subtract(int value) {
    HugeInteger temp(value);
    return subtract(temp);
}

HugeInteger HugeInteger::subtract(const char* s) {
    HugeInteger temp(s);
    return subtract(temp);
}

bool HugeInteger::isEqualTo(HugeInteger& op2) {
    for (int i = 0; i < 40; ++i)
        if (integer[i] != op2.integer[i]) return false;
    return true;
}

bool HugeInteger::isNotEqualTo(HugeInteger& op2) {
    return !isEqualTo(op2);
}

bool HugeInteger::isGreaterThan(HugeInteger& op2) {
    for (int i = 0; i < 40; ++i) {
        if (integer[i] > op2.integer[i]) return true;
        if (integer[i] < op2.integer[i]) return false;
    }
    return false; // equal
}

bool HugeInteger::isLessThan(HugeInteger& op2) {
    for (int i = 0; i < 40; ++i) {
        if (integer[i] < op2.integer[i]) return true;
        if (integer[i] > op2.integer[i]) return false;
    }
    return false; // equal
}

bool HugeInteger::isGreaterThanOrEqualTo(HugeInteger& op2) {
    return isGreaterThan(op2) || isEqualTo(op2);
}

bool HugeInteger::isLessThanOrEqualTo(HugeInteger& op2) {
    return isLessThan(op2) || isEqualTo(op2);
}

bool HugeInteger::isZero() {
    for (int i = 0; i < 40; ++i)
        if (integer[i] != 0) return false;
    return true;
}

void HugeInteger::input(const char* s) {
    clearDigits(integer);
    if (s == nullptr) return;
    // skip leading spaces
    const char* p = s;
    while (isspace((unsigned char)*p)) ++p;
    // skip optional '+' sign
    if (*p == '+') ++p;
    // find end of string
    const char* q = p;
    while (*q != '\0') ++q;
    const char* r = q - 1;
    int destIndex = 39;
    while (r >= p && destIndex >= 0) {
        if (isdigit((unsigned char)*r)) {
            integer[destIndex] = *r - '0';
            --destIndex;
        }
        --r;
    }
    // if number had more than 40 digits, leading extra digits are ignored
}

void HugeInteger::output() {
    // print without leading zeros
    int i = 0;
    while (i < 40 && integer[i] == 0) ++i;
    if (i == 40) {
        cout << '0';
        return;
    }
    for (; i < 40; ++i) cout << integer[i];
}


