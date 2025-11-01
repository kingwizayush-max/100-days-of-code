#include <stdio.h>

enum ShapeType {
    CIRCLE,
    RECTANGLE
};

union ShapeData {
    float radius;
    struct {
        float width;
        float height;
    } rectangle;
};

struct Shape {
    enum ShapeType type;
    union ShapeData data;
};

// Function to calculate area based on shape type
float calculateArea(struct Shape *s) {
    if (s->type == CIRCLE) {
        return 3.14159 * s->data.radius * s->data.radius;
    } else {
        return s->data.rectangle.width * s->data.rectangle.height;
    }
}

int main() {
    struct Shape shape;
    int choice;
    
    printf("Enter shape type (1 for Circle, 2 for Rectangle): ");
    scanf("%d", &choice);
    
    if (choice == 1) {
        shape.type = CIRCLE;
        printf("Enter radius: ");
        scanf("%f", &shape.data.radius);
        printf("Area of circle: %.2f\n", calculateArea(&shape));
    } else if (choice == 2) {
        shape.type = RECTANGLE;
        printf("Enter width: ");
        scanf("%f", &shape.data.rectangle.width);
        printf("Enter height: ");
        scanf("%f", &shape.data.rectangle.height);
        printf("Area of rectangle: %.2f\n", calculateArea(&shape));
    } else {
        printf("Invalid choice!\n");
    }
    
    return 0;
}

