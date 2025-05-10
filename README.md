# CCheckValuesLibrary
C CheckValues library. Checking the validity(asserting) of parameters within the specified ranges. C89, C99 and >C99 compatible, CPP98 and >CPP98 compatible, Embedded C compatible.

Example of use

```c
#if defined(__clang__)
#pragma clang diagnostic ignored "-Wc++98-compat-pedantic"
#endif /* defined(__clang__) */


#include "../CCheckValues/CCheckValues.h"


void TestFunction(bool ParamBool, 
                    char ParamChar, unsigned char ParamUChar, 
                    short ParamShort,unsigned short ParamUShort,
                    int ParamInt, unsigned int ParamUInt,
                    long ParamLong, unsigned long ParamULong,
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
                    long long ParamLongLong, unsigned long long ParamULongLong,
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */
                    float ParamFloat
#if !defined(__SDCC) && !defined(SDCC)
                  , double ParamDouble,
                    long double ParamLongDouble
#endif /* !defined(__SDCC) && !defined(SDCC) */
                )
{
    bool onErrExit;
    printf("Test Function begin.\n");

    onErrExit = 0;

    IS_VALID_BOOL(__FILE__, __LINE__, onErrExit, ParamBool);
    IS_VALID_CHAR(__FILE__, __LINE__, onErrExit, ParamChar, 0, 3);
    IS_VALID_UCHAR(__FILE__, __LINE__, onErrExit, ParamUChar, 0, 3);
    IS_VALID_SHORT(__FILE__, __LINE__, onErrExit, ParamShort, 0, 3);
    IS_VALID_USHORT(__FILE__, __LINE__, onErrExit, ParamUShort, 0, 3);
    IS_VALID_INT(__FILE__, __LINE__, onErrExit, ParamInt, 0, 3);
    IS_VALID_UINT(__FILE__, __LINE__, onErrExit, ParamUInt, 0, 3);
    IS_VALID_LONG(__FILE__, __LINE__, onErrExit, ParamLong, 0, 3l);
    IS_VALID_ULONG(__FILE__, __LINE__, onErrExit, ParamULong, 0, 3l);
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
    IS_VALID_LONGLONG(__FILE__, __LINE__, onErrExit, ParamLongLong, 0, 3ll);
    IS_VALID_ULONGLONG(__FILE__, __LINE__, onErrExit, ParamULongLong, 0, 3ll);
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */

    IS_VALID_FLOAT(__FILE__, __LINE__, onErrExit, ParamFloat, 1.0f, 3.0f);
#if !defined(__SDCC) && !defined(SDCC)
    IS_VALID_DOUBLE(__FILE__, __LINE__, onErrExit, ParamDouble, 1.0f, 3.0f);
    IS_VALID_LONGDOUBLE(__FILE__, __LINE__, onErrExit, ParamLongDouble, 1.0f, 3.0f);
#endif /* !defined(__SDCC) && !defined(SDCC) */

    /* ... */
    /* function body */
    /* ... */

    printf("Test Function end.\n");
    return;
}


int main(void)
{
    printf("CCheckValues test.\n");

    /* change the parameter value and see the result */
    TestFunction(1, 
        5, 1, /* char uchar */
        1, 1, /* short ushort */
        1, 1, /* int uint */
        1l, 1l, /* long ulong */
#if defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L
        1ll, 1ll, /* longlong ulonglong */
#endif /* defined(__STDC_VERSION__) && __STDC_VERSION__ >= 199901L || defined(__cplusplus) && __cplusplus > 199711L */
        1.0f
#if !defined(__SDCC) && !defined(SDCC)
        ,1.0,
        1.0L
#endif /* !defined(__SDCC) && !defined(SDCC) */
    );

    printf("\n");
}
```

# History of changes ...
