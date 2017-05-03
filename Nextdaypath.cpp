#include "Nextday.cpp"
#include <gtest/gtest.h>
TEST(Nextdaytest,c0){
        EXPECT_EQ(-1,Nextday(1811,1,1));
        EXPECT_EQ(20000102,Nextday(2000,1,1));
        EXPECT_EQ(19990301,Nextday(1999,2,28));
        EXPECT_EQ(20000301,Nextday(2000,2,29));
	EXPECT_EQ(20000401,Nextday(2000,3,31));
}
TEST(Nextdaytest,c1andMCDC){
        EXPECT_EQ(-1,Nextday(1811,1,1));
	EXPECT_EQ(-1,Nextday(1991,2,29));
        EXPECT_EQ(20000102,Nextday(2000,1,1));
        EXPECT_EQ(19990301,Nextday(1999,2,28));
        EXPECT_EQ(20000301,Nextday(2000,2,29));
        EXPECT_EQ(20000401,Nextday(2000,3,31));
        EXPECT_EQ(20000501,Nextday(2000,4,30));
	EXPECT_EQ(20010101,Nextday(2000,12,31));
}

int main(int argc, char** argv) {
        testing::InitGoogleTest(&argc, argv);
        return RUN_ALL_TESTS();
}
