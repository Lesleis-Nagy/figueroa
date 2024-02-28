/*
 * @file test_linalg.cpp
 * @author Lesleis Nagy
 * @date 24/02/2024
 * @brief Test linear algebra structures and operations
 */

#define CATCH_CONFIG_MAIN
#include <catch/catch.hpp>

#include "linalg.hpp"

// ######################################################################### //
// # Addition operators.                                                   # //
// ######################################################################### //

TEST_CASE("Vector2 addition", "[Vector2]") {

    Vector2<double> v1 = {1.0, 2.0};
    Vector2<double> v2 = {1.0, 2.0};

    Vector2<double> result = v1 + v2;

    REQUIRE(result.x == 2.0);
    REQUIRE(result.y == 4.0);

}

TEST_CASE("Vector3 addition", "[Vector3]") {

    Vector3<double> v1 = {1.0, 2.0, 3.0};
    Vector3<double> v2 = {1.0, 2.0, 3.0};

    Vector3<double> result = v1 + v2;

    REQUIRE(result.x == 2.0);
    REQUIRE(result.y == 4.0);
    REQUIRE(result.z == 6.0);

}

TEST_CASE("Vector4 addition", "[Vector4]") {

    Vector4<double> v1 = {1.0, 2.0, 3.0, 4.0};
    Vector4<double> v2 = {1.0, 2.0, 3.0, 4.0};

    Vector4<double> result = v1 + v2;

    REQUIRE(result.x == 2.0);
    REQUIRE(result.y == 4.0);
    REQUIRE(result.z == 6.0);
    REQUIRE(result.w == 8.0);

}

TEST_CASE("Matrix2x2 addition", "[Matrix2x2]") {

    Matrix2x2<double> m1 = {1.0, 2.0,
                            3.0, 4.0};

    Matrix2x2<double> m2 = {5.0, 6.0,
                            7.0, 8.0};

    Matrix2x2<double> result = m1 + m2;

    REQUIRE(result(0,0) == 6.0);
    REQUIRE(result(0,1) == 8.0);
    REQUIRE(result(1,0) == 10.0);
    REQUIRE(result(1,1) == 12.0);

}

TEST_CASE("Matrix3x3 addition", "[Matrix3x3]") {

    Matrix3x3<double> m1 = {1.0, 2.0, 3.0,
                            4.0, 5.0, 6.0,
                            7.0, 8.0, 9.0};

    Matrix3x3<double> m2 = { 5.0,  6.0,  7.0,
                             8.0,  9.0, 10.0,
                            11.0, 12.0, 13.0};

    Matrix3x3<double> result = m1 + m2;

    REQUIRE(result(0,0) == 6.0);
    REQUIRE(result(0,1) == 8.0);
    REQUIRE(result(0,2) == 10.0);
    REQUIRE(result(1,0) == 12.0);
    REQUIRE(result(1,1) == 14.0);
    REQUIRE(result(1,2) == 16.0);
    REQUIRE(result(2,0) == 18.0);
    REQUIRE(result(2,1) == 20.0);
    REQUIRE(result(2,2) == 22.0);

}

TEST_CASE("Matrix4x4 addition", "[Matrix4x4]") {

    Matrix4x4<double> m1 = { 1.0,  2.0,  3.0,  4.0,
                             5.0,  6.0,  7.0,  8.0,
                             9.0, 10.0, 11.0, 12.0,
                            13.0, 14.0, 15.0, 16.0};

    Matrix4x4<double> m2 = {  5.0,  6.0,  7.0,  8.0,
                              9.0, 10.0, 11.0, 12.0,
                             13.0, 14.0, 15.0, 16.0,
                             17.0, 18.0, 19.0, 20.0};

    Matrix4x4<double> result = m1 + m2;

    REQUIRE(result(0,0) == 6.0);
    REQUIRE(result(0,1) == 8.0);
    REQUIRE(result(0,2) == 10.0);
    REQUIRE(result(0,3) == 12.0);
    REQUIRE(result(1,0) == 14.0);
    REQUIRE(result(1,1) == 16.0);
    REQUIRE(result(1,2) == 18.0);
    REQUIRE(result(1,3) == 20.0);
    REQUIRE(result(2,0) == 22.0);
    REQUIRE(result(2,1) == 24.0);
    REQUIRE(result(2,2) == 26.0);
    REQUIRE(result(2,3) == 28.0);
    REQUIRE(result(3,0) == 30.0);
    REQUIRE(result(3,1) == 32.0);
    REQUIRE(result(3,2) == 34.0);
    REQUIRE(result(3,3) == 36.0);

}

// ######################################################################### //
// # Subtraction operators.                                                # //
// ######################################################################### //

