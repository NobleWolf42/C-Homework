/*
Author: Ben Carpenter
Copyright: 2024
*/

#ifndef TESTCASES_H
#define TESTCASES_H

#include <cxxtest/TestSuite.h>

//Include your classes header file(s) below and uncomment.
#include "AVL_Tree.h"
#include <string>
#include <iostream>
#include <fstream>

class TestCases : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testAVL() {
        AVL_Tree<int> test1;
        AVL_Tree<int> test2;
        AVL_Tree<int> test3;
        AVL_Tree<std::string> test4;

        std::ifstream testFile1 ("D:/Hardlinks/Documents/School/CSC-Homework/CSC 211-B1/CH11HW - AVL Tree/BSTtest1.txt");
        std::ifstream testFile2 ("D:/Hardlinks/Documents/School/CSC-Homework/CSC 211-B1/CH11HW - AVL Tree/BSTtest2.txt");
        std::ifstream testFile3 ("D:/Hardlinks/Documents/School/CSC-Homework/CSC 211-B1/CH11HW - AVL Tree/BSTtest3.txt");
        std::ifstream testFile4 ("D:/Hardlinks/Documents/School/CSC-Homework/CSC 211-B1/CH11HW - AVL Tree/BSTtest4.txt");

        if (testFile1.is_open()) {
            int testInt1 = 0; 
            std::cout << "File 1" << std::endl;
            while (testFile1) {
                testFile1 >> testInt1;
                test1.insert(testInt1);
                std::cout << testInt1 << std::endl;
            }
        } else {
            std::cout << "File 1 not read." << std::endl;
        }

        if (testFile2.is_open()) {
            int testInt2 = 0;
            std::cout << "File 2" << std::endl;
            while (testFile2) {
                testFile2 >> testInt2;
                test2.insert(testInt2);
                std::cout << testInt2 << std::endl;
            }
        } else {
            std::cout << "File 2 not read." << std::endl;
        }

        if (testFile3.is_open()) {
            int testInt3 = 0;
            std::cout << "File 3" << std::endl;
            while (testFile3) {
                testFile3 >> testInt3;
                test3.insert(testInt3);
                std::cout << testInt3 << std::endl;
            }
        } else {
            std::cout << "File 3 not read." << std::endl;
        }

        if (testFile4.is_open()) {
            std::string testStr4 = "";
            std::cout << "File 4" << std::endl;
            while (testFile4) {
                testFile4 >> testStr4;
                test4.insert(testStr4);
                std::cout << testStr4 << std::endl;
            }
        } else {
            std::cout << "File 4 not read." << std::endl;
        }

        std::cout << "Test 4 Output:" << std::endl << std::endl << test4;
        
        TS_ASSERT(test1.find(31));
        TS_ASSERT(test2.find(41));
        TS_ASSERT(test3.find(51));
        TS_ASSERT(test4.find("lazy"));

        TS_ASSERT(test1.erase(31));
        TS_ASSERT(test2.erase(41));
        TS_ASSERT(test3.erase(51));
        TS_ASSERT(test4.erase("lazy"));

        TS_ASSERT(!test1.find(31));
        TS_ASSERT(!test2.find(41));
        TS_ASSERT(!test3.find(51));
        TS_ASSERT(!test4.find("lazy"));

        std::cout << "Test 4 Output:" << std::endl << std::endl << test4;

    }

};
#endif /* TESTCASES_H */
