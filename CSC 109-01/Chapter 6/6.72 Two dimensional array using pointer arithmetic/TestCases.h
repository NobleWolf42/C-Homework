/*
Copyright 2024
Author: Ben Carpenter
*/

#ifndef TESTCASES_H
#define TESTCASES_H

#include <cxxtest/TestSuite.h>
//Include your classes header file(s) below and uncomment.
#include "TwoDArray.h"

class TestCases : public CxxTest::TestSuite {
public:

    //All tests should start with the word 'test' followed by
    //the name of the function being tested.

    void testSetAndGetRow() {
        int r = 6, c = 7;
        double* the_array = new double[r*c];
        double* row0 = new double[c];
        double* row1 = new double[c];
        double* row2 = new double[c];
        double* row3 = new double[c];
        double* row4 = new double[c];
        double* row5 = new double[c];
        double* pulledRow0 = new double[c];
        double* pulledRow1 = new double[c];
        double* pulledRow2 = new double[c];
        double* pulledRow3 = new double[c];
        double* pulledRow4 = new double[c];
        double* pulledRow5 = new double[c];

        row0[0] = 11;
        row0[1] = 2;
        row0[2] = 3;
        row0[3] = 4;
        row0[4] = 5;
        row0[5] = 6;
        row0[6] = 7;
        set_row(the_array, 0, 7, row0);
    
        row1[0] = 10;
        row1[1] = 9;
        row1[2] = 8;
        row1[3] = 7;
        row1[4] = 6;
        row1[5] = 5;
        row1[6] = 4;
        set_row(the_array, 1, 7, row1);
    
        row2[0] = 12;
        row2[1] = 11;
        row2[2] = 11;
        row2[3] = 11;
        row2[4] = 11;
        row2[5] = 31;
        row2[6] = 11;
        set_row(the_array, 2, 7, row2);
    
        row3[0] = 5;
        row3[1] = 5;
        row3[2] = 5;
        row3[3] = 5;
        row3[4] = 5;
        row3[5] = 5;
        row3[6] = 5;
        set_row(the_array, 3, 7, row3);
    
        row4[0] = 12;
        row4[1] = 3;
        row4[2] = 4;
        row4[3] = 9;
        row4[4] = 8;
        row4[5] = 7;
        row4[6] = 6;
        set_row(the_array, 4, 7, row4);

        row5[0] = 12;
        row5[1] = 3;
        row5[2] = 4;
        row5[3] = 9;
        row5[4] = 8;
        row5[5] = 7;
        row5[6] = 6;
        set_row(the_array, 5, 7, row5);

        pulledRow3 = get_row(the_array, 3, 7);

        TS_ASSERT_EQUALS(pulledRow3[3], row3[3]);
    

    }

    void testSetAndGetElement() {
        int r = 6, c = 7;
        double* the_array = new double[r*c];
        double* row0 = new double[c];
        double* row1 = new double[c];
        double* row2 = new double[c];
        double* row3 = new double[c];
        double* row4 = new double[c];
        double* row5 = new double[c];
        double* row6 = new double[c];

        row0[0] = 11;
        row0[1] = 2;
        row0[2] = 3;
        row0[3] = 4;
        row0[4] = 5;
        row0[5] = 6;
        row0[6] = 7;
        set_row(the_array, 0, 7, row0);
    
        row1[0] = 10;
        row1[1] = 9;
        row1[2] = 8;
        row1[3] = 7;
        row1[4] = 6;
        row1[5] = 5;
        row1[6] = 4;
        set_row(the_array, 1, 7, row1);
    
        row2[0] = 12;
        row2[1] = 11;
        row2[2] = 11;
        row2[3] = 11;
        row2[4] = 11;
        row2[5] = 31;
        row2[6] = 11;
        set_row(the_array, 2, 7, row2);
    
        row3[0] = 5;
        row3[1] = 5;
        row3[2] = 5;
        row3[3] = 5;
        row3[4] = 5;
        row3[5] = 5;
        row3[6] = 5;
        set_row(the_array, 3, 7, row3);
    
        row4[0] = 12;
        row4[1] = 3;
        row4[2] = 4;
        row4[3] = 9;
        row4[4] = 8;
        row4[5] = 7;
        row4[6] = 6;
        set_row(the_array, 4, 7, row4);

        row5[0] = 12;
        row5[1] = 3;
        row5[2] = 4;
        row5[3] = 9;
        row5[4] = 8;
        row5[5] = 7;
        row5[6] = 6;
        set_row(the_array, 5, 7, row5);

        set_element(the_array, 1, 7, 3, 55.00);

        TS_ASSERT_EQUALS(get_element(the_array, 1, 7, 3), 55.00);


    }