TEST_CASE("Vector2 subtraction", "[Vector2]") {

    Vector2<double> v1 = {1.0, 2.0};
    Vector2<double> v2 = {1.0, 2.0};

    Vector2<double> result = v1 - v2;

    REQUIRE(result.x == 0.0);
    REQUIRE(result.y == 0.0);

}

TEST_CASE("Vector3 subtraction", "[Vector3]") {

    Vector3<double> v1 = {1.0, 2.0, 3.0};
    Vector3<double> v2 = {1.0, 2.0, 3.0};

    Vector3<double> result = v1 - v2;

    REQUIRE(result.x == 0.0);
    REQUIRE(result.y == 0.0);
    REQUIRE(result.z == 0.0);

}

TEST_CASE("Vector4 subtraction", "[Vector4]") {

    Vector4<double> v1 = {1.0, 2.0, 3.0, 4.0};
    Vector4<double> v2 = {1.0, 2.0, 3.0, 4.0};

    Vector4<double> result = v1 - v2;

    REQUIRE(result.x == 0.0);
    REQUIRE(result.y == 0.0);
    REQUIRE(result.z == 0.0);
    REQUIRE(result.w == 0.0);

}

TEST_CASE("Matrix2x2 subtraction", "[Matrix2x2]") {

    Matrix2x2<double> m1 = {1.0, 2.0,
                            3.0, 4.0};

    Matrix2x2<double> m2 = {5.0, 6.0,
                            7.0, 8.0};

    Matrix2x2<double> result = m1 - m2;

    REQUIRE(result(0,0) == -4.0);
    REQUIRE(result(0,1) == -4.0);
    REQUIRE(result(1,0) == -4.0);
    REQUIRE(result(1,1) == -4.0);

}

TEST_CASE("Matrix3x3 subtraction", "[Matrix3x3]") {

    Matrix3x3<double> m1 = {1.0, 2.0, 3.0,
                            4.0, 5.0, 6.0,
                            7.0, 8.0, 9.0};

    Matrix3x3<double> m2 = { 5.0,  6.0,  7.0,
                             8.0,  9.0, 10.0,
                             11.0, 12.0, 13.0};

    Matrix3x3<double> result = m1 - m2;

    REQUIRE(result(0,0) == -4.0);
    REQUIRE(result(0,1) == -4.0);
    REQUIRE(result(0,2) == -4.0);
    REQUIRE(result(1,0) == -4.0);
    REQUIRE(result(1,1) == -4.0);
    REQUIRE(result(1,2) == -4.0);
    REQUIRE(result(2,0) == -4.0);
    REQUIRE(result(2,1) == -4.0);
    REQUIRE(result(2,2) == -4.0);

}

TEST_CASE("Matrix4x4 subtraction", "[Matrix4x4]") {

    Matrix4x4<double> m1 = {  1.0,  2.0,  3.0,  4.0,
                              5.0,  6.0,  7.0,  8.0,
                              9.0, 10.0, 11.0, 12.0,
                             13.0, 14.0, 15.0, 16.0};

    Matrix4x4<double> m2 = {   5.0,  6.0,  7.0,  8.0,
                               9.0, 10.0, 11.0, 12.0,
                              13.0, 14.0, 15.0, 16.0,
                              17.0, 18.0, 19.0, 20.0};

    Matrix4x4<double> result = m1 - m2;

    REQUIRE(result(0,0) == -4.0);
    REQUIRE(result(0,1) == -4.0);
    REQUIRE(result(0,2) == -4.0);
    REQUIRE(result(0,3) == -4.0);
    REQUIRE(result(1,0) == -4.0);
    REQUIRE(result(1,1) == -4.0);
    REQUIRE(result(1,2) == -4.0);
    REQUIRE(result(1,3) == -4.0);
    REQUIRE(result(2,0) == -4.0);
    REQUIRE(result(2,1) == -4.0);
    REQUIRE(result(2,2) == -4.0);
    REQUIRE(result(2,3) == -4.0);
    REQUIRE(result(3,0) == -4.0);
    REQUIRE(result(3,1) == -4.0);
    REQUIRE(result(3,2) == -4.0);
    REQUIRE(result(3,3) == -4.0);

}

// ######################################################################### //
// # Scalar multiplication operators.                                      # //
// ######################################################################### //

TEST_CASE("Scalar-Vector2 multiplication", "[Vector2]") {

    Vector2<double> v = {1.0, 2.0};
    double a = 7.0;

    Vector2<double> result = a * v;

    REQUIRE(result.x == 7.0);
    REQUIRE(result.y == 14.0);

}

TEST_CASE("Scalar-Vector3 multiplication", "[Vector3]") {

    Vector3<double> v = {1.0, 2.0, 3.0};
    double a = 7.0;

    Vector3<double> result = a * v;

    REQUIRE(result.x == 7.0);
    REQUIRE(result.y == 14.0);
    REQUIRE(result.z == 21.0);

}

