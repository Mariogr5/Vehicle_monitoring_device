#ifndef wifi_hpp
#define wifi_hpp

#include <WiFi.h>

void setup_wifi(const char* ssid, const char* password);
void wifi_deinit();
bool connect(uint32_t timeout);

#endif