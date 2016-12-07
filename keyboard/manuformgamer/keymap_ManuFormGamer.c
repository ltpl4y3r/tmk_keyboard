#include "keymap_common.h"

/*
 * ManuForm Gamer's Edition
 */
const uint8_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* *************** */
    /* Layer 0: qwerty */
    /* *************** */
    /*  _________________________________________        */
    /* |      |      |      |      |      |      |       */
    /* | ESC  |  1   |  Q   |  R   |  E   |  R   |       */
    /* |______|______|______|______|______|______|       */
	/* |      |      |      |      |      |      |       */
    /* |  V   |LSHIFT|  A   |  W   |  D   |  F   |       */
    /* |______|______|______|______|______|______|       */
    /* |      |      |      |      |      |      |       */
    /* | LCTL |  2   |  Z   |  S   |  C   |  G   |       */
    /* |______|______|______|______|______|______|_      */
    /*                               |      |      |     */
    /*                               | LCTL | SPC  |     */
    /*                               |      |      |     */
    /*                               |______|______|_    */
    /*                                 |      |      |   */
    /*                                 |   V  |  R   |   */
    /*                                 |______|______|_  */
    /*                                   |      |      | */
    /*                                   | LCTL | SPC  | */
    /*                                   |______|______| */
    /*                                                                                                           */
    /*                                                                                                           */
    /*                                                                                                           */
    [0] = KEYMAP( \
        ESC,   1,   Q,   R,   E,   R, \
        V, LSHIFT,   A,   W,   D,   F, \
        LCTL,  2,   Z,   S,   C,   G, \
        /*               */LCTL, SPC, \
        /*               */   V, FN0, \
        /*               */LCTL, SPC),
};


/* id for user defined function/macro */
enum function_id {
    NONE,
};

enum macro_id {
    EJECT,
};


/*
 * Fn action definition
 */
const action_t PROGMEM fn_actions[] = {
    [0] = ACTION_MACRO(EJECT),                      // EJECT FROM TITAN
};


/*
 * Macro definition
 */
const macro_t *action_get_macro(keyrecord_t *record, uint8_t id, uint8_t opt)
{
    switch (id) {
        case EJECT:
            return (record->event.pressed ?
                    MACRO( I(25), T(X), T(E), T(E), T(E), END ) :
                    MACRO_NONE );
    }
    return MACRO_NONE;
};