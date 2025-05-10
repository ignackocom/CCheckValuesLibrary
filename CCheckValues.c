/******************************************************************************
* \file      CCheckValues.c
* \author    Peter Potrok
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Checking the validity(asserting) of parameters within the specified ranges
* \details
*
* \see
*            and other resources
******************************************************************************/

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"
#endif /* defined(__clang__) */

#if defined(__clang__)
#pragma clang diagnostic ignored "-Wdouble-promotion"
#endif /* defined(__clang__) */


#include "CCheckValues.h"


#if defined(DEBUG) || defined(_DEBUG)


/* Asserting a boolean. */
bool IsValidBool(char* sFile, int iLine, bool onErrExit, bool Val)
{
	if (Val == true) return(true);
	if (Val == false) return(true);

	fprintf(stderr, "file \"%s\", line %d: bool is %d, should be %d or %d\n", sFile, iLine, Val, true, false);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}



/* Asserting an char. */
bool IsValidChar(char* sFile, int iLine, bool onErrExit, char Val, char Min, char Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: char is %d, should be %d <= %d <= %d\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

/* Asserting an unsigned char. */
bool IsValidUChar(char* sFile, int iLine, bool onErrExit, unsigned char Val, unsigned char Min, unsigned char Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: unsigned char is %u, should be %u <= %u <= %u\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}



/* Asserting an short. */
bool IsValidShort(char* sFile, int iLine, bool onErrExit, short Val, short Min, short Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: short is %d, should be %d <= %d <= %d\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

/* Asserting an unsigned short. */
bool IsValidUShort(char* sFile, int iLine, bool onErrExit, unsigned short Val, unsigned short Min, unsigned short Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: unsigned short is %u, should be %u <= %u <= %u\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}



/* Asserting an int. */
bool IsValidInt(char* sFile, int iLine, bool onErrExit, int Val, int Min, int Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: int is %d, should be %d <= %d <= %d\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

/* Asserting an unsigned int. */
bool IsValidUInt(char* sFile, int iLine, bool onErrExit, unsigned int Val, unsigned int Min, unsigned int Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: unsigned int is %u, should be %u <= %u <= %u\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}



/* Asserting an long. */
bool IsValidLong(char* sFile, int iLine, bool onErrExit, long Val, long Min, long Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: long is %ld, should be %ld <= %ld <= %ld\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

/* Asserting an unsigned long. */
bool IsValidULong(char* sFile, int iLine, bool onErrExit, unsigned long Val, unsigned long Min, unsigned long Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: unsigned long is %lu, should be %lu <= %lu <= %lu\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}



#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L


/* Asserting an long long. */
bool IsValidLongLong(char* sFile, int iLine, bool onErrExit, long long Val, long long Min, long long Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: long long is %lld, should be %lld <= %lld <= %lld\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

/* Asserting an unsigned long long. */
bool IsValidULongLong(char* sFile, int iLine, bool onErrExit, unsigned long long Val, unsigned long long Min, unsigned long long Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if ((!Min) && (!Max)) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: unsigned long long is %llu, should be %llu <= %llu <= %llu\n", sFile, iLine, Val, Min, Val, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */



/* Asserting an float. */
bool IsValidFloat(char* sFile, int iLine, bool onErrExit, float Val, float Min, float Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if (Min == 0.0f && Max == 0.0f) return(true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: float is %.*f, should be %.*f <= %.*f <= %.*f\n",
			sFile, iLine, FLT_DIG, Val, FLT_DIG, Min, FLT_DIG, Val, FLT_DIG, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

#if !defined(__SDCC) && !defined(SDCC)

/* Asserting an double. */
bool IsValidDouble(char* sFile, int iLine, bool onErrExit, double Val, double Min, double Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if (Min == 0.0 && Max == 0.0) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: double is %.*lf, should be %.*lf <= %.*lf <= %.*lf\n",
			sFile, iLine, DBL_DIG, Val, DBL_DIG, Min, DBL_DIG, Val, DBL_DIG, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

/* Asserting an long double. */
bool IsValidLongDouble(char* sFile, int iLine, bool onErrExit, long double Val, long double Min, long double Max)
{
	/* See whether you need to check min / max. If both are 0, don't check them */
	if (Min == 0.0l && Max == 0.0l) return (true);

	/* Check against min / max */
	if ((Min <= Val) && (Val <= Max)) return (true);

	fprintf(stderr, "file \"%s\", line %d: long double is %.*Lf, should be %.*Lf <= %.*Lf <= %.*Lf\n",
			sFile, iLine, LDBL_DIG, Val, LDBL_DIG, Min, LDBL_DIG, Val, LDBL_DIG, Max);
	if (onErrExit == true) exit(EXIT_FAILURE);
	return (false);
}

#endif /* !defined(__SDCC) && !defined(SDCC) */


#endif /* defined(DEBUG) || defined(_DEBUG) */