TEST_CASE("Scalar-Vector4 multiplication", "[Vector4]") {

    Vector4<double> v = {1.0, 2.0, 3.0, 4.0};
    double a = 7.0;

    Vector4<double> result = a * v;

    REQUIRE(result.x == 7.0);
    REQUIRE(result.y == 14.0);
    REQUIRE(result.z == 21.0);
    REQUIRE(result.w == 28.0);

}

TEST_CASE("Scalar-Matrix2x2 multiplication", "[Matrix2x2]") {

    Matrix2x2<double> v = {1.0, 2.0,
                           3.0, 4.0};
    double a = 7.0;

    Matrix2x2<double> result = a * v;

    REQUIRE(result(0,0) == 7.0);
    REQUIRE(result(0,1) == 14.0);
    REQUIRE(result(1,0) == 21.0);
    REQUIRE(result(1,1) == 28.0);

}

TEST_CASE("Scalar-Matrix3x3 multiplication", "[Matrix3x3]") {

    Matrix3x3<double> v = {1.0, 2.0, 3.0,
                           4.0, 5.0, 6.0,
                           7.0, 8.0, 9.0};
    double a = 7.0;

    Matrix3x3<double> result = a * v;

    REQUIRE(result(0,0) == 7.0);
    REQUIRE(result(0,1) == 14.0);
    REQUIRE(result(0,2) == 21.0);
    REQUIRE(result(1,0) == 28.0);
    REQUIRE(result(1,1) == 35.0);
    REQUIRE(result(1,2) == 42.0);
    REQUIRE(result(2,0) == 49.0);
    REQUIRE(result(2,1) == 56.0);
    REQUIRE(result(2,2) == 63.0);

}

TEST_CASE("Scalar-Matrix4x4 multiplication", "[Matrix4x3]") {

    Matrix4x4<double> m = { 1.0,  2.0,  3.0,  4.0,
                            5.0,  6.0,  7.0,  8.0,
                            9.0, 10.0, 11.0, 12.0,
                           13.0, 14.0, 15.0, 16.0};
    double a = 7.0;

    Matrix4x4<double> result = a * m;

    REQUIRE(result(0,0) == 7.0);
    REQUIRE(result(0,1) == 14.0);
    REQUIRE(result(0,2) == 21.0);
    REQUIRE(result(0,3) == 28.0);
    REQUIRE(result(1,0) == 35.0);
    REQUIRE(result(1,1) == 42.0);
    REQUIRE(result(1,2) == 49.0);
    REQUIRE(result(1,3) == 56.0);
    REQUIRE(result(2,0) == 63.0);
    REQUIRE(result(2,1) == 70.0);
    REQUIRE(result(2,2) == 77.0);
    REQUIRE(result(2,3) == 84.0);
    REQUIRE(result(3,0) == 91.0);
    REQUIRE(result(3,1) == 98.0);
    REQUIRE(result(3,2) == 105.0);
    REQUIRE(result(3,3) == 112.0);

}

TEST_CASE("Vector2-Scalar multiplication", "[Vector2]") {

    Vector2<double> v = {1.0, 2.0};
    double a = 7.0;

    Vector2<double> result = v * a;

    REQUIRE(result.x == 7.0);
    REQUIRE(result.y == 14.0);

}

TEST_CASE("Vector3-scalar multiplication", "[Vector3]") {

    Vector3<double> v = {1.0, 2.0, 3.0};
    double a = 7.0;

    Vector3<double> result = v * a;

    REQUIRE(result.x == 7.0);
    REQUIRE(result.y == 14.0);
    REQUIRE(result.z == 21.0);

}

TEST_CASE("Vector4-scalar multiplication", "[Vector4]") {

    Vector4<double> v = {1.0, 2.0, 3.0, 4.0};
    double a = 7.0;

    Vector4<double> result = v * a;

    REQUIRE(result.x == 7.0);
    REQUIRE(result.y == 14.0);
    REQUIRE(result.z == 21.0);
    REQUIRE(result.w == 28.0);

}

TEST_CASE("Matrix2x2-scalar multiplication", "[Matrix2x2]") {

    Matrix2x2<double> m = {1.0, 2.0,
                           3.0, 4.0};
    double a = 7.0;

    Matrix2x2<double> result = m * a;

    REQUIRE(result(0,0) == 7.0);
    REQUIRE(result(0,1) == 14.0);
    REQUIRE(result(1,0) == 21.0);
    REQUIRE(result(1,1) == 28.0);

}

