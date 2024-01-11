OLED_ENABLE = yes
ENCODER_ENABLE = yes       # Enables the use of one or more encoders
RGB_MATRIX_ENABLE = no     # Disable keyboard RGB matrix, as it is enabled by default on rev3
RGBLIGHT_ENABLE = yes      # Enable keyboard RGB underglow
BOOTLOADER = caterina      # Because of AVR MCU on Pro Micro board used

# Encoders documentation
# https://github.com/qmk/qmk_firmware/blob/master/docs/feature_encoders.md
ENCODER_MAP_ENABLE = yes   # Enable layers for encoders

# https://docs.qmk.fm/#/feature_caps_word?id=caps-word
CAPS_WORD_ENABLE = yes

# Memory optimization
LTO_ENABLE = yes
AVR_USE_MINIMAL_PRINTF = yes
CONSOLE_ENABLE = no
COMMAND_ENABLE = no

# Enable Words Per Minute (WPM) calculation
WPM_ENABLE = yes

SRC = data.c
