#ifndef __DISPLAY_H
#define __DISPLAY_H
#include <stdint.h>
	void display_init(void);
	void dipslay_power_on(void);
	void dipslay_power_off(void);
	void dipslay_write_to_screen(int32_t num);

#endif
