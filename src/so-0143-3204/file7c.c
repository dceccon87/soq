/* Declare variables */
#include "file2d.h"

/* Define variables */
#define HEADER_DEFINING_VARIABLES "file2d.h"
#include "externdef.h"

/* Declare variables - again */
#include "file2d.h"

/* Define variables - again */
#define HEADER_DEFINING_VARIABLES "file2d.h"
#include "externdef.h"

int increment(void) { return global_variable++; }
int oddball_value(void) { return oddball_struct.a + oddball_struct.b; }

