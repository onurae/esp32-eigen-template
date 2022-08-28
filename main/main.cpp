/******************************************************************************************
*                                                                                         *
*    ESP32 - Eigen Library Template Project                                               *
*                                                                                         *
*    Copyright (c) 2022 Onur AKIN <https://github.com/onurae>                             *
*    Licensed under the MIT License.                                                      *
*                                                                                         *
******************************************************************************************/

#include <stdio.h>
#include "freertos/FreeRTOS.h"
#include "freertos/task.h"
#include "Eigen/Dense"
#include <iostream>

extern "C"
{
    void app_main();
}

void app_main(void)
{
    Eigen::Matrix2d m;
    Eigen::Matrix2d n;
    m << 1.0, 2.0, 3.0, 4.0;
    n << 5.0, 6.0, 7.0, 8.0;
    Eigen::MatrixXd r = m * n;
    std::cout << "Hi Eigen Library!" << std::endl;
    std::cout << r << std::endl;
}