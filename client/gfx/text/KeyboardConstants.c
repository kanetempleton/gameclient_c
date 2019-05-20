#include "KeyboardConstants.h"

char getCharForCode(int keyid) {
    switch (keyid) {
        case SDLK_a:
            return 'a';
        case SDLK_b:
            return 'b';
        case SDLK_c:
            return 'c';
        case SDLK_d:
            return 'd';
        case SDLK_e:
            return 'e';
        case SDLK_f:
            return 'f';
        case SDLK_g:
            return 'g';
        case SDLK_h:
            return 'h';
        case SDLK_i:
            return 'i';
        case SDLK_j:
            return 'j';
        case SDLK_k:
            return 'k';
        case SDLK_l:
            return 'l';
        case SDLK_m:
            return 'm';
        case SDLK_n:
            return 'n';
        case SDLK_o:
            return 'o';
        case SDLK_p:
            return 'p';
        case SDLK_q:
            return 'q';
        case SDLK_r:
            return 'r';
        case SDLK_s:
            return 's';
        case SDLK_t:
            return 't';
        case SDLK_u:
            return 'u';
        case SDLK_v:
            return 'v';
        case SDLK_w:
            return 'w';
        case SDLK_x:
            return 'x';
        case SDLK_y:
            return 'y';
        case SDLK_z:
            return 'z';
        case SDLK_SPACE:
            return ' ';
        case SDLK_0:
            return '0';
        case SDLK_1:
            return '1';
        case SDLK_2:
            return '2';
        case SDLK_3:
            return '3';
        case SDLK_4:
            return '4';
        case SDLK_5:
            return '5';
        case SDLK_6:
            return '6';
        case SDLK_7:
            return '7';
        case SDLK_8:
            return '8';
        case SDLK_9:
            return '9';
        default:
            return ' ';
    }
}
