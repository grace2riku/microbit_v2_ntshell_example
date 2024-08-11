#include "MicroBit.h"
#include "Tests.h"


// LED を点滅させる関数
static void flashLed() {
    while (true) {
        uBit.display.image.setPixelValue(4, 4, 255); // LEDをオン
        uBit.sleep(500);
        uBit.display.image.setPixelValue(4, 4, 0); // LEDをオフ
        uBit.sleep(500);
    }
}


void start_flashLed() {
    // flashLed 関数を新しい Fiber として起動
    create_fiber(flashLed);
}