TEST_CASE("Matrix3x3-scalar multiplication", "[Matrix3x3]") {

    Matrix3x3<double> m = {1.0, 2.0, 3.0,
                           4.0, 5.0, 6.0,
                           7.0, 8.0, 9.0};
    double a = 7.0;

    Matrix3x3<double> result = m * a;

    REQUIRE(result(0,0) == 7.0);
    REQUIRE(result(0,1) == 14.0);
    REQUIRE(result(0,2) == 21.0);
    REQUIRE(result(1,0) == 28.0);
    REQUIRE(result(1,1) == 35.0);
    REQUIRE(result(1,2) == 42.0);
    REQUIRE(result(2,0) == 49.0);
    REQUIRE(result(2,1) == 56.0);
    REQUIRE(result(2,2) == 63.0);

}

TEST_CASE("Matrix4x4-scalar multiplication", "[Matrix4x3]") {

    Matrix4x4<double> m = { 1.0,  2.0,  3.0,  4.0,
                            5.0,  6.0,  7.0,  8.0,
                            9.0, 10.0, 11.0, 12.0,
                            13.0, 14.0, 15.0, 16.0};
    double a = 7.0;

    Matrix4x4<double> result = m * a;

    REQUIRE(result(0,0) == 7.0);
    REQUIRE(result(0,1) == 14.0);
    REQUIRE(result(0,2) == 21.0);
    REQUIRE(result(0,3) == 28.0);
    REQUIRE(result(1,0) == 35.0);
    REQUIRE(result(1,1) == 42.0);
    REQUIRE(result(1,2) == 49.0);
    REQUIRE(result(1,3) == 56.0);
    REQUIRE(result(2,0) == 63.0);
    REQUIRE(result(2,1) == 70.0);
    REQUIRE(result(2,2) == 77.0);
    REQUIRE(result(2,3) == 84.0);
    REQUIRE(result(3,0) == 91.0);
    REQUIRE(result(3,1) == 98.0);
    REQUIRE(result(3,2) == 105.0);
    REQUIRE(result(3,3) == 112.0);

}

// ######################################################################### //
// # Scalar division operators.                                            # //
// ######################################################################### //

TEST_CASE("Vector2-scalar division", "[Vector2]") {

    Vector2<double> v = {1.0, 2.0};
    double a = 2.0;

    Vector2<double> result = v / a;

    REQUIRE(result.x == 0.5);
    REQUIRE(result.y == 1.0);

}

TEST_CASE("Vector3-scalar division", "[Vector3]") {

    Vector3<double> v = {1.0, 2.0, 3.0};
    double a = 2.0;

    Vector3<double> result = v / a;

    REQUIRE(result.x == 0.5);
    REQUIRE(result.y == 1.0);
    REQUIRE(result.z == 1.5);

}

TEST_CASE("Vector4-scalar division", "[Vector4]") {

    Vector4<double> v = {1.0, 2.0, 3.0, 4.0};
    double a = 2.0;

    Vector4<double> result = v / a;

    REQUIRE(result.x == 0.5);
    REQUIRE(result.y == 1.0);
    REQUIRE(result.z == 1.5);
    REQUIRE(result.w == 2.0);

}

TEST_CASE("Matrix2x2-scalar division", "[Matrix2x2]") {

    Matrix2x2<double> m = {1.0, 2.0,
                           3.0, 4.0};
    double a = 2.0;

    Matrix2x2<double> result = m / a;

    REQUIRE(result(0,0) == 0.5);
    REQUIRE(result(0,1) == 1.0);
    REQUIRE(result(1,0) == 1.5);
    REQUIRE(result(1,1) == 2.0);

}

TEST_CASE("Matrix3x3-scalar division", "[Matrix3x3]") {

    Matrix3x3<double> m = {1.0, 2.0, 3.0,
                           4.0, 5.0, 6.0,
                           7.0, 8.0, 9.0};
    double a = 2.0;

    Matrix3x3<double> result = m / a;

    REQUIRE(result(0,0) == 0.5);
    REQUIRE(result(0,1) == 1.0);
    REQUIRE(result(0,2) == 1.5);
    REQUIRE(result(1,0) == 2.0);
    REQUIRE(result(1,1) == 2.5);
    REQUIRE(result(1,2) == 3.0);
    REQUIRE(result(2,0) == 3.5);
    REQUIRE(result(2,1) == 4.0);
    REQUIRE(result(2,2) == 4.5);

}

