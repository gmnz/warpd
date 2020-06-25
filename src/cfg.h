//GENERATED BY gen_assets.py.

#ifndef _CFG_H_
#define _CFG_H_

struct cfg {
    char* hint_activation_key;
    char* grid_activation_key;
    char* discrete_activation_key;
    int movement_increment;
    char* buttons;
    char* exit;
    int double_click_timeout;
    char* drag_key;
    int grid_nr;
    int grid_nc;
    char* grid_up;
    char* grid_left;
    char* grid_down;
    char* grid_right;
    char* grid_keys;
    char* grid_color;
    char* grid_mouse_color;
    int grid_pointer_size;
    int grid_line_width;
    int hint_width;
    int hint_height;
    char* hint_up;
    char* hint_left;
    char* hint_down;
    char* hint_right;
    char* hint_bgcolor;
    char* hint_fgcolor;
    char* hint_characters;
    int hint_opacity;
    char* discrete_left_word;
    char* discrete_right_word;
    char* discrete_down_word;
    char* discrete_up_word;
    char* discrete_left;
    char* discrete_down;
    char* discrete_up;
    char* discrete_right;
    char* discrete_color;
    int discrete_size;
    char* discrete_home;
    char* discrete_middle;
    char* discrete_last;
    char* discrete_beginning;
    char* discrete_end;
    int discrete_word_size;
    int scroll_fling_timeout;
    int scroll_fling_velocity;
    int scroll_fling_acceleration;
    int scroll_fling_deceleration;
    int scroll_velocity;
    int scroll_acceleration;
    char* scroll_down_key;
    char* scroll_up_key;
};

struct cfg* parse_cfg(const char *fname);

#endif
