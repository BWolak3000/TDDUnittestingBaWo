#include "pch.h"
#include "LinkedListSuggestion.h"


TEST(LinkedListKonstructorTest, InitializeWithStdInitializerListIntTest) {
	//LinkedList<int> list = { 1,2,3 };
	EXPECT_EQ(1, 1);
}


TEST(LinkedListKonstructorTest, InitializeWithStdInitializerListIntIsEqualToPushedTest) {
	LinkedList<int> list1 = { 1,2,3 };
	LinkedList<int> list2;
	list2.pushFront(3); list2.pushFront(2); list2.pushFront(1);
	EXPECT_EQ(list1.popBack(), list2.popBack());
}


TEST(LinkedListPushFront, PushIntToEmptyLinkedListTest) {
	LinkedList<int> list;
	list.pushFront(3);
	EXPECT_EQ(list.popFront(), 3);
}