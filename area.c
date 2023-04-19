#include <stdio.h>

int main() {
  int fig_code;
    float side, base, length, breadth, height, area, radius,lbase,sbase,minorrad;
    printf(" 1 --> Parallelogram\n");
    printf(" 2 --> Trapezoid\n");
    printf(" 3 --> Rhombus\n");
    printf(" 4 --> Sphere\n");
    printf(" 5 --> ellipse\n");

    printf("Enter the Figure code\n");
    scanf("%d", &fig_code);
    switch(fig_code)
    {
    case 1:
        printf("Enter the base\n");
        scanf("%f", &base);
        printf("Enter the height\n");
        scanf("%f", &height);
        area = base*height;
        printf("Area of a parallelogram = %f\n", area);
        break;
    case 2:
       printf("Enter the height\n");
        scanf("%f", &height);
        printf("Enter the long base\n");
        scanf("%f", &lbase);
        printf("Enter the short base\n");
        scanf("%f", &sbase);
        area = ((lbase+sbase)/2)*height;
        printf("Area of a Trapezoid = %f\n", area);
        break;
    case 3:
        printf("Enter the height\n");
        scanf("%f", &height);
        printf("Enter the side\n");
        scanf("%f", &side);
        area = height*side;
        printf("Area of a Rhombus = %f\n", area);
        break;
    case 4:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        area = 3.142*radius*radius*4;
        printf("Area of a sphere=%f\n", area);
        break;
    case 5:
        printf("Enter the radius\n");
        scanf("%f", &radius);
        printf("Enter the minor radius\n");
        scanf("%f", &minorrad);
        area = 3.142*radius*minorrad;
        printf("Area of a ellipse=%f\n", area);
        break;    
    default:
        printf("Error in figure code\n");
        break;
    }

}
