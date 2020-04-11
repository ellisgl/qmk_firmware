#include "gltkb1.h"
#include "led.h"

// Optional override functions below.
// You can leave any or all of these undefined.
// These are only required if you want to perform custom actions.
void matrix_init_kb(void) {
    // put your keyboard start-up code here
    // runs once when the firmware starts up
    // Set Port D3 (PIN 1) to output and low.
    DDRD |= (1 << 3);
    PORTD &= ~(1 << 3);
}
/*
void matrix_scan_kb(void) {
	// put your looping keyboard code here
	// runs every cycle (a lot)

	matrix_scan_user();
}
*/

void led_set_kb(uint8_t usb_led) {
    // put your keyboard LED indicator (ex: Caps Lock LED) toggling code here
    if (usb_led & (1 << USB_LED_CAPS_LOCK)) {
        // Port D3 (PIN 1) HIGH
		PORTD |= (1 << 3);
	} else {
        // Port D3 (PIN 1) LOW
		PORTD &= ~(1 << 3);
	}
}