    void testSum() {
        int r = 6, c = 7;
        double* the_array = new double[r*c];
        double* row0 = new double[c];
        double* row1 = new double[c];
        double* row2 = new double[c];
        double* row3 = new double[c];
        double* row4 = new double[c];
        double* row5 = new double[c];
        double* row6 = new double[c];

        row0[0] = 11;
        row0[1] = 2;
        row0[2] = 3;
        row0[3] = 4;
        row0[4] = 5;
        row0[5] = 6;
        row0[6] = 7;
        set_row(the_array, 0, 7, row0);
    
        row1[0] = 10;
        row1[1] = 9;
        row1[2] = 8;
        row1[3] = 7;
        row1[4] = 6;
        row1[5] = 5;
        row1[6] = 4;
        set_row(the_array, 1, 7, row1);
    
        row2[0] = 12;
        row2[1] = 11;
        row2[2] = 11;
        row2[3] = 11;
        row2[4] = 11;
        row2[5] = 31;
        row2[6] = 11;
        set_row(the_array, 2, 7, row2);
    
        row3[0] = 5;
        row3[1] = 5;
        row3[2] = 5;
        row3[3] = 5;
        row3[4] = 5;
        row3[5] = 5;
        row3[6] = 5;
        set_row(the_array, 3, 7, row3);
    
        row4[0] = 12;
        row4[1] = 3;
        row4[2] = 4;
        row4[3] = 9;
        row4[4] = 8;
        row4[5] = 7;
        row4[6] = 6;
        set_row(the_array, 4, 7, row4);

        row5[0] = 12;
        row5[1] = 3;
        row5[2] = 4;
        row5[3] = 9;
        row5[4] = 8;
        row5[5] = 7;
        row5[6] = 6;
        set_row(the_array, 5, 7, row5);

        TS_ASSERT_EQUALS(sum(the_array, 6, 7), 318.00);

    }

    void testMaxAndMin() {
        int r = 6, c = 7;
        double* the_array = new double[r*c];
        double* row0 = new double[c];
        double* row1 = new double[c];
        double* row2 = new double[c];
        double* row3 = new double[c];
        double* row4 = new double[c];
        double* row5 = new double[c];
        double* row6 = new double[c];

        row0[0] = 11;
        row0[1] = 2;
        row0[2] = 3;
        row0[3] = 4;
        row0[4] = 5;
        row0[5] = 6;
        row0[6] = 7;
        set_row(the_array, 0, 7, row0);
    
        row1[0] = 10;
        row1[1] = 9;
        row1[2] = 8;
        row1[3] = 7;
        row1[4] = 6;
        row1[5] = 5;
        row1[6] = 4;
        set_row(the_array, 1, 7, row1);
    
        row2[0] = 12;
        row2[1] = 11;
        row2[2] = 11;
        row2[3] = 11;
        row2[4] = 11;
        row2[5] = 31;
        row2[6] = 11;
        set_row(the_array, 2, 7, row2);
    
        row3[0] = 5;
        row3[1] = 5;
        row3[2] = 5;
        row3[3] = 5;
        row3[4] = 5;
        row3[5] = 5;
        row3[6] = 5;
        set_row(the_array, 3, 7, row3);
    
        row4[0] = 12;
        row4[1] = 3;
        row4[2] = 4;
        row4[3] = 9;
        row4[4] = 8;
        row4[5] = 7;
        row4[6] = 6;
        set_row(the_array, 4, 7, row4);

        row5[0] = 12;
        row5[1] = 3;
        row5[2] = 4;
        row5[3] = 9;
        row5[4] = 8;
        row5[5] = 7;
        row5[6] = 6;
        set_row(the_array, 5, 7, row5);

        TS_ASSERT_EQUALS(find_max(the_array, 6, 7), 31.00);
        TS_ASSERT_EQUALS(find_min(the_array, 6, 7), 2.00);

    }

    void testString() {
        int r = 6, c = 7;
        double* the_array = new double[r*c];
        double* row0 = new double[c];
        double* row1 = new double[c];
        double* row2 = new double[c];
        double* row3 = new double[c];
        double* row4 = new double[c];
        double* row5 = new double[c];
        double* row6 = new double[c];

        row0[0] = 11;
        row0[1] = 2;
        row0[2] = 3;
        row0[3] = 4;
        row0[4] = 5;
        row0[5] = 6;
        row0[6] = 7;
        set_row(the_array, 0, 7, row0);
    
        row1[0] = 10;
        row1[1] = 9;
        row1[2] = 8;
        row1[3] = 7;
        row1[4] = 6;
        row1[5] = 5;
        row1[6] = 4;
        set_row(the_array, 1, 7, row1);
    
        row2[0] = 12;
        row2[1] = 11;
        row2[2] = 11;
        row2[3] = 11;
        row2[4] = 11;
        row2[5] = 31;
        row2[6] = 11;
        set_row(the_array, 2, 7, row2);
    
        row3[0] = 5;
        row3[1] = 5;
        row3[2] = 5;
        row3[3] = 5;
        row3[4] = 5;
        row3[5] = 5;
        row3[6] = 5;
        set_row(the_array, 3, 7, row3);
    
        row4[0] = 12;
        row4[1] = 3;
        row4[2] = 4;
        row4[3] = 9;
        row4[4] = 8;
        row4[5] = 7;
        row4[6] = 6;
        set_row(the_array, 4, 7, row4);

        row5[0] = 12;
        row5[1] = 3;
        row5[2] = 4;
        row5[3] = 9;
        row5[4] = 8;
        row5[5] = 7;
        row5[6] = 6;
        set_row(the_array, 5, 7, row5);

        TS_ASSERT_EQUALS(to_string(the_array, 6, 7), "     11.00      2.00      3.00      4.00      5.00      6.00      7.00\n     10.00      9.00      8.00      7.00      6.00      5.00      4.00\n     12.00     11.00     11.00     11.00     11.00     31.00     11.00\n      5.00      5.00      5.00      5.00      5.00      5.00      5.00\n     12.00      3.00      4.00      9.00      8.00      7.00      6.00\n     12.00      3.00      4.00      9.00      8.00      7.00      6.00\n");


    }

};
#endif /* TESTCASES_H */
