#ifndef _DEBUG_H_
#define _DEBUG_H_

#define TAG "TETRIS"

#undef LOG_TAG
#define LOG_TAG "YOUR_APPLICATION"

#define COLOR_RED "\033[0;40;31m"
#define COLOR_LIGHTBLUE "\033[1;40;34m"
#define COLOR_YELLOW "\033[1;40;33m"
#define COLOR_END "\033[0;m"
#define COLOR_GRAY "\033[1;40;30m"
#define COLOR_MAGENTA "\033[1;35m"

#ifdef DEBUG_ENABLE
#define DEBUG_PRINT(...) do{ fprintf( stderr, __VA_ARGS__ ); } while( false )
#else
#define DEBUG_PRINT(...) do{ } while ( false )
#endif

#define __FUNC_ENTER__ DEBUG_PRINT(__func__, "IN");
#define __FUNC_LEAVE__ DEBUG_PRINT(__func__, "OUT");

#endif /* _DEBUG_H_ */