

int main(void) {
    // declaration
    float wight, height, perimeter, area;


    // data entering
    printf("Enter rectangle wight\n");
    scanf("%f", &wight);

    printf("Enter rectangle height\n");
    scanf("%f", &height);

    printf("\n\n");

    //calculation
    perimeter = 2.0 * (wight+height);
    area = wight * height;

    //desplay
    printf("Rectangle with:\n wight = %.2f \n height = %.2f\n", wight, height);
    printf("Perimeter = %.2f\n", perimeter);
    printf("Aria = %.2f\n", area);

    return 0;
}