/*
 * main.cpp
 *
 *  Created on: Sep 11, 2017
 *      Author: willy
 */


#include "../google/gmock-1.7.0/googlemock/include/gmock/gmock.h"

int main(int argc, char* argv[]) {
  ::testing::InitGoogleMock(&argc, argv);
  return RUN_ALL_TESTS();
}
