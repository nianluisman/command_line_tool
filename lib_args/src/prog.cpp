//
// Created by nianl on 11-11-2021.
//

#include <dbl_argument.h>
#include <iostream>
#include "prog.h"
#include "int_argument.h"
#include "text_argument.h"


void program::prog::run(std::vector<std::unique_ptr<argument::iArgument>> &argument) {

    for (const auto& arg: argument){
        // args is of type std::unique_ptr<argument>

        // obtain the raw pointer from the unique pointer
        argument::iArgument* raw_arg = arg.get();

        // use dynamic casting to convert to correct pointer type
        if (auto* int_arg = dynamic_cast<argument::int_argument*>(raw_arg)) {
            std::cout << int_arg->id() << ": " << int_arg->value() << '\n';
        }
        else if (auto* dbl_arg = dynamic_cast<argument::dbl_argument*>(raw_arg)){
            std::cout << dbl_arg->id() << ": " << dbl_arg->dbl_value() << '\n';
        }
        else if(auto* text_arg = dynamic_cast<argument::text_argument*>(raw_arg)){
            std::cout << text_arg->id() << ": " << text_arg->text_value() << '\n';
        }
        else{
            std::cout << "Argument of unknown type for id: " << arg->id() << '\n';
        }
    }
}
