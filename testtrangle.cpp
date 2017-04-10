#include "trangle.cpp"
#include <gtest/gtest.h>
// trangletype 0代表not trangle 1代表Equilateral 2代表 Scalene 3代表Isosceles
TEST(trangletest,boundryvalue){
	EXPECT_EQ(0,judgTrangle::trangletype(1,100,200));
	EXPECT_EQ(0,judgTrangle::trangletype(1,100,201));
	EXPECT_EQ(1,judgTrangle::trangletype(200,200,200));
	EXPECT_EQ(2,judgTrangle::trangletype(110,100,200));
	EXPECT_EQ(3,judgTrangle::trangletype(1,200,200));
}
TEST(triangletest, Equivalence){
	EXPECT_EQ(0,judgTrangle::trangletype(10,10,-10));
	EXPECT_EQ(0,judgTrangle::trangletype(200,5,5));
	EXPECT_EQ(1,judgTrangle::trangletype(10,10,10));
	EXPECT_EQ(3,judgTrangle::trangletype(8,10,10));
}
TEST(triangletest, EdgeTest){
	EXPECT_EQ(0,judgTrangle::trangletype(0,10,10));
	EXPECT_EQ(0,judgTrangle::trangletype(200,10,10));
	EXPECT_EQ(0,judgTrangle::trangletype(201,200,150));
	EXPECT_EQ(1,judgTrangle::trangletype(200,200,200));
	EXPECT_EQ(2,judgTrangle::trangletype(200,100,150));
	EXPECT_EQ(3,judgTrangle::trangletype(200,200,10));
}
int main(int argc, char** argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
