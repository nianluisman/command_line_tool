//
// Created by nianl on 19-10-2021.
//

#include "iArgument.h"

#include <utility>

argument::iArgument::iArgument(std::string string_id): m_id{std::move(string_id)} {}

const std::string argument::iArgument::id() {
    return m_id;
}
