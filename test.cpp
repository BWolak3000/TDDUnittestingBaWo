#include "pch.h"
#include "LinkedListSuggestion.h"

TEST(LinkedListPushFront, PushIntToEmptyLinkedListTest) {
	LinkedList<int> list;
	list.pushFront(3);
	EXPECT_EQ(list.popFront(), 3);
}

TEST(LinkedListPushFront, PushIntToNonEmptyLinkedListTest) {
	LinkedList<int> list;
	list.pushFront(3);
	list.pushFront(2);
	EXPECT_EQ(list.popFront(), 3);
}

TEST(LinkedListPushBack, PushIntToEmptyLinkedListTest) {
	LinkedList<int> list;
	list.pushBack(3);
	EXPECT_EQ(list.popFront(), 3);
}

TEST(LinkedListPushBack, PushIntToNonEmptyLinkedListTest) {
	LinkedList<int> list;
	list.pushBack(3);
	list.pushBack(2);
	EXPECT_EQ(list.popFront(), 3);
}

TEST(LinkedListSize, EmptyListIs0SizeTest) {
	LinkedList<int> list;
	EXPECT_EQ(list.getSize(), 0);
}

TEST(LinkedListSize, ListIs3SizeTest) {
	LinkedList<int> list;
	list.pushBack(3);
	list.pushBack(3);
	list.pushBack(3);
	EXPECT_EQ(list.getSize(), 3);
}

TEST(LinkedListIsEmpty, EmptyListIsEmptyTest) {
	LinkedList<int> list;
	EXPECT_TRUE(list.isEmpty());
}

TEST(LinkedListIsEmpty, NotEmptyListIsnotEmptyTest) {
	LinkedList<int> list;
	list.pushFront(3);
	EXPECT_FALSE(list.isEmpty());
}

TEST(LinkedListPopFront, PopFrontCorrectlyRemovesElementTest) {
	LinkedList<int> list;
	list.pushFront(3);
	list.popFront();
	EXPECT_TRUE(list.isEmpty());
}

TEST(LinkedListPopBack, PopBackCorrectlyRemovesElementTest) {
	LinkedList<int> list;
	list.pushFront(3);
	list.popBack();
	EXPECT_TRUE(list.isEmpty());
}
