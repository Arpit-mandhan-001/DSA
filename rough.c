#include <stdio.h>

// Function to calculate MTTR (Mean Time to Repair)
double calculate_mttr(double repair_times[], int num_repairs) {
    double total_repair_time = 0.0;

    for (int i = 0; i < num_repairs; i++) {
        total_repair_time += repair_times[i];
    }

    return total_repair_time / num_repairs;
}

// Function to calculate MTBF (Mean Time Between Failures)
double calculate_mtbf(double operational_times[], int num_failures) {
    double total_operational_time = 0.0;

    for (int i = 0; i < num_failures; i++) {
        total_operational_time += operational_times[i];
    }

    return total_operational_time / num_failures;
}

// Function to calculate Availability
double calculate_availability(double mttr, double mtbf) {
    return (mtbf / (mtbf + mttr)) * 100;
}

int main() {
    int num_repairs, num_failures;

    // Input the number of repair instances
    printf("Enter the number of repair instances: ");
    scanf("%d", &num_repairs);

    double repair_times[num_repairs];

    // Input the repair times for each repair instance
    printf("Enter repair times (in hours) for each repair instance:\n");
    for (int i = 0; i < num_repairs; i++) {
        printf("Repair %d: ", i + 1);
        scanf("%lf", &repair_times[i]);
    }

    // Input the number of operational intervals between failures
    printf("\nEnter the number of operational intervals between failures: ");
    scanf("%d", &num_failures);

    double operational_times[num_failures];

    // Input the operational times for each interval between failures
    printf("Enter operational times (in hours) for each interval between failures:\n");
    for (int i = 0; i < num_failures; i++) {
        printf("Operational Interval %d: ", i + 1);
        scanf("%lf", &operational_times[i]);
    }

    // Calculate metrics
    double mttr = calculate_mttr(repair_times, num_repairs);
    double mtbf = calculate_mtbf(operational_times, num_failures);
    double availability = calculate_availability(mttr, mtbf);

    // Display results
    printf("\n[Maintenance Metrics]\n");
    printf("MTTR (Mean Time to Repair): %.2f hours\n", mttr);
    printf("MTBF (Mean Time Between Failures): %.2f hours\n", mtbf);
    printf("Availability: %.2f%%\n", availability);

    return 0;
}
