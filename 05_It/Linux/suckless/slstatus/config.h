const unsigned int interval = 100;

static const char unknown_str[] = "?";

#define MAXLEN 6048

static const struct arg args[] = {
        { battery_perc,    " | BAT: %s%% | ", "BAT0" },
        { run_command,     "VOL: %s | ",   "wpctl get-volume @DEFAULT_AUDIO_SINK@ | awk '{printf \"%.0f%%\", $2 * 100}'" },
        { keymap,          "LANG: %s | ",  NULL },
        { datetime,        "TIME: %s | ",  "%H:%M" },
        { datetime,        "DATE: %s | ",     "%F" },
};
