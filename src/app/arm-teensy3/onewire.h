void onewire_init(uint8_t pin, uint8_t power);
uint8_t onewire_reset(void);
void onewire_write_bit(uint8_t v);
uint8_t onewire_read_bit(void);
void onewire_write(uint8_t v);
void onewire_write_bytes(const uint8_t *buf, uint16_t count);
uint8_t onewire_read();
void onewire_read_bytes(uint8_t *buf, uint16_t count);
void onewire_select(const uint8_t rom[8]);
void onewire_skip();
void onewire_depower();
void onewire_reset_search();
void onewire_target_search(uint8_t family_code);
uint8_t onewire_search(uint8_t *newAddr, int search_mode /* = true */);
uint8_t onewire_crc8(const uint8_t *addr, uint8_t len);
uint16_t onewire_crc16(const uint8_t* input, uint16_t len, uint16_t crc);
int onewire_check_crc16(const uint8_t* input, uint16_t len, const uint8_t* inverted_crc, uint16_t crc);
