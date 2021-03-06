/*
@(#)File:           timespec_math.h
@(#)Purpose:        Add, subtract, compare two struct timespec values
@(#)Author:         J Leffler
@(#)Copyright:      (C) JLSS 2015-2017
@(#)Derivation:     timespec_math.h 2.1 2019/06/02 05:12:31
*/

/*TABSTOP=4*/

#ifndef JLSS_ID_TIMESPEC_MATH_H
#define JLSS_ID_TIMESPEC_MATH_H

#ifdef __cplusplus
extern "C" {
#endif

#include <time.h>

extern void sub_timespec(struct timespec t1, struct timespec t2, struct timespec *td);
extern void add_timespec(struct timespec t1, struct timespec t2, struct timespec *td);
extern int  cmp_timespec(struct timespec t1, struct timespec t2);

#ifdef __cplusplus
}
#endif

#endif /* JLSS_ID_TIMESPEC_MATH_H */
