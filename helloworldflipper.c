#include <furi.h>

/* generated by fbt from .png files in images folder */
#include <helloworldflipper_icons.h>

int32_t helloworldflipper_app(void* p) {
    UNUSED(p);
    FURI_LOG_I("TEST", "Hello world");
    FURI_LOG_I("TEST", "I'm helloworldflipper!");

    return 0;
}
