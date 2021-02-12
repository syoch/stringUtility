#pragma once
#ifndef ASSMEMBLER_H
#define ASSMEMBLER_H

#include <string>

namespace util
{
    template <typename T>
    bool inRange(T min, T val, T max)
    {
        return min <= val && val <= max;
    }

    template <typename T>
    bool isDec(T val)
    {
        return inRange<T>('0', val, '9');
    }

    template <typename T>
    bool isHex(T val)
    {
        return isDec(val) || inRange<T>('a', val, 'f');
    }

    int _toInt(std::wstring _text);
    std::string wstr2str(std::wstring str);
    std::wstring str2wstr(std::string str);
} // namespace util

#endif