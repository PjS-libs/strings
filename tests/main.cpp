/*
 * Main for string primitives tests.
 *
 * This file is part of PjS Project.
 * All rights reserved , distributed under GPLv3+ ,
 * if not explicitly stated otherwise (see www.gnu.org for details).
 */


#include <iostream>
#include "../strings.h"
#include "tests.h"


using std::cout;
using std::endl;

const auto ERROR__UNHANDLED_EXCEPTION {"Caught unhandled exception:\n"};
const auto ERROR__UNKNOWN_EXCEPTION {"Caught unknown exception\n"};
const auto APP_NAME {"Passport"};


int protected_main(int argc, char *argv[]){
    
    cout << "Testing Authorization" << endl;
    
    return pjs::tests::test_strings();
}

//
int main(int argc, char** argv){
    try {
        return protected_main(argc, argv);}
    catch (const std::exception &e) {
        std::cerr << ERROR__UNHANDLED_EXCEPTION;
        std::cerr << " - what(): " << e.what() << '\n';}
    catch (...) {
        std::cerr << ERROR__UNKNOWN_EXCEPTION;}
    return EXIT_FAILURE;
}