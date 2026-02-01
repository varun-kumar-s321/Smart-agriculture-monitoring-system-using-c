#include <stdio.h>

int main() {
    int soil_moisture;
    float temperature, humidity;

    while (1) {
        printf("\n--- Smart Agriculture Monitoring System ---\n");

        printf("Enter Soil Moisture (0-100): ");
        scanf("%d", &soil_moisture);

        printf("Enter Temperature (°C): ");
        scanf("%f", &temperature);

        printf("Enter Humidity (%%): ");
        scanf("%f", &humidity);

        printf("\n--- Sensor Status ---\n");
        printf("Soil Moisture: %d%%\n", soil_moisture);
        printf("Temperature : %.2f °C\n", temperature);
        printf("Humidity    : %.2f %%\n", humidity);

        if (soil_moisture < 30) {
            printf("Irrigation Status: ON (Soil is Dry)\n");
        } else {
            printf("Irrigation Status: OFF (Soil is Wet)\n");
        }

        printf("-----------------------------------------\n");
    }

    return 0;
}

