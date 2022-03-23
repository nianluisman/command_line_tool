//
// Created by nianl on 20-10-2021.
//

#include "int_argument.h"


argument::int_argument::int_argument(std::string string_id, int value): iArgument(std::move(string_id)), m_int_value{value} {}

int argument::int_argument::value() const {
    return m_int_value;
}
