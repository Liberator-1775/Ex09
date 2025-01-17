// Copyright 2020 GHA Test Team
#include "MyStack.h"

#include <gtest/gtest.h>
#include <string>

TEST(MyStackTest, test1) {
  MyStack<int> st(5);
  EXPECT_EQ(true, st.isEmpty());
}

TEST(MyStackTest, test2) {
    MyStack<int> st(5);
    for (int i = 0; i < 5; i++) {
        st.push(rand_r());
    }
    EXPECT_EQ(true, st.isFull());
}

TEST(MyStackTest, test3) {
    MyStack<int> st(5);
    st.push(5);
    st.push(10);
    int a = st.pop();
    EXPECT_EQ(10, a);
}

TEST(MyStackTest, test4) {
    MyStack<int> st(5);
    st.push(5);
    st.push(10);
    st.pop();
    EXPECT_EQ(5, st.get());
}

TEST(MyStackTest, test5) {
    MyStack<int> st1(5);
    st1.push(5);
    st1.push(10);
    MyStack<int> st2 = st1;
    EXPECT_EQ(10, st2.get);
}

TEST(MyStackTest, test6) {
    MyStack<double> st(5);
    st.push(1.0);
    st.push(2.0);
    st.pop();
    EXPECT_DOUBLE_EQ(1.0, st.get());
}

TEST(MyStackTest, test7) {
    MyStack<float> st(5);
    st.push(1.1);
    st.push(2.2);
    st.pop();
    EXPECT_DOUBLE_EQ(2.2, st.get());
}

TEST(MyStackTest, test8) {
    MyStack<char> st(5);
    st.push('a');
    st.push('b');
    EXPECT_EQ('b', st.get());
}

TEST(MyStackTest, test9) {
    MyStack<bool> st(5);
    st.push(true);
    st.push(false);
    EXPECT_EQ(false, st.get());
}

TEST(MyStackTest, test10) {
    MyStack<std::string> st(5);
    st.push("abc");
    st.push("123");
    EXPECT_EQ("123", st.get());
}
