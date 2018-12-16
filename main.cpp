#define CATCH_CONFIG_MAIN

// found here:
// https://raw.githubusercontent.com/catchorg/Catch2/master/single_include/catch2/catch.hpp
#include "dependencies/catch.h"

// All test are in TestingModules folder***

/*
 * CREATE TAG ALIASES
 *
 * It could be a easy way to execute a group of tags
 * We can execute some certain complex group of tags easily
 * */

CATCH_REGISTER_TAG_ALIAS("[@abc]", "[a],[b]~[c]");

// execute all the test in controller and agent tags
CATCH_REGISTER_TAG_ALIAS("[@service]","[CONTROLLER], [AGENT]");