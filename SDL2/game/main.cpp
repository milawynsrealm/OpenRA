#include "game.h"

int GameMain(int argc, char *argv[])
{
    return 0;
}

#if defined(_WIN32)
int WINAPI WinMain(HINSTANCE hInstance, HINSTANCE hPrevInstance, LPSTR lpCmdLine, int nShowCmd)
{
    return GameMain(__argc, __argv);
}
#else /* POSIX-based systems (Linux, BSD, macOS, etc.) */
int main(int argc, char *argv[])
{
    return GameMain(argc, argv);
}
#endif
