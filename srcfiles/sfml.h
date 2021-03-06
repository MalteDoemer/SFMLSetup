#define SFML_STATIC

#ifdef _DEBUG
#pragma comment(lib, "sfml-graphics-s-d.lib")
#pragma comment(lib, "sfml-window-s-d.lib")
#pragma comment(lib, "sfml-audio-s-d.lib")
#pragma comment(lib, "sfml-network-s-d.lib")
#pragma comment(lib, "sfml-system-s-d.lib")
#else
#pragma comment(lib, "sfml-graphics-s.lib")
#pragma comment(lib, "sfml-window-s.lib")
#pragma comment(lib, "sfml-audio-s.lib")
#pragma comment(lib, "sfml-network-s.lib")
#pragma comment(lib, "sfml-system-s.lib")
#endif

#pragma comment(lib, "opengl32.lib")
#pragma comment(lib, "freetype.lib")
#pragma comment(lib, "winmm.lib")
#pragma comment(lib, "gdi32.lib")
#pragma comment(lib, "openal32.lib")
#pragma comment(lib, "flac.lib")
#pragma comment(lib, "vorbisenc.lib")
#pragma comment(lib, "vorbisfile.lib")
#pragma comment(lib, "vorbis.lib")
#pragma comment(lib, "ogg.lib")
#pragma comment(lib, "ws2_32.lib")

#pragma comment(lib, "kernel32.lib")
#pragma comment(lib, "user32.lib")
#pragma comment(lib, "advapi32.lib")

//#pragma comment(lib, "winspool.lib")
//#pragma comment(lib, "comdlg32.lib")
//#pragma comment(lib, "shell32.lib")
//#pragma comment(lib, "ole32.lib")
//#pragma comment(lib, "oleaut32.lib")
//#pragma comment(lib, "uuid.lib")
//#pragma comment(lib, "odbc32.lib")
//#pragma comment(lib, "odbccp32.lib")

#include <SFML/Graphics.hpp>