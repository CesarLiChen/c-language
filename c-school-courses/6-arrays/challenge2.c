/* Use 2D array for weather proram.
 * Find total rainfall for each year,
 * avg. yearly rainfall,
 * avg. monthy rainfall.
 *
 * Hard code 2D array for 5 years. Each year has 12 months.
 * Rainfall amounts can be float.
 *
 */

#include <stdio.h>

int main(void) {

    int years[5] = {2020, 2021, 2022, 2023, 2024};

    float rainfall[5][12] = {
        {23, 91, 93.2, 84, 12, 34, 87, 64, 27, 12.5, 49.1, 50},
        {43, 84, 23.1, 58, 30, 20, 76, 10, 38.3, 29.5, 83, 99},
        {38, 20, 12, 59, 23, 65, 83, 29, 02, 20, 21, 58},
        {29, 43.2, 59.3, 60, 93, 15, 85.2, 98.2, 56, 29.2, 21, 34},
        {2, 3, 1, 6, 2, 7, 3, 9, 3, 6, 3, 2}
    };

    float avgYearlyRainfall = 0;

    for (int i = 0; i < 5; i++) {
        float totalYearRainfall = 0;
        for (int j = 0; j < 12; j++) {
            totalYearRainfall += rainfall[i][j];
        }

        avgYearlyRainfall += totalYearRainfall;

        printf("Total rainfall for the year %d was %.2f.\n",
               years[i], totalYearRainfall);
    }
    printf("The yearly average is %.2f.\n",
           avgYearlyRainfall/12.0);

    for (int month = 0; month < 12; month++) {
        float totalMonthlyRainfall = 0;
        for (int y = 0; y < 5; y++) {
            totalMonthlyRainfall += rainfall[y][month];
        }
        printf("Month %2d avg = %.2f\n", month+1, totalMonthlyRainfall/5);
    }

    return 0;
}
