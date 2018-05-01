// MBO Keylayout
#include "atreus62.h"
#include "keymap_german_ch.h"

#define TAPPING_TOGGLE 2

// Layers
#define _DEFAULT 0
#define _NAV 1
#define _SPEC 2
#define _MAC 3

// Keys
#define _x_ KC_NO 		// not available
#define xxx KC_NO 		// TODO KEYS
#define ___ KC_TRNS 	// Transient Keys

enum custom_keycodes {
    BIG_UE = SAFE_RANGE,
	BIG_AE,
	BIG_OE
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[_DEFAULT] = { /* qwerty */
		{ CH_PARA, 	KC_1,   KC_2,    KC_3,     KC_4,    KC_5,    _x_,      KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    CH_CARR },
		{ KC_ESC, 	KC_Q,   KC_W,    KC_E,     KC_R,    KC_T,    _x_,  	   CH_Z,    KC_U,    KC_I,    KC_O,    KC_P,    CH_UE },
		{ KC_TAB,  	KC_A,   KC_S,    KC_D,     KC_F,    KC_G,    _x_,      KC_H,    KC_J,    KC_K,    KC_L,    CH_OE,   CH_AE },
		{ KC_LSFT, 	CH_Y,   KC_X,    KC_C,     KC_V,    KC_B,    KC_DELT,  KC_N,    KC_M,    CH_COMM, CH_DOT,  CH_ACUT, KC_RSFT },
		{ xxx,     	xxx,    KC_LGUI, KC_R,  KC_LCTRL,KC_BSPC, KC_ENT,   KC_SPC,  TT(_NAV),KC_RCTRL,KC_RALT, xxx,  	xxx }
},

[_NAV] = {
		{ KC_F12,   KC_F1,   KC_F2,    KC_F3,   KC_F4,   KC_F5,   _x_,    KC_F6,   KC_F7,   KC_F8,   KC_F9,     KC_F10,  KC_F11  },
		{ ___,      CH_HASH, CH_DLR,   CH_LCBR, CH_RCBR, CH_SLSH, _x_,    KC_PGUP, KC_HOME, KC_UP,   KC_END,    KC_NO,   BIG_UE	},
		{ ___,      CH_AT,   CH_EQL,   CH_LPRN, CH_RPRN, CH_PIPE, _x_,    KC_PGDN, KC_LEFT, KC_DOWN, KC_RGHT,   BIG_OE,  BIG_AE   },
		{ ___,      CH_PLUS, CH_MINS,  CH_LBRC, CH_RBRC, CH_BSLS, ___,    ALGR(CH_CARR), xxx,     CH_QUOT, CH_DQOT, 	CH_GRV,   ___    },
		{ TO(_SPEC),___,     ___,      ___,     ___,     ___,     ___,    ___,     ___,     ___,     ___,       KC_F13,  KC_F14 }
},

[_SPEC] = {
		{ TO(_DEFAULT),TO(_MAC), KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		{ KC_NO  ,     KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		{ KC_CAPSLOCK ,KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		{ KC_NO  ,     KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO   },
		{ KC_NO  ,     KC_NO   , KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  ,  KC_NO  , KC_NO  , KC_NO  , KC_NO  , KC_NO  , RESET }
},

[_MAC] = {
		{ KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_LCTRL, KC_TRNS, KC_LGUI, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},



/*
[_TRNS] = {
		{ KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS },
		{ KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS }
},
*/
};


bool process_record_user(uint16_t keycode, keyrecord_t *record) {
    if (record->event.pressed) {
        switch(keycode) {
            case BIG_UE:
                SEND_STRING("]U"); // this is our macro!
                return false;
			case BIG_AE:
                SEND_STRING("]A"); // this is our macro!
                return false;
			case BIG_OE:
                SEND_STRING("]O"); // this is our macro!
                return false;
        }
    }
    return true;
};
