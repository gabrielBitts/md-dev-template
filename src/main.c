#include <genesis.h>

int main(){
    VDP_drawText("Hello Mega Drive Worldaasdsad!", 8, 12);
    while (1)
    {
        SYS_doVBlankProcess();
    }
    return(0);
}