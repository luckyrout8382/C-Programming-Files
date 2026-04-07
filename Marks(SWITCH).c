//Marks..
#include <stdio.h>

int main() {
    int marks;
    printf("Enter student marks: ");
    scanf("%d", &marks);

    switch (marks >= 75) {
        case 1:printf("1st Divsion.");break;
        case 0:switch (marks >= 60) {
                case 1:printf("2nd Division.");break;
                case 0:switch (marks >= 35) {
                        case 1:printf("3rd Divison.");break;
                        case 0:printf("Fail");
                    }
            }
    }

    return 0;
}

