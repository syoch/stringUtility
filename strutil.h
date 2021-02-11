#pragma once
#ifndef ASSMEMBLER_H
#define ASSMEMBLER_H

#include <string>

namespace util
{
    int _toInt(std::wstring _text);
    std::string wstr2str(std::wstring str);
    std::wstring str2wstr(std::string str);
} // namespace util

#endif