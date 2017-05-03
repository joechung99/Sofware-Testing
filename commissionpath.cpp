#include "commission.cpp"
#include <gtest/gtest.h>
TEST(Nextdaytest,c0){
        EXPECT_EQ(-1,commission(-1,10,10));
	EXPECT_EQ(100,commission(10,10,10));
	EXPECT_EQ(167.5,commission(20,10,10));
	EXPECT_EQ(260,commission(20,20,20));

}

int main(int argc, char** argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