TEST_CASE("Matrix4x4-scalar division", "[Matrix4x3]") {

    Matrix4x4<double> m = {  1.0,  2.0,  3.0,  4.0,
                             5.0,  6.0,  7.0,  8.0,
                             9.0, 10.0, 11.0, 12.0,
                            13.0, 14.0, 15.0, 16.0};
    double a = 2.0;

    Matrix4x4<double> result = m / a;

    REQUIRE(result(0,0) == 0.5);
    REQUIRE(result(0,1) == 1.0);
    REQUIRE(result(0,2) == 1.5);
    REQUIRE(result(0,3) == 2.0);
    REQUIRE(result(1,0) == 2.5);
    REQUIRE(result(1,1) == 3.0);
    REQUIRE(result(1,2) == 3.5);
    REQUIRE(result(1,3) == 4.0);
    REQUIRE(result(2,0) == 4.5);
    REQUIRE(result(2,1) == 5.0);
    REQUIRE(result(2,2) == 5.5);
    REQUIRE(result(2,3) == 6.0);
    REQUIRE(result(3,0) == 6.5);
    REQUIRE(result(3,1) == 7.0);
    REQUIRE(result(3,2) == 7.5);
    REQUIRE(result(3,3) == 8.0);

}

// ######################################################################### //
// # Matrix-vector multiplication operators.                               # //
// ######################################################################### //

TEST_CASE("Vector2-Matrix2x2 multiplication", "[Vector2, Matrix2x2]") {

    Vector2<double> v = {1.0, 2.0};

    Matrix2x2<double> m = {1.0, 2.0,
                           3.0, 4.0};

    Vector2<double> result = v * m;

    REQUIRE(result.x == 7.0);
    REQUIRE(result.y == 10.0);

}

TEST_CASE("Vector3-Matrix3x3 multiplication", "[Vector3, Matrix3x3]") {

    Vector3<double> v = {1.0, 2.0, 3.0};

    Matrix3x3<double> m = {1.0, 2.0, 3.0,
                           4.0, 5.0, 6.0,
                           7.0, 8.0, 9.0};

    Vector3<double> result = v * m;

    REQUIRE(result.x == 30.0);
    REQUIRE(result.y == 36.0);
    REQUIRE(result.z == 42.0);

}

TEST_CASE("Vector4-Matrix4x4 multiplication", "[Vector4, Matrix4x4]") {

    Vector4<double> v = {1.0, 2.0, 3.0, 4.0};

    Matrix4x4<double> m = { 1.0,  2.0,  3.0,  4.0,
                            5.0,  6.0,  7.0,  8.0,
                            9.0, 10.0, 11.0, 12.0,
                           13.0, 14.0, 15.0, 16.0};

    Vector4<double> result = v * m;

    REQUIRE(result.x == 90.0);
    REQUIRE(result.y == 100.0);
    REQUIRE(result.z == 110.0);
    REQUIRE(result.w == 120.0);

}

TEST_CASE("Matrix2x2-Vector2 multiplication", "[Matrix2x2, Vector2]") {

    Vector2<double> v = {1.0, 2.0};

    Matrix2x2<double> m = {1.0, 2.0,
                           3.0, 4.0};

    Vector2<double> result = m * v;

    REQUIRE(result.x == 5.0);
    REQUIRE(result.y == 11.0);

}

TEST_CASE("Matrix3x3-Vector3 multiplication", "[Matrix3x3, Vector3]") {

    Vector3<double> v = {1.0, 2.0, 3};

    Matrix3x3<double> m = {1.0, 2.0, 3.0,
                           4.0, 5.0, 6.0,
                           7.0, 8.0, 9.0};

    Vector3<double> result = m * v;

    REQUIRE(result.x == 14.0);
    REQUIRE(result.y == 32.0);
    REQUIRE(result.z == 50.0);

}

TEST_CASE("Matrix4x4-Vector4 multiplication", "[Matrix4x4, Vector4]") {

    Vector4<double> v = {1.0, 2.0, 3.0, 4.0};

    Matrix4x4<double> m = {  1.0,  2.0,  3.0,  4.0,
                             5.0,  6.0,  7.0,  8.0,
                             9.0, 10.0, 11.0, 12.0,
                            13.0, 14.0, 15.0, 16.0};

    Vector4<double> result = m * v;

    REQUIRE(result.x == 30.0);
    REQUIRE(result.y == 70.0);
    REQUIRE(result.z == 110.0);
    REQUIRE(result.w == 150.0);

}

// ######################################################################### //
// # Matrix-Matrix multiplication operators.                               # //
// ######################################################################### //

TEST_CASE("Matrix2x2-Matrix2x2 multiplication", "[Matrix2x2, Matrix2x2]") {

    Matrix2x2<double> m1 = { 1.0,  2.0,
                             3.0,  4.0};

    Matrix2x2<double> m2 = { 5.0,  6.0,
                             7.0,  8.0};

    Matrix2x2<double> result = m1 * m2;

    REQUIRE(result(0,0) == 19.0);
    REQUIRE(result(0,1) == 22.0);
    REQUIRE(result(1,0) == 43.0);
    REQUIRE(result(1,1) == 50.0);

}

