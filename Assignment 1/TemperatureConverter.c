#include <stdio.h>

// prototypes
float celsiusToFahrenheit(float c);
float fahrenheitToCelsius(float f);

int main()
{
    float c = 35.0;
    float f = 95.0;

    float resultF = celsiusToFahrenheit(c);
    float resultC = fahrenheitToCelsius(f);

    printf("Celsius to Fahrenheit:\n");
    printf("%.2f C = %.2f F\n\n", c, resultF);

    printf("Fahrenheit to Celsius:\n");
    printf("%.2f F = %.2f C\n", f, resultC);

    return 0;
}

// definitions
float celsiusToFahrenheit(float c)
{
    return (c * 9/5) + 32;
}

float fahrenheitToCelsius(float f)
{
    return (f - 32) * 5/9;
}