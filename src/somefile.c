#include <stdlib.h>

/// \brief The Entry Point
///
/// \warning Both parameters are ignored. We know what we're doing.
///
/// \param argc the number of arguments received
/// \param argv the array of strings containing the passed arguments
/// \returns `EXIT_SUCCESS`; we're always successful
signed
main (signed argc, char * argv []) {

    // silence compiler warnings
    (void )argc;
    (void )argv;
    return EXIT_SUCCESS;
}
