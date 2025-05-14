/******************************************************************************
* \file      CCheckValues.h
* \version   2025.03.18
* \author    Peter Potrok ( @ignackocom )
*            ignacko.com@outlook.com
*            https://github.com/ignackocom
* \copyright Copyright (c) 1994 - 2025
*            MIT License (see License.txt file)
* \brief     Checking the validity(asserting) of parameters within the specified ranges
* \details
*
* \see		 https://github.com/ignackocom
*            and other resources
******************************************************************************/

#ifndef CCHECKVALUES_H
#define CCHECKVALUES_H		20250318L

#include <stdio.h>
#include <stdlib.h>
#include <float.h>

#include "Bool.h"


#if defined(DEBUG) || defined(_DEBUG)

#ifdef __cplusplus
extern "C" {
#endif

	/******************************************************************************
	 * \brief
	 *	Asserting a boolean.
	 *  The IsValidBool function checks if a given boolean value is valid (either true or false), 
	 *  logs an error message to a specified file if it is not, 
	 *  and optionally exits the program based on the onErrExit parameter.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 *
	 * \return
	 *	true if the value is within the range of values, 
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidBool(char* sFile, int iLine, bool onErrExit, bool Val);


	/******************************************************************************
	 * \brief
	 *	Asserting a char.
	 *  The IsValidChar function checks if a given character falls 
	 *  within specified minimum and maximum bounds, 
	 *  optionally logging an error message and terminating the program 
	 *  if the character is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidChar(char* sFile, int iLine, bool onErrExit, char Val, char Min, char Max);

	/******************************************************************************
	 * \brief
	 *	Asserting a unsigned char.
	 *  The IsValidUChar function checks if a given unsigned char value falls 
	 *  within specified minimum and maximum bounds, 
	 *  optionally logging an error message and terminating the program 
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidUChar(char* sFile, int iLine, bool onErrExit, unsigned char Val, unsigned char Min, unsigned char Max);


	/******************************************************************************
	 * \brief
	 *	Asserting a short.
	 *  The IsValidShort function checks if a given short integer value falls 
	 *  within specified minimum and maximum bounds, 
	 *  optionally logging an error message and terminating the program 
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidShort(char* sFile, int iLine, bool onErrExit, short Val, short Min, short Max);

	/******************************************************************************
	 * \brief
	 *	Asserting a unsigned short.
	 *  The IsValidUShort function checks if a given unsigned short integer value falls
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidUShort(char* sFile, int iLine, bool onErrExit, unsigned short Val, unsigned short Min, unsigned short Max);


	/******************************************************************************
	 * \brief
	 *	Asserting a int.
	 *  The IsValidInt function checks if a given integer value falls
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidInt(char* sFile, int iLine, bool onErrExit, int Val, int Min, int Max);

	/******************************************************************************
	 * \brief
	 *	Asserting a unsigned int.
	 *  The IsValidUInt function checks if a given unsigned integer value falls
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidUInt(char* sFile, int iLine, bool onErrExit, unsigned int Val, unsigned int Min, unsigned int Max);


	/******************************************************************************
	 * \brief
	 *	Asserting a long.
	 *  The IsValidLong function checks if a given long integer value falls
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidLong(char* sFile, int iLine, bool onErrExit, long Val, long Min, long Max);

	/******************************************************************************
	 * \brief
	 *	Asserting a unsigned long.
	 *  The IsValidULong function checks if a given unsigned long integer value falls
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidULong(char* sFile, int iLine, bool onErrExit, unsigned long Val, unsigned long Min, unsigned long Max);


#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

	/******************************************************************************
	 * \brief
	 *	Asserting a long long.
	 *  The IsValidLongLong function checks if a given long long integer value falls
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidLongLong(char* sFile, int iLine, bool onErrExit, long long Val, long long Min, long long Max);

	/******************************************************************************
	 * \brief
	 *	Asserting a unsigned long long.
	 *  The IsValidULongLong function checks if a given unsigned long long integer value falls
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidULongLong(char* sFile, int iLine, bool onErrExit, unsigned long long Val, unsigned long long Min, unsigned long long Max);

#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


	/******************************************************************************
	 * \brief
	 *	Asserting a float.
	 *  The IsValidFloat function checks if a given float value is 
	 *  within specified minimum and maximum bounds, 
	 *  optionally logging an error message and terminating the program 
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidFloat(char* sFile, int iLine, bool onErrExit, float Val, float Min, float Max);

#if !defined(__SDCC) && !defined(SDCC)

	/******************************************************************************
	 * \brief
	 *	Asserting a double.
	 *  The IsValidDouble function checks if a given double value is
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidDouble(char* sFile, int iLine, bool onErrExit, double Val, double Min, double Max);

	/******************************************************************************
	 * \brief
	 *	Asserting a long double.
	 *  The IsValidLongDouble function checks if a given long double value is
	 *  within specified minimum and maximum bounds,
	 *  optionally logging an error message and terminating the program
	 *  if the value is out of range and the onErrExit flag is set to true.
	 *
	 * \param
	 *	sFile - __FILE__ string to identify file with code.
	 * \param
	 *	iLine - __LINE__ value to identify line of code.
	 * \param
	 *	onErrExit - If true exit on error.
	 * \param
	 *	Val - Tested value against the required range of values.
	 * \param
	 *	Min - Range defined by minimum value.
	 * \param
	 *	Max - Range defined by maximum value.
	 *
	 * \return
	 *	true if the value is within the range of values,
	 *  false if the value is outside the range of values.
	 *
	 */
	bool IsValidLongDouble(char* sFile, int iLine, bool onErrExit, long double Val, long double Min, long double Max);

#endif /* !defined(__SDCC) && !defined(SDCC) */


#ifdef __cplusplus
}
#endif



	#define IS_VALID_BOOL(f,l,e,v)						IsValidBool(f,l,e,v)


	#define IS_VALID_CHAR(f,l,e,v,mn,mx)				IsValidChar(f,l,e,v,mn,mx)

	#define IS_VALID_UCHAR(f,l,e,v,mn,mx)				IsValidUChar(f,l,e,v,mn,mx)


	#define IS_VALID_SHORT(f,l,e,v,mn,mx)				IsValidShort(f,l,e,v,mn,mx)

	#define IS_VALID_USHORT(f,l,e,v,mn,mx)				IsValidUShort(f,l,e,v,mn,mx)


	#define IS_VALID_INT(f,l,e,v,mn,mx)					IsValidInt(f,l,e,v,mn,mx)

	#define IS_VALID_UINT(f,l,e,v,mn,mx)				IsValidUInt(f,l,e,v,mn,mx)


	#define IS_VALID_LONG(f,l,e,v,mn,mx)				IsValidLong(f,l,e,v,mn,mx)

	#define IS_VALID_ULONG(f,l,e,v,mn,mx)				IsValidULong(f,l,e,v,mn,mx)


	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

		#define IS_VALID_LONGLONG(f,l,e,v,mn,mx)		IsValidLongLong(f,l,e,v,mn,mx)

		#define IS_VALID_ULONGLONG(f,l,e,v,mn,mx)		IsValidULongLong(f,l,e,v,mn,mx)

	#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


	#define IS_VALID_FLOAT(f,l,e,v,mn,mx)				IsValidFloat(f,l,e,v,mn,mx)

	#if !defined(__SDCC) && !defined(SDCC)

		#define IS_VALID_DOUBLE(f,l,e,v,mn,mx)			IsValidDouble(f,l,e,v,mn,mx)

		#define IS_VALID_LONGDOUBLE(f,l,e,v,mn,mx)		IsValidLongDouble(f,l,e,v,mn,mx)

	#endif /* !defined(__SDCC) && !defined(SDCC) */


