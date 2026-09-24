#include <stdio.h>
#include <stdbool.h>
#include <strings.h>


const int TALL_LIMIT = 2;


bool is_tall(float height) {

   if (height >= TALL_LIMIT) {
    return true;
   }
    else {

        return false;
    }

}

bool and(bool left, bool right) {

  return left && right;

}

// homework

// or means left or right are true
bool or(bool left, bool right) {
    return left || right;
}

// exclusive or. so its only true when one is true
bool xor(bool left, bool right) {
   return (left || right) && !(left && right);
    
}

// opposite of AND. Does what AND doesn't
bool nand(bool left, bool right) {
    return !(left && right); 
}


int main()
{

    bool george = is_tall(2);  // we wrote is_tall to be true if height >= 2
    bool jeremy = is_tall(1.83);  // this means jeremy = false or 0
  

    printf("george %d\n", george);
    printf("jeremy %d\n", jeremy);

    printf("\n\nAre george and jeremy tall?(and) %d", and(george,jeremy));
    printf("\n\nIs george or jeremy tall?(or) %d", or(george,jeremy));
    printf("\n\nIs either George or Jeremy tall, but not both?(xor) %d", xor(george,jeremy));
    printf("\n\nAre George and Jeremy not both tall?(nand) %d", nand(george,jeremy));
  

    return 0;
}