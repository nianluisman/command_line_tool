//
// Created by nianl on 3-11-2021.
//

#include "text_argument_parser.h"
#include "text_argument.h"
std::unique_ptr<argument::iArgument> argument_parser::text_argument_parser::parse(std::string id, const char *arg) const {
    if (arg != nullptr) { return std::make_unique<argument::text_argument>(std::move(id), arg); }
    else { return nullptr;}
}
