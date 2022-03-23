//
// Created by nianl on 20-10-2021.
//

#include "text_argument.h"

#include <utility>

argument::text_argument::text_argument(std::string string_id, std::string value): iArgument(std::move(string_id)), m_string_value{std::move(value)} {}

std::string argument::text_argument::text_value() {
    return m_string_value;
}
