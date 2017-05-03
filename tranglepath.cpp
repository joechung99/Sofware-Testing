#include "trangle.cpp"
#include <gtest/gtest.h>
// trangletype 0代表not trangle 1代表Equilateral 2代表 Scalene 3代表Isosceles

TEST(trangletest,c0){
	EXPECT_EQ(0,judgTrangle::trangletype(1,100,200));
	EXPECT_EQ(1,judgTrangle::trangletype(200,200,200));
	EXPECT_EQ(2,judgTrangle::trangletype(100,150,199));
	EXPECT_EQ(3,judgTrangle::trangletype(1,200,200));
}
TEST(trangletest,c1andMCDC){
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