TEST_CASE("Matrix3x3-Matrix3x3 multiplication", "[Matrix3x3, Matrix3x3]") {

    Matrix3x3<double> m1 = {1.0, 2.0, 3.0,
                            4.0, 5.0, 6.0,
                            7.0, 8.0, 9.0};

    Matrix3x3<double> m2 = {10.0, 11.0, 12.0,
                            13.0, 14.0, 15.0,
                            16.0, 17.0, 18.0};

    Matrix3x3<double> result = m1 * m2;

    REQUIRE(result(0,0) == 84.0);
    REQUIRE(result(0,1) == 90.0);
    REQUIRE(result(0,2) == 96.0);
    REQUIRE(result(1,0) == 201.0);
    REQUIRE(result(1,1) == 216.0);
    REQUIRE(result(1,2) == 231.0);
    REQUIRE(result(2,0) == 318.0);
    REQUIRE(result(2,1) == 342.0);
    REQUIRE(result(2,2) == 366.0);

}

TEST_CASE("Matrix4x4-Matrix4x4 multiplication", "[Matrix4x4, Matrix4x4]") {

    Matrix4x4<double> m1 = { 1.0,  2.0,  3.0,  4.0,
                             5.0,  6.0,  7.0,  8.0,
                             9.0, 10.0, 11.0, 12.0,
                            13.0, 14.0, 15.0, 16.0};

    Matrix4x4<double> m2 = {17.0, 18.0, 19.0, 20.0,
                            21.0, 22.0, 23.0, 24.0,
                            25.0, 26.0, 27.0, 28.0,
                            29.0, 30.0, 31.0, 32.0};

    Matrix4x4<double> result = m1 * m2;

    REQUIRE(result(0,0) == 250.0);
    REQUIRE(result(0,1) == 260.0);
    REQUIRE(result(0,2) == 270.0);
    REQUIRE(result(0,3) == 280.0);
    REQUIRE(result(1,0) == 618.0);
    REQUIRE(result(1,1) == 644.0);
    REQUIRE(result(1,2) == 670.0);
    REQUIRE(result(1,3) == 696.0);
    REQUIRE(result(2,0) == 986.0);
    REQUIRE(result(2,1) == 1028.0);
    REQUIRE(result(2,2) == 1070.0);
    REQUIRE(result(2,3) == 1112.0);
    REQUIRE(result(3,0) == 1354.0);
    REQUIRE(result(3,1) == 1412.0);
    REQUIRE(result(3,2) == 1470.0);
    REQUIRE(result(3,3) == 1528.0);

}

// ######################################################################### //
// # Inner products.                                                       # //
// ######################################################################### //

TEST_CASE("Vector2 inner product", "[Vector2]") {

    Vector2<double> v1 = {1.0, 2.0};

    Vector2<double> v2 = {4.0, 5.0};

    double result = inner(v1, v2);

    REQUIRE(result == 14.0);

}

TEST_CASE("Vector3 inner product", "[Vector3]") {

    Vector3<double> v1 = {1.0, 2.0, 3.0};

    Vector3<double> v2 = {4.0, 5.0, 6.0};

    double result = inner(v1, v2);

    REQUIRE(result == 32.0);

}

TEST_CASE("Vector4 inner product", "[Vector4]") {

    Vector4<double> v1 = {1.0, 2.0, 3.0, 4.0};

    Vector4<double> v2 = {5.0, 6.0, 7.0, 8.0};

    double result = inner(v1, v2);

    REQUIRE(result == 70.0);

}

TEST_CASE("Matrix2x2 inner product", "[Matrix2x2]") {

    Matrix2x2<double> m1 = {1.0, 2.0,
                            3.0, 4.0};

    Matrix2x2<double> m2 = {5.0, 6.0,
                            7.0, 8.0};

    double result = inner(m1, m2);

    REQUIRE(result == 70.0);

}

TEST_CASE("Matrix3x3 inner product", "[Matrix3x3]") {

    Matrix3x3<double> m1 = {1.0, 2.0, 3.0,
                            4.0, 5.0, 6.0,
                            7.0, 8.0, 9.0};

    Matrix3x3<double> m2 = { 5.0,  6.0,  7.0,
                             8.0,  9.0, 10.0,
                            11.0, 12.0, 13.0};

    double result = inner(m1, m2);

    REQUIRE(result == 465.0);

}

TEST_CASE("Matrix4x4 inner product", "[Matrix4x4]") {

    Matrix4x4<double> m1 = { 1.0,  2.0,  3.0,  4.0,
                             5.0,  6.0,  7.0,  8.0,
                             9.0, 10.0, 11.0, 12.0,
                            13.0, 14.0, 15.0, 16.0};

    Matrix4x4<double> m2 = {  5.0,  6.0,  7.0,  8.0,
                              9.0, 10.0, 11.0, 12.0,
                             13.0, 14.0, 15.0, 16.0,
                             17.0, 18.0, 19.0, 20.0};

    double result = inner(m1, m2);

    REQUIRE(result == 2040.0);

}

