//
// Created by nianl on 19-10-2021.
//

#include "iOption.h"

#include <utility>
#include "int_argument_parser.h"

#include <iostream>

//iOption::iOption(std::string short_flag, std::string long_flag, std::string desc, std::unique_ptr<iArgument_parser> type, int *range) : m_short{std::move(short_flag)}, m_desc{std::move(desc)}, m_long{std::move(long_flag)}, m_parser{std::move(type)} {}

const std::string option::iOption::long_flag() const {
    return m_long;
}

const std::string option::iOption::short_flag() {
    return m_short;
}

const std::string option::iOption::desc() {
    return m_desc;
}

std::string option::iOption::help() {
    return std::string();//find solution
}

bool option::iOption::can_parse( const char* arg) const {
    if((arg == m_long) || (arg == m_short)){
        return true;
    }else{
      return false;
    }
}

std::pair<char **, std::unique_ptr<argument::iArgument>> option::iOption::parse(char *args[], int nargs) const {
    if (nargs <= 0 ){
        // cannot parse, return pointer to the array we got and nullptr for `argument`
        return {args, nullptr};
    }

    // let's assume that we parsed two elements in `args` array (like in `program --level 42`)
    // the first element is `--level`, so we just skip it:
    ++args;
    // the second one is the integer number, after parsing it, we increment the index in `args` array again

    std::unique_ptr<argument::iArgument> parsed = m_parser->parse(m_long, *args);

    return {args, std::move(parsed)};
}

option::iOption::iOption(const std::string &short_flag, const std::string &long_flag, const std::string &desc,
                 std::unique_ptr<argument_parser::iArgument_parser> type, std::pair<int,int> range) :
                 m_short{short_flag},
                 m_desc{desc},
                 m_long{long_flag},
                 m_parser{std::move(type)},
                 m_range{range} {}

option::iOption::iOption(const std::string &short_flag, const std::string &long_flag, const std::string &desc,
                 std::unique_ptr<argument_parser::iArgument_parser> type) :
                 m_short{short_flag},
                 m_desc{desc},
                 m_long{long_flag},
                 m_parser{std::move(type)} {}


