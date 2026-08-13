#undef TAPPING_TERM
#define TAPPING_TERM 150

#define USB_SUSPEND_WAKEUP_DELAY 0
#define SERIAL_NUMBER "yr40x/ga06w0"
#define LAYER_STATE_8BIT
#define HSS(report) host_system_send(record->event.pressed ? report : 0); return false
#define HCS(report) host_consumer_send(record->event.pressed ? report : 0); return false

#define RGB_MATRIX_STARTUP_SPD 60