// ######################################################################### //
// # Cross products.                                                       # //
// ######################################################################### //

TEST_CASE("Vector2 (pseudo) cross product", "[Vector2]") {

    Vector2<double> v1 = {1.0, 2.0};

    Vector2<double> v2 = {4.0, 5.0};

    double result = cross(v1, v2);

    REQUIRE(result == -3.0);

}

TEST_CASE("Vector3 cross product", "[Vector3]") {

    Vector3<double> v1 = {1.0, 2.0, 3.0};

    Vector3<double> v2 = {4.0, 5.0, 6.0};

    Vector3<double> result = cross(v1, v2);

    REQUIRE(result.x == -3.0);
    REQUIRE(result.y ==  6.0);
    REQUIRE(result.z == -3.0);

}

// ######################################################################### //
// # Outer products.                                                       # //
// ######################################################################### //

TEST_CASE("Vector2 outer product", "[Vector2]") {

    Vector2<double> v1 = {1.0, 2.0};

    Vector2<double> v2 = {3.0, 4.0};

    Matrix2x2<double> result = outer(v1, v2);

    REQUIRE(result(0,0) == 3.0);
    REQUIRE(result(0,1) == 4.0);
    REQUIRE(result(1,0) == 6.0);
    REQUIRE(result(1,1) == 8.0);

}

TEST_CASE("Vector3 outer product", "[Vector3]") {

    Vector3<double> v1 = {1.0, 2.0, 3.0};

    Vector3<double> v2 = {4.0, 5.0, 6.0};

    Matrix3x3<double> result = outer(v1, v2);

    REQUIRE(result(0,0) == 4.0);
    REQUIRE(result(0,1) == 5.0);
    REQUIRE(result(0,2) == 6.0);
    REQUIRE(result(1,0) == 8.0);
    REQUIRE(result(1,1) == 10.0);
    REQUIRE(result(1,2) == 12.0);
    REQUIRE(result(2,0) == 12.0);
    REQUIRE(result(2,1) == 15.0);
    REQUIRE(result(2,2) == 18.0);

}

TEST_CASE("Vector4 outer product", "[Vector4]") {

    Vector4<double> v1 = {1.0, 2.0, 3.0, 4.0};

    Vector4<double> v2 = {5.0, 6.0, 7.0, 8.0};

    Matrix4x4<double> result = outer(v1, v2);

    REQUIRE(result(0,0) == 5.0);
    REQUIRE(result(0,1) == 6.0);
    REQUIRE(result(0,2) == 7.0);
    REQUIRE(result(0,3) == 8.0);
    REQUIRE(result(1,0) == 10.0);
    REQUIRE(result(1,1) == 12.0);
    REQUIRE(result(1,2) == 14.0);
    REQUIRE(result(1,3) == 16.0);
    REQUIRE(result(2,0) == 15.0);
    REQUIRE(result(2,1) == 18.0);
    REQUIRE(result(2,2) == 21.0);
    REQUIRE(result(2,3) == 24.0);
    REQUIRE(result(3,0) == 20.0);
    REQUIRE(result(3,1) == 24.0);
    REQUIRE(result(3,2) == 28.0);
    REQUIRE(result(3,3) == 32.0);

}

// ######################################################################### //
// # Matrix adjugate.                                                      # //
// ######################################################################### //

TEST_CASE("Matrix2x2 adjugate", "[Matrix2x2]") {

    Matrix2x2<double> m = {1.0,  2.0,
                           0.0,  1.0};

    Matrix2x2<double> result = adj(m);

    REQUIRE(result(0,0) ==  1.0);
    REQUIRE(result(0,1) == -2.0);
    REQUIRE(result(1,0) ==  0.0);
    REQUIRE(result(1,1) ==  1.0);

}

TEST_CASE("Matrix3x3 adjugate", "[Matrix3x3]") {

    Matrix3x3<double> m = {1.0,  2.0,  3.0,
                           0.0,  1.0, -7.0,
                           9.0, 10.0,  0.0};

    Matrix3x3<double> result = adj(m);

    REQUIRE(result(0,0) ==  70.0);
    REQUIRE(result(0,1) ==  30.0);
    REQUIRE(result(0,2) == -17.0);
    REQUIRE(result(1,0) == -63.0);
    REQUIRE(result(1,1) == -27.0);
    REQUIRE(result(1,2) ==  7.0);
    REQUIRE(result(2,0) == -9.0);
    REQUIRE(result(2,1) ==  8.0);
    REQUIRE(result(2,2) ==  1.0);

}

