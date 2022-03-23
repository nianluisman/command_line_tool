//
// Created by nianl on 3-11-2021.
//

#include <charconv>
#include <dbl_argument.h>
#include "dbl_argument_parser.h"

std::unique_ptr<argument::iArgument> argument_parser::dbl_argument_parser::parse(std::string id, const char *arg) const {
    double n;
    std::string_view sv{arg};
    auto [ptr, ec] = std::from_chars(sv.data(), sv.data() + sv.size(), n);
    if(ec == std::errc()){
        return std::make_unique<argument::dbl_argument>(std::move(id), n);
    }else
        return nullptr;
}