#else /* defined(DEBUG) || defined(_DEBUG) */


	#define IS_VALID_BOOL(f,l,e,v)						true


	#define IS_VALID_CHAR(f,l,e,v,mn,mx)				true

	#define IS_VALID_UCHAR(f,l,e,v,mn,mx)				true


	#define IS_VALID_SHORT(f,l,e,v,mn,mx)				true

	#define IS_VALID_USHORT(f,l,e,v,mn,mx)				true


	#define IS_VALID_INT(f,l,e,v,mn,mx)					true

	#define IS_VALID_UINT(f,l,e,v,mn,mx)				true


	#define IS_VALID_LONG(f,l,e,v,mn,mx)				true

	#define IS_VALID_ULONG(f,l,e,v,mn,mx)				true


	#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L

		#define IS_VALID_LONGLONG(f,l,e,v,mn,mx)		true

		#define IS_VALID_ULONGLONG(f,l,e,v,mn,mx)		true

	#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */


	#define IS_VALID_FLOAT(f,l,e,v,mn,mx)				true

	#if !defined(__SDCC) && !defined(SDCC)

		#define IS_VALID_DOUBLE(f,l,e,v,mn,mx)			true

		#define IS_VALID_LONGDOUBLE(f,l,e,v,mn,mx)		true

	#endif /* !defined(__SDCC) && !defined(SDCC) */

#endif /* defined(DEBUG) || defined(_DEBUG) */



/* Version */
#ifdef __cplusplus
extern "C" {
#endif

	long CCHECKVALUES_VERSION(void);

#ifdef __cplusplus
}
#endif



#endif /* CCHECKVALUES_H */
