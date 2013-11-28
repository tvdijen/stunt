/******************************************************************************
  Copyright (c) 1992, 1995, 1996 Xerox Corporation.  All rights reserved.
  Portions of this code were written by Stephen White, aka ghond.
  Use and copying of this software and preparation of derivative works based
  upon this software are permitted.  Any distribution of this software or
  derivative works must comply with all applicable United States export
  control laws.  This software is made available AS IS, and Xerox Corporation
  makes no warranty about the software, its performance or its conformity to
  any specification.  Any person obtaining a copy of this software is requested
  to send their name and post office or electronic mail address to:
    Pavel Curtis
    Xerox PARC
    3333 Coyote Hill Rd.
    Palo Alto, CA 94304
    Pavel@Xerox.Com
 *****************************************************************************/

#include "config.h"

#include <fcntl.h>

#if NDECL_FCNTL
extern int fcntl(int, int,...);
extern int open(const char *, int,...);
#endif

#if POSIX_NONBLOCKING_WORKS
/* Prefer POSIX-style nonblocking, if available. */
#define NONBLOCK_FLAG O_NONBLOCK
#else
#define NONBLOCK_FLAG O_NDELAY
#endif
