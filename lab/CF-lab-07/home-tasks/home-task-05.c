#include <stdio.h>

void get_dimensions(float *length, float *width, char *dimension_type);
void calculate_grass_area(float *yard_length, float *yard_width, float *house_length, float *house_width, float *grass_area);
void cost_of_cutting_grass(float *grass_area, float *unit_cost, float *total_cost);

int main() {
    float unit_cost = 15;
    float yard_length, yard_width, house_length, house_width;
    float grass_area, total_cost;
    get_dimensions(&yard_length, &yard_width, "Yard");
    get_dimensions(&house_length, &house_width, "House");
    calculate_grass_area(&yard_length, &yard_width, &house_length, &house_width, &grass_area);
    cost_of_cutting_grass(&grass_area, &unit_cost, &total_cost);
    printf("Total Cost of Grass Cutting: %.2f\n", total_cost);
    getchar();
    return 0;
}

void get_dimensions(float *length, float *width, char *dimension_type) {
    printf("Enter Length of %s: ", dimension_type);
    scanf("%f", length);
    printf("Enter Width of %s: ", dimension_type);
    scanf("%f", width);
}

void calculate_grass_area(float *yard_length, float *yard_width, float *house_length, float *house_width, float *grass_area) {
    float yard_area = (float)(*yard_length) * (*yard_width);
    float house_area = (float)(*house_length) * (*house_width);
    *grass_area = yard_area - house_area;
}

void cost_of_cutting_grass(float *grass_area, float *unit_cost, float *total_cost) { *total_cost = (*grass_area) * (*unit_cost); }
