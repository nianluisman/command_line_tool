//
// Created by nianl on 20-10-2021.
//

#include "dbl_argument.h"

argument::dbl_argument::dbl_argument(std::string string_id, double value): iArgument(string_id), m_dbl_value{value} {}

double argument::dbl_argument::dbl_value() {
    return m_dbl_value;
}
