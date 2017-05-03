#include "Nextday.cpp"
#include <gtest/gtest.h>
TEST(Nextdaytest,c0){
        EXPECT_EQ(0,judgTrangle::trangletype(1,100,200));
        EXPECT_EQ(1,judgTrangle::trangletype(200,200,200));
        EXPECT_EQ(2,judgTrangle::trangletype(100,150,199));
        EXPECT_EQ(3,judgTrangle::trangletype(1,200,200));
}
TEST(Nextdaytest,c1andMCDC){
        EXPECT_EQ(0,judgTrangle::trangletype(201,100,100));
        EXPECT_EQ(0,judgTrangle::trangletype(100,201,100));
        EXPECT_EQ(0,judgTrangle::trangletype(100,100,201));
        EXPECT_EQ(0,judgTrangle::trangletype(150,100,10));
        EXPECT_EQ(0,judgTrangle::trangletype(100,150,10));
        EXPECT_EQ(0,judgTrangle::trangletype(100,10,150));
        EXPECT_EQ(1,judgTrangle::trangletype(150,150,150));
        EXPECT_EQ(2,judgTrangle::trangletype(100,150,200));
        EXPECT_EQ(3,judgTrangle::trangletype(150,150,200));
}


int main(int argc, char** argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
