#include <sstream>
#include <int_argument.h>
#include <iostream>
#include <int_argument_parser.h>
#include "prog.h"
#include "option_parser.h"
#include "option_builder.h"

int main(int argc, char *argv[]) {
    auto builder = builder::default_builder()
            .with_int_option("-i", "--info", "some info")
            .with_dbl_option("-n", "--nian", "dit is nian")
            .with_text_option("-k", "--kip", "tok tok")
            .get();

    auto argument =  builder->parse(argv,argc);

    auto program = new program::prog();
        program->run(argument);

    return  0;
}