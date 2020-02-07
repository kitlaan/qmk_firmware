OLED_DRIVER_ENABLE = yes   # Enables the use of OLED displays
ENCODER_ENABLE = yes       # Enables the use of one or more encoders
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow

LEADER_ENABLE = yes        # Leader-key
MOUSEKEY_ENABLE = no       # Don't need mouse buttons

RAW_ENABLE = yes           # RAWHID support to comm with PC

# TODO: research which works better for me
# https://www.reddit.com/r/olkb/comments/7ug57n/qmk_space_cadet_vs_mod_tap/
SPACE_CADET_ENABLE = no

# Disable runtime change of EEPROM keymap config (process_magic.c)
MAGIC_ENABLE = no

# Use to reset EEPROM if COL0+ROW0 held down at boot
#BOOTMAGIC_ENABLE = lite


# rev1 board with Elite-C rev3.1
DEFAULT_FOLDER = kyria/rev1

SRC += \
    encoder.c \
    oled.c \
    rawhid.c