TEST_CASE("Matrix4x4 adjugate", "[Matrix4x4]") {

    Matrix4x4<double> m = {1.0,  2.0,  3.0,  4.0,
                           0.0,  1.0, -7.0, -8.0,
                           9.0, 10.0, 11.0, 12.0,
                           0.0,  0.0, -3.0, 13.0};

    Matrix4x4<double> result = adj(m);

    REQUIRE(result(0,0) ==  1329.0);
    REQUIRE(result(0,1) ==  152.0);
    REQUIRE(result(0,2) == -281.0);
    REQUIRE(result(0,3) == -56.0);
    REQUIRE(result(1,0) == -1035.0);
    REQUIRE(result(1,1) == -280.0);
    REQUIRE(result(1,2) ==  115.0);
    REQUIRE(result(1,3) ==  40.0);
    REQUIRE(result(2,0) == -117.0);
    REQUIRE(result(2,1) ==  104.0);
    REQUIRE(result(2,2) ==  13.0);
    REQUIRE(result(2,3) ==  88.0);
    REQUIRE(result(3,0) == -27.0);
    REQUIRE(result(3,1) ==  24.0);
    REQUIRE(result(3,2) ==  3.0);
    REQUIRE(result(3,3) == -72.0);

}

// ######################################################################### //
// # Matrix determinants.                                                  # //
// ######################################################################### //

TEST_CASE("Matrix2x2 determinant", "[Matrix2x2]") {

    Matrix2x2<double> m = {1.0,  2.0,
                           0.0, -3.0};

    double result = det(m);

    REQUIRE(result == -3.0);

}

TEST_CASE("Matrix3x3 determinant", "[Matrix3x3]") {

    Matrix3x3<double> m = {1.0,  2.0,  3.0,
                           0.0,  1.0, -7.0,
                           9.0, 10.0, 11.0};

    double result = det(m);

    REQUIRE(result == -72.0);

}

TEST_CASE("Matrix4x4 determinant", "[Matrix4x4]") {

    Matrix4x4<double> m = {1.0,  2.0,  3.0,  4.0,
                           0.0,  1.0, -7.0, -8.0,
                           9.0, 10.0, 11.0, 12.0,
                           0.0,  0.0, -3.0, 13.0};

    double result = det(m);

    REQUIRE(result == -1200.0);

}

// ######################################################################### //
// # Matrix trace.                                                         # //
// ######################################################################### //

TEST_CASE("Matrix2x2 trace", "[Matrix2x2]") {

    Matrix2x2<double> m = { 11.0, 12.0,
                            -3.0, 13.0};

    double result = trace(m);

    REQUIRE(result == 24.0);

}

TEST_CASE("Matrix3x3 trace", "[Matrix3x3]") {

    Matrix3x3<double> m = {2.0,  2.0,  3.0,
                           0.0,  1.0, -7.0,
                           9.0, 10.0, 11.0};

    double result = trace(m);

    REQUIRE(result == 14.0);

}

TEST_CASE("Matrix4x4 trace", "[Matrix4x4]") {

    Matrix4x4<double> m = {1.0,  2.0,  3.0,  4.0,
                           0.0,  1.0, -7.0, -8.0,
                           9.0, 10.0, 11.0, 12.0,
                           0.0,  0.0, -3.0, 13.0};

    double result = trace(m);

    REQUIRE(result == 26.0);

}
// ######################################################################### //
// # Matrix diagonal.                                                      # //
// ######################################################################### //

TEST_CASE("Matrix2x2 diagonal", "[Matrix2x2]") {

    Matrix2x2<double> m = { 11.0, 12.0,
                            -3.0, 13.0};

    Vector2 result = diag(m);

    REQUIRE(result.x == 11.0);
    REQUIRE(result.y == 13.0);

}

TEST_CASE("Matrix3x3 diagonal", "[Matrix3x3]") {

    Matrix3x3<double> m = { 11.0, 12.0, 12.0,
                            -3.0, 13.0, -2.0,
                             9.0, 10.0, 12.0};

    Vector3 result = diag(m);

    REQUIRE(result.x == 11.0);
    REQUIRE(result.y == 13.0);
    REQUIRE(result.z == 12.0);

}

TEST_CASE("Matrix4x4 diagonal", "[Matrix4x4]") {

    Matrix4x4<double> m = {  11.0, 12.0, 12.0, 19.0,
                             -3.0, 13.0, -2.0, 20.0,
                              9.0, 10.0, 12.0, -1.0,
                             10.0, 11.0, 12.0, 20.0};

    Vector4 result = diag(m);

    REQUIRE(result.x == 11.0);
    REQUIRE(result.y == 13.0);
    REQUIRE(result.z == 12.0);
    REQUIRE(result.w == 20.0);

}
