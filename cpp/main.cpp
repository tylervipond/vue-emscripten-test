#include <emscripten.h>

EMSCRIPTEN_KEEPALIVE
extern "C" {
    const char *testFunc(const char *parameter) {
        return parameter;
    }
}