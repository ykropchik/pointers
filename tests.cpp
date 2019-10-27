//
// Created by YKROPCHIK on 27.10.2019.
//

#include "gtest/gtest.h"
#include "lib.h"

int *filling(int *pointer, unsigned int a){
    switch (a){
        case 1:
            pointer[0] = 1;
            pointer[1] = 2;
            pointer[2] = 3;
            pointer[3] = 4;
            pointer[4] = 5;
            break;
        case 2:
            pointer[0] = 10;
            pointer[1] = 20;
            pointer[2] = 3;
            pointer[3] = -20;
            pointer[4] = 11;
            pointer[5] = 123;
            pointer[6] = 12;
            pointer[7] = -164;
            pointer[8] = 12;
            pointer[9] = 312;
            break;
        case 3:
            pointer[0] = 123;
            pointer[1] = 542;
            pointer[2] = -243;
            pointer[3] = 736;
            pointer[4] = -918;
            pointer[5] = 32;
            break;
        case 4:
            pointer[0] = 3000;
            pointer[1] = -3001;
            break;
            
    }
    return pointer;
}

TEST(fib, expectedNum){
    int result = 0;
    int *pointer = new int [5];
    
    result = (sum(filling(pointer, 1), 5));
    EXPECT_EQ(15, result);
    
    result = (sum(filling(pointer, 2), 10));
    EXPECT_EQ(319, result);
    
    result = (sum(filling(pointer, 3), 6));
    EXPECT_EQ(272, result);
    
    result = (sum(filling(pointer, 4), 2));
    EXPECT_EQ(-1, result);
}

int main(int argc, char **argv){
    ::testing::InitGoogleTest(&argc, argv);
    return RUN_ALL_TESTS();
}

