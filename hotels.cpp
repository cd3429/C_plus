/*

WAP to get and display N numbers of Hotels and static
information using encapsulation with array of objects
member by including below mentioned attributes:
- hotel_id
- hotel_name
- hotel_type (like hotel or motel)
- hotel_rating (like 1 Star, 2 Start, ..., 7 Star)
- hotel_location (city name)
- hotel_establish_year
- hotel_staff_quantity
- hotel_room_quantity

*/

#include <stdio.h>

struct hotel {
    int hotel_id;
    char hotel_name[50];
    char hotel_type[20];
    char hotel_rating[20];
    char hotel_location[50];
    int hotel_establish_year;
    int hotel_staff_quantity;
    int hotel_room_quantity;
};

int main() {
    int n, i;
    struct hotel hotels[100];

    printf("Enter the number of hotels: ");
    scanf("%d", &n);

    // Get information for each hotel
    for (i = 0; i < n; i++) {
        printf("\nEnter information for hotel %d:\n", i + 1);
        printf("Hotel ID: ");
        scanf("%d", &hotels[i].hotel_id);
        printf("Hotel Name: ");
        scanf("%s", hotels[i].hotel_name);
        printf("Hotel Type: ");
        scanf("%s", hotels[i].hotel_type);
        printf("Hotel Rating: ");
        scanf("%s", hotels[i].hotel_rating);
        printf("Hotel Location: ");
        scanf("%s", hotels[i].hotel_location);
        printf("Hotel Established Year: ");
        scanf("%d", &hotels[i].hotel_establish_year);
        printf("Hotel Staff Quantity: ");
        scanf("%d", &hotels[i].hotel_staff_quantity);
        printf("Hotel Room Quantity: ");
        scanf("%d", &hotels[i].hotel_room_quantity);
    }

    // Display information for each hotel
    printf("\nHotel Information:\n");
    for (i = 0; i < n; i++) {
        printf("\nInformation for hotel %d:\n", i + 1);
        printf("Hotel ID: %d\n", hotels[i].hotel_id);
        printf("Hotel Name: %s\n", hotels[i].hotel_name);
        printf("Hotel Type: %s\n", hotels[i].hotel_type);
        printf("Hotel Rating: %s\n", hotels[i].hotel_rating);
        printf("Hotel Location: %s\n", hotels[i].hotel_location);
        printf("Hotel Established Year: %d\n", hotels[i].hotel_establish_year);
        printf("Hotel Staff Quantity: %d\n", hotels[i].hotel_staff_quantity);
        printf("Hotel Room Quantity: %d\n", hotels[i].hotel_room_quantity);
    }

    return 0;
}

