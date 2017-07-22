#include <stdio.h>
#include <emscripten/emscripten.h>

int main(int argc, char ** argv)
{
    printf("hello world \n");
    return 0;
}
#ifdef __cplusplus
extern "C" {
#endif

int EMSCRIPTEN_KEEPALIVE hello()
{
    printf("Say hello to everybody\n");
    return 0;
}

#ifdef __cplusplus
}
#endif