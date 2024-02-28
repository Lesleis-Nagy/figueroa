/**
 * @file linalg.hpp
 * @author Lesleis Nagy
 * @date 24/02/2024
 * @brief Linear Algebra structures and operations
 */

#ifndef FMM_LINALG_HPP
#define FMM_LINALG_HPP

// ######################################################################### //
// # Vectors.                                                              # //
// ######################################################################### //

/**
 * @brief A template structure representation of a 2D Vector.
 *
 * @tparam T the base data type.
 */
template <typename T>
struct Vector2 {
    T x; /**< The x-component of the vector. */
    T y; /**< The y-component of the vector. */
};

/**
 * @brief A template structure representation of a 3D Vector.
 *
 * @tparam T the base data type.
 */
template <typename T>
struct Vector3 {
    T x; /**< The x-component of the vector. */
    T y; /**< The y-component of the vector. */
    T z; /**< The z-component of the vector. */
};

/**
 * @brief A template structure representation of a 4D Vector.
 *
 * @tparam T the base data type.
 */
template <typename T>
struct Vector4 {
    T x; /**< The x-component of the vector. */
    T y; /**< The y-component of the vector. */
    T z; /**< The z-component of the vector. */
    T w; /**< The w-component of the vector. */
};

// ######################################################################### //
// # Matrices.                                                             # //
// ######################################################################### //

/**
 * @brief A template structure representation of a 2x2 Matrix.
 *
 * @tparam T the base data type.
 */
template <typename T>
struct Matrix2x2 {
    T m[2][2]; /**< The 2x2 matrix. */

    inline T operator() (size_t i, size_t j) const { return m[i][j]; }
};

/**
 * @brief A template structure representation of a 3x3 Matrix.
 *
 * @tparam T the base data type.
 */
template <typename T>
struct Matrix3x3 {
    T m[3][3]; /**< The 3x3 matrix. */

    inline T operator() (size_t i, size_t j) const { return m[i][j]; }
};

/**
 * @brief A template structure representation of a 4x4 Matrix.
 *
 * @tparam T the base data type.
 */
template <typename T>
struct Matrix4x4 {
    T m[4][4]; /**< The 4x4 matrix. */

    inline T operator() (size_t i, size_t j) const { return m[i][j]; }
};

// ######################################################################### //
// # Addition operators.                                                   # //
// ######################################################################### //

/**
 * @brief Adds two Vector2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector2 instance.
 * @param b The second Vector2 instance.
 *
 * @return The result of the addition.
 */
template <typename T>
Vector2<T> operator+(const Vector2<T>& a, const Vector2<T>& b) {
    return {a.x + b.x, a.y + b.y};
}

/**
 * @brief Adds two Vector3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector3 instance.
 * @param b The second Vector3 instance.
 *
 * @return The result of the addition.
 */
template <typename T>
Vector3<T> operator+(const Vector3<T>& a, const Vector3<T>& b) {
    return {a.x + b.x, a.y + b.y, a.z + b.z};
}

/**
 * @brief Adds two Vector4 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector4 instance.
 * @param b The second Vector4 instance.
 *
 * @return The result of the addition.
 */
template <typename T>
Vector4<T> operator+(const Vector4<T>& a, const Vector4<T>& b) {
    return {a.x + b.x, a.y + b.y, a.z + b.z, a.w + b.w};
}

/**
 * @brief Adds two Matrix2x2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix2x2 instance.
 * @param b The second Matrix2x2 instance.
 *
 * @return The result of the addition.
 */
template <typename T>
Matrix2x2<T> operator+(const Matrix2x2<T>& a, const Matrix2x2<T>& b) {
    return {
            a.m[0][0] + b.m[0][0], a.m[0][1] + b.m[0][1],
            a.m[1][0] + b.m[1][0], a.m[1][1] + b.m[1][1]
    };
}

/**
 * @brief Adds two Matrix3x3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix3x3 instance.
 * @param b The second Matrix3x3 instance.
 *
 * @return The result of the addition.
 */
template <typename T>
Matrix3x3<T> operator+(const Matrix3x3<T>& a, const Matrix3x3<T>& b) {
    return {
            a.m[0][0] + b.m[0][0], a.m[0][1] + b.m[0][1], a.m[0][2] + b.m[0][2],
            a.m[1][0] + b.m[1][0], a.m[1][1] + b.m[1][1], a.m[1][2] + b.m[1][2],
            a.m[2][0] + b.m[2][0], a.m[2][1] + b.m[2][1], a.m[2][2] + b.m[2][2]
    };
}

/**
 * @brief Adds two Matrix4x4 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix4x4 instance.
 * @param b The second Matrix4x4 instance.
 *
 * @return The result of the addition.
 */
template <typename T>
Matrix4x4<T> operator+(const Matrix4x4<T>& a, const Matrix4x4<T>& b) {
    return {
            a.m[0][0] + b.m[0][0], a.m[0][1] + b.m[0][1], a.m[0][2] + b.m[0][2], a.m[0][3] + b.m[0][3],
            a.m[1][0] + b.m[1][0], a.m[1][1] + b.m[1][1], a.m[1][2] + b.m[1][2], a.m[1][3] + b.m[1][3],
            a.m[2][0] + b.m[2][0], a.m[2][1] + b.m[2][1], a.m[2][2] + b.m[2][2], a.m[2][3] + b.m[2][3],
            a.m[3][0] + b.m[3][0], a.m[3][1] + b.m[3][1], a.m[3][2] + b.m[3][2], a.m[3][3] + b.m[3][3]
    };
}

// ######################################################################### //
// # Subtraction operators.                                                # //
// ######################################################################### //

/**
 * @brief Subtracts two Vector2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector2 instance.
 * @param b The second Vector2 instance.
 *
 * @return The result of the subtraction.
 */
template <typename T>
Vector2<T> operator-(const Vector2<T>& a, const Vector2<T>& b) {
    return {a.x - b.x, a.y - b.y};
}

/**
 * @brief Subtracts two Vector3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector3 instance.
 * @param b The second Vector3 instance.
 *
 * @return The result of the subtraction.
 */
template <typename T>
Vector3<T> operator-(const Vector3<T>& a, const Vector3<T>& b) {
    return {a.x - b.x, a.y - b.y, a.z - b.z};
}

/**
 * @brief Subtracts two Vector4 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector4 instance.
 * @param b The second Vector4 instance.
 *
 * @return The result of the subtraction.
 */
template <typename T>
Vector4<T> operator-(const Vector4<T>& a, const Vector4<T>& b) {
    return {a.x - b.x, a.y - b.y, a.z - b.z, a.w - b.w};
}

/**
 * @brief Subtracts two Matrix2x2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix2x2 instance.
 * @param b The second Matrix2x2 instance.
 *
 * @return The result of the subtraction.
 */
template <typename T>
Matrix2x2<T> operator-(const Matrix2x2<T>& a, const Matrix2x2<T>& b) {
    return {
            a.m[0][0] - b.m[0][0], a.m[0][1] - b.m[0][1],
            a.m[1][0] - b.m[1][0], a.m[1][1] - b.m[1][1]
    };
}

/**
 * @brief Subtracts two Matrix3x3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix3x3 instance.
 * @param b The second Matrix3x3 instance.
 *
 * @return The result of the subtraction.
 */
template <typename T>
Matrix3x3<T> operator-(const Matrix3x3<T>& a, const Matrix3x3<T>& b) {
    return {
            a.m[0][0] - b.m[0][0], a.m[0][1] - b.m[0][1], a.m[0][2] - b.m[0][2],
            a.m[1][0] - b.m[1][0], a.m[1][1] - b.m[1][1], a.m[1][2] - b.m[1][2],
            a.m[2][0] - b.m[2][0], a.m[2][1] - b.m[2][1], a.m[2][2] - b.m[2][2]
    };
}

/**
 * @brief Subtracts two Matrix4x4 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix4x4 instance.
 * @param b The second Matrix4x4 instance.
 *
 * @return The result of the subtraction.
 */
template <typename T>
Matrix4x4<T> operator-(const Matrix4x4<T>& a, const Matrix4x4<T>& b) {
    return {
            a.m[0][0] - b.m[0][0], a.m[0][1] - b.m[0][1], a.m[0][2] - b.m[0][2], a.m[0][3] - b.m[0][3],
            a.m[1][0] - b.m[1][0], a.m[1][1] - b.m[1][1], a.m[1][2] - b.m[1][2], a.m[1][3] - b.m[1][3],
            a.m[2][0] - b.m[2][0], a.m[2][1] - b.m[2][1], a.m[2][2] - b.m[2][2], a.m[2][3] - b.m[2][3],
            a.m[3][0] - b.m[3][0], a.m[3][1] - b.m[3][1], a.m[3][2] - b.m[3][2], a.m[3][3] - b.m[3][3]
    };
}

// ######################################################################### //
// # Scalar multiplication operators.                                      # //
// ######################################################################### //

/**
 * @brief Multiplies a scalar and a Vector2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Vector2 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Vector2<T> operator*(T a, const Vector2<T>& b) {
    return {a * b.x, a * b.y};
}

/**
 * @brief Multiplies a Vector2 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The Vector2 instance.
 * @param b The scalar.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Vector2<T> operator*(const Vector2<T>& a, T b) {
    return {a.x * b, a.y * b};
}

/**
 * @brief Multiplies a scalar and a Vector3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Vector3 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Vector3<T> operator*(T a, const Vector3<T>& b) {
    return {a * b.x, a * b.y, a * b.z};
}

/**
 * @brief Multiplies a Vector3 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The Vector3 instance.
 * @param b The scalar.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Vector3<T> operator*(const Vector3<T>& a, T b) {
    return {a.x * b, a.y * b, a.z * b};
}

/**
 * @brief Multiplies a scalar and a Vector4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Vector4 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Vector4<T> operator*(T a, const Vector4<T>& b) {
    return {a * b.x, a * b.y, a * b.z, a * b.w};
}

/**
 * @brief Multiplies a Vector4 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The Vector4 instance.
 * @param b The scalar.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Vector4<T> operator*(const Vector4<T>& a, T b) {
    return {a.x * b, a.y * b, a.z * b, a.w * b};
}

/**
 * @brief Multiplies a scalar and a Matrix2x2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix2x2 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Matrix2x2<T> operator*(T a, const Matrix2x2<T>& b) {
    return {
            a * b.m[0][0], a * b.m[0][1],
            a * b.m[1][0], a * b.m[1][1]
    };
}

/**
 * @brief Multiplies a Matrix2x2 instance and a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix2x2 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Matrix2x2<T> operator*(const Matrix2x2<T>& a, T b) {
    return {
            a.m[0][0] * b, a.m[0][1] * b,
            a.m[1][0] * b, a.m[1][1] * b
    };
}

/**
 * @brief Multiplies a scalar and a Matrix3x3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix3x3 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Matrix3x3<T> operator*(T a, const Matrix3x3<T>& b) {
    return {
            a * b.m[0][0], a * b.m[0][1], a * b.m[0][2],
            a * b.m[1][0], a * b.m[1][1], a * b.m[1][2],
            a * b.m[2][0], a * b.m[2][1], a * b.m[2][2]
    };
}

/**
 * @brief Multiplies a Matrix3x3 instance and a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix3x3 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Matrix3x3<T> operator*(const Matrix3x3<T>& a, T b) {
    return {
            a.m[0][0] * b, a.m[0][1] * b, a.m[0][2] * b,
            a.m[1][0] * b, a.m[1][1] * b, a.m[1][2] * b,
            a.m[2][0] * b, a.m[2][1] * b, a.m[2][2] * b
    };
}

/**
 * @brief Multiplies a scalar and a Matrix4x4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix4x4 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Matrix4x4<T> operator*(T a, const Matrix4x4<T>& b) {
    return {
            a * b.m[0][0], a * b.m[0][1], a * b.m[0][2], a * b.m[0][3],
            a * b.m[1][0], a * b.m[1][1], a * b.m[1][2], a * b.m[1][3],
            a * b.m[2][0], a * b.m[2][1], a * b.m[2][2], a * b.m[2][3],
            a * b.m[3][0], a * b.m[3][1], a * b.m[3][2], a * b.m[3][3]
    };
}

/**
 * @brief Multiplies a Matrix4x4 instance and a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix4x4 instance.
 *
 * @return The result of the scalar multiplication.
 */
template <typename T>
Matrix4x4<T> operator*(const Matrix4x4<T>& a, T b) {
    return {
            a.m[0][0] * b, a.m[0][1] * b, a.m[0][2] * b, a.m[0][3] * b,
            a.m[1][0] * b, a.m[1][1] * b, a.m[1][2] * b, a.m[1][3] * b,
            a.m[2][0] * b, a.m[2][1] * b, a.m[2][2] * b, a.m[2][3] * b,
            a.m[3][0] * b, a.m[3][1] * b, a.m[3][2] * b, a.m[3][3] * b
    };
}

// ######################################################################### //
// # Scalar division operators.                                            # //
// ######################################################################### //

/**
 * @brief Divides a Vector2 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The Vector2 instance.
 * @param b The scalar.
 *
 * @return The result of the scalar division
 */
template <typename T>
Vector2<T> operator/(const Vector2<T>& a, T b) {
    return {a.x / b, a.y / b};
}

/**
 * @brief Divides a Vector3 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The Vector3 instance.
 * @param b The scalar.
 *
 * @return The result of the scalar division
 */
template <typename T>
Vector3<T> operator/(const Vector3<T>& a, T b) {
    return {a.x / b, a.y / b, a.z / b};
}

/**
 * @brief Divides a Vector4 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The Vector4 instance.
 * @param b The scalar.
 *
 * @return The result of the scalar division
 */
template <typename T>
Vector4<T> operator/(const Vector4<T>& a, T b) {
    return {a.x / b, a.y / b, a.z / b, a.w / b};
}

/**
 * @brief Divides a Matrix2x2 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix2x2 instance.
 *
 * @return The result of the scalar division
 */
template <typename T>
Matrix2x2<T> operator/(const Matrix2x2<T>& a, T b) {
    return {
            a.m[0][0] / b, a.m[0][1] / b,
            a.m[1][0] / b, a.m[1][1] / b
    };
}

/**
 * @brief Divides a Matrix3x3 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix3x3 instance.
 *
 * @return The result of the scalar division
 */
template <typename T>
Matrix3x3<T> operator/(const Matrix3x3<T>& a, T b) {
    return {
            a.m[0][0] / b, a.m[0][1] / b, a.m[0][2] / b,
            a.m[1][0] / b, a.m[1][1] / b, a.m[1][2] / b,
            a.m[2][0] / b, a.m[2][1] / b, a.m[2][2] / b
    };
}

/**
 * @brief Divides a Matrix4x4 instance by a scalar.
 *
 * @tparam T the base data type.
 *
 * @param a The scalar.
 * @param b The Matrix4x4 instance.
 *
 * @return The result of the scalar division
 */
template <typename T>
Matrix4x4<T> operator/(const Matrix4x4<T>& a, T b) {
    return {
            a.m[0][0] / b, a.m[0][1] / b, a.m[0][2] / b, a.m[0][3] / b,
            a.m[1][0] / b, a.m[1][1] / b, a.m[1][2] / b, a.m[1][3] / b,
            a.m[2][0] / b, a.m[2][1] / b, a.m[2][2] / b, a.m[2][3] / b,
            a.m[3][0] / b, a.m[3][1] / b, a.m[3][2] / b, a.m[3][3] / b
    };
}

// ######################################################################### //
// # Matrix-vector multiplication operators.                               # //
// ######################################################################### //

/**
 * @brief Multiplies a Vector2 and a Matrix2x2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The vector2 instance.
 * @param b The Matrix2x2 instance.
 *
 * @return The result of the vector-matrix product.
 */
template <typename T>
Vector2<T> operator*(const Vector2<T>& a, const Matrix2x2<T>& b) {
    return {
            a.x * b.m[0][0] + a.y * b.m[1][0],
            a.x * b.m[0][1] + a.y * b.m[1][1]
    };
}

/**
 * @brief Multiplies a Vector3 and a Matrix3x3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The vector3 instance.
 * @param b The Matrix3x3 instance.
 *
 * @return The result of the vector-matrix product.
 */
template <typename T>
Vector3<T> operator*(const Vector3<T>& a, const Matrix3x3<T>& b) {
    return {
        a.x * b.m[0][0] + a.y * b.m[1][0] + a.z * b.m[2][0],
        a.x * b.m[0][1] + a.y * b.m[1][1] + a.z * b.m[2][1],
        a.x * b.m[0][2] + a.y * b.m[1][2] + a.z * b.m[2][2]
    };
}

/**
 * @brief Multiplies a Vector4 and a Matrix4x4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The vector4 instance.
 * @param b The Matrix4x4 instance.
 *
 * @return The result of the vector-matrix product.
 */
template <typename T>
Vector4<T> operator*(const Vector4<T>& a, const Matrix4x4<T>& b) {
    return {
        a.x * b.m[0][0] + a.y * b.m[1][0] + a.z * b.m[2][0] + a.w * b.m[3][0],
        a.x * b.m[0][1] + a.y * b.m[1][1] + a.z * b.m[2][1] + a.w * b.m[3][1],
        a.x * b.m[0][2] + a.y * b.m[1][2] + a.z * b.m[2][2] + a.w * b.m[3][2],
        a.x * b.m[0][3] + a.y * b.m[1][3] + a.z * b.m[2][3] + a.w * b.m[3][3]
    };
}

/**
 * @brief Multiplies a Matrix2x2 and a Vector2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The Matrix2x2 instance.
 * @param b The vector2 instance.
 *
 * @return The result of the matrix-vector product.
 */
template <typename T>
Vector2<T> operator*(const Matrix2x2<T>& a, const Vector2<T>& b) {
    return {
        a.m[0][0] * b.x + a.m[0][1] * b.y,
        a.m[1][0] * b.x + a.m[1][1] * b.y
    };
}

/**
 * @brief Multiplies a Matrix3x3 and a Vector3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The Matrix3x3 instance.
 * @param b The vector3 instance.
 *
 * @return The result of the matrix-vector product.
 */
template <typename T>
Vector3<T> operator*(const Matrix3x3<T>& a, const Vector3<T>& b) {
    return {
        a.m[0][0] * b.x + a.m[0][1] * b.y + a.m[0][2] * b.z,
        a.m[1][0] * b.x + a.m[1][1] * b.y + a.m[1][2] * b.z,
        a.m[2][0] * b.x + a.m[2][1] * b.y + a.m[2][2] * b.z
    };
}

/**
 * @brief Multiplies a Matrix4x4 and a Vector4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a The Matrix4x4 instance.
 * @param b The vector4 instance.
 *
 * @return The result of the matrix-vector product.
 */
template <typename T>
Vector4<T> operator*(const Matrix4x4<T>& a, const Vector4<T>& b) {
    return {
        a.m[0][3] * b.w + a.m[0][0] * b.x + a.m[0][1] * b.y + a.m[0][2] * b.z,
        a.m[1][3] * b.w + a.m[1][0] * b.x + a.m[1][1] * b.y + a.m[1][2] * b.z,
        a.m[2][3] * b.w + a.m[2][0] * b.x + a.m[2][1] * b.y + a.m[2][2] * b.z,
        a.m[3][3] * b.w + a.m[3][0] * b.x + a.m[3][1] * b.y + a.m[3][2] * b.z
    };
}

// ######################################################################### //
// # Matrix-Matrix multiplication operators.                               # //
// ######################################################################### //

/**
 * @brief Multiplies two Matrix2x2 instances together.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix2x2 instance.
 * @param b The second Matrix2x2 instance.
 *
 * @return The result of the matrix-matrix product.
 */
template <typename T>
Matrix2x2<T> operator*(const Matrix2x2<T>& a, const Matrix2x2<T>& b) {
    return {
        a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0],
        a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1],
        a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0],
        a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1]
    };
}

/**
 * @brief Multiplies two Matrix3x3 instances together.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix3x3 instance.
 * @param b The second Matrix3x3 instance.
 *
 * @return The result of the matrix-matrix product.
 */
template <typename T>
Matrix3x3<T> operator*(const Matrix3x3<T>& a, const Matrix3x3<T>& b) {
    return {
        a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0] + a.m[0][2]*b.m[2][0],
        a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1] + a.m[0][2]*b.m[2][1],
        a.m[0][0]*b.m[0][2] + a.m[0][1]*b.m[1][2] + a.m[0][2]*b.m[2][2],
        a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0] + a.m[1][2]*b.m[2][0],
        a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1] + a.m[1][2]*b.m[2][1],
        a.m[1][0]*b.m[0][2] + a.m[1][1]*b.m[1][2] + a.m[1][2]*b.m[2][2],
        a.m[2][0]*b.m[0][0] + a.m[2][1]*b.m[1][0] + a.m[2][2]*b.m[2][0],
        a.m[2][0]*b.m[0][1] + a.m[2][1]*b.m[1][1] + a.m[2][2]*b.m[2][1],
        a.m[2][0]*b.m[0][2] + a.m[2][1]*b.m[1][2] + a.m[2][2]*b.m[2][2]
    };
}

/**
 * @brief Multiplies two Matrix4x4 instances together.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix4x4 instance.
 * @param b The second Matrix4x4 instance.
 *
 * @return The result of the matrix-matrix product.
 */
template <typename T>
Matrix4x4<T> operator*(const Matrix4x4<T>& a, const Matrix4x4<T>& b) {
    return {
        a.m[0][0]*b.m[0][0] + a.m[0][1]*b.m[1][0] + a.m[0][2]*b.m[2][0] + a.m[0][3]*b.m[3][0],
        a.m[0][0]*b.m[0][1] + a.m[0][1]*b.m[1][1] + a.m[0][2]*b.m[2][1] + a.m[0][3]*b.m[3][1],
        a.m[0][0]*b.m[0][2] + a.m[0][1]*b.m[1][2] + a.m[0][2]*b.m[2][2] + a.m[0][3]*b.m[3][2],
        a.m[0][0]*b.m[0][3] + a.m[0][1]*b.m[1][3] + a.m[0][2]*b.m[2][3] + a.m[0][3]*b.m[3][3],
        a.m[1][0]*b.m[0][0] + a.m[1][1]*b.m[1][0] + a.m[1][2]*b.m[2][0] + a.m[1][3]*b.m[3][0],
        a.m[1][0]*b.m[0][1] + a.m[1][1]*b.m[1][1] + a.m[1][2]*b.m[2][1] + a.m[1][3]*b.m[3][1],
        a.m[1][0]*b.m[0][2] + a.m[1][1]*b.m[1][2] + a.m[1][2]*b.m[2][2] + a.m[1][3]*b.m[3][2],
        a.m[1][0]*b.m[0][3] + a.m[1][1]*b.m[1][3] + a.m[1][2]*b.m[2][3] + a.m[1][3]*b.m[3][3],
        a.m[2][0]*b.m[0][0] + a.m[2][1]*b.m[1][0] + a.m[2][2]*b.m[2][0] + a.m[2][3]*b.m[3][0],
        a.m[2][0]*b.m[0][1] + a.m[2][1]*b.m[1][1] + a.m[2][2]*b.m[2][1] + a.m[2][3]*b.m[3][1],
        a.m[2][0]*b.m[0][2] + a.m[2][1]*b.m[1][2] + a.m[2][2]*b.m[2][2] + a.m[2][3]*b.m[3][2],
        a.m[2][0]*b.m[0][3] + a.m[2][1]*b.m[1][3] + a.m[2][2]*b.m[2][3] + a.m[2][3]*b.m[3][3],
        a.m[3][0]*b.m[0][0] + a.m[3][1]*b.m[1][0] + a.m[3][2]*b.m[2][0] + a.m[3][3]*b.m[3][0],
        a.m[3][0]*b.m[0][1] + a.m[3][1]*b.m[1][1] + a.m[3][2]*b.m[2][1] + a.m[3][3]*b.m[3][1],
        a.m[3][0]*b.m[0][2] + a.m[3][1]*b.m[1][2] + a.m[3][2]*b.m[2][2] + a.m[3][3]*b.m[3][2],
        a.m[3][0]*b.m[0][3] + a.m[3][1]*b.m[1][3] + a.m[3][2]*b.m[2][3] + a.m[3][3]*b.m[3][3]
    };
}

// ######################################################################### //
// # Inner products.                                                       # //
// ######################################################################### //

/**
 * @brief Takes the inner product of two Vector2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector2 instance.
 * @param b The second Vector2 instance.
 *
 * @return The vector-vector inner product.
 */
template <typename T>
T inner(const Vector2<T> &a, const Vector2<T> &b) {
    return a.x * b.x + a.y * b.y;
}

/**
 * @brief Takes the inner product of two Vector3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector3 instance.
 * @param b The second Vector3 instance.
 *
 * @return The vector-vector inner product.
 */
template <typename T>
T inner(const Vector3<T> &a, const Vector3<T> &b) {
    return a.x * b.x + a.y * b.y + a.z * b.z;
}

/**
 * @brief Takes the inner product of two Vector4 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector4 instance.
 * @param b The second Vector4 instance.
 *
 * @return The vector-vector inner product.
 */
template <typename T>
T inner(const Vector4<T> &a, const Vector4<T> &b) {
    return a.x * b.x + a.y * b.y + a.z * b.z + a.w * b.w;
}

/**
 * @brief Takes the Frobenius inner product of two Matrix2x2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix2x2 instance.
 * @param b The second Matrix2x2 instance.
 *
 * @return The matrix-matrix inner product.
 */
template <typename T>
T inner(const Matrix2x2<T> &a, const Matrix2x2<T> &b) {
    return a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[0][1] +
           a.m[1][0] * b.m[1][0] + a.m[1][1] * b.m[1][1];
}

/**
 * @brief Takes the Frobenius inner product of two Matrix3x3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix3x3 instance.
 * @param b The second Matrix3x3 instance.
 *
 * @return The matrix-matrix inner product.
 */
template <typename T>
T inner(const Matrix3x3<T> &a, const Matrix3x3<T> &b) {
    return a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[0][1] + a.m[0][2] * b.m[0][2] +
           a.m[1][0] * b.m[1][0] + a.m[1][1] * b.m[1][1] + a.m[1][2] * b.m[1][2] +
           a.m[2][0] * b.m[2][0] + a.m[2][1] * b.m[2][1] + a.m[2][2] * b.m[2][2];
}

/**
 * @brief Takes the Frobenius inner product of two Matrix4x4 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Matrix4x4 instance.
 * @param b The second Matrix4x4 instance.
 *
 * @return The matrix-matrix inner product.
 */
template <typename T>
T inner(const Matrix4x4<T> &a, const Matrix4x4<T> &b) {
    return a.m[0][0] * b.m[0][0] + a.m[0][1] * b.m[0][1] + a.m[0][2] * b.m[0][2] + a.m[0][3] * b.m[0][3] +
           a.m[1][0] * b.m[1][0] + a.m[1][1] * b.m[1][1] + a.m[1][2] * b.m[1][2] + a.m[1][3] * b.m[1][3] +
           a.m[2][0] * b.m[2][0] + a.m[2][1] * b.m[2][1] + a.m[2][2] * b.m[2][2] + a.m[2][3] * b.m[2][3] +
           a.m[3][0] * b.m[3][0] + a.m[3][1] * b.m[3][1] + a.m[3][2] * b.m[3][2] + a.m[3][3] * b.m[3][3];
}

// ######################################################################### //
// # Cross products.                                                       # //
// ######################################################################### //

/**
 * @brief Takes the pseudo-cross product of two Vector2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector2 instance.
 * @param b The second Vector2 instance.
 *
 * @return The vector-vector (pseudo) cross product.
 */
template <typename T>
T cross(const Vector2<T> &a, const Vector2<T> &b) {
    return a.x * b.y - a.y * b.x;
}

/**
 * @brief Takes the cross product of two Vector3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a The first Vector2 instance.
 * @param b The second Vector2 instance.
 *
 * @return The vector-vector cross product.
 */
template <typename T>
Vector3<T> cross(const Vector3<T> &a, const Vector3<T> &b) {
    return {
        a.y * b.z - a.z * b.y,
        a.z * b.x - a.x * b.z,
        a.x * b.y - a.y * b.x
    };
}

// ######################################################################### //
// # Outer products.                                                       # //
// ######################################################################### //

/**
 * @brief Takes the outer product of two Vector2 instances.
 *
 * @tparam T the base data type.
 *
 * @param a the first Vector2 instance.
 * @param b the second Vector2 instance.
 *
 * @return The vector-vector outer product.
 */
template <typename T>
Matrix2x2<T> outer(const Vector2<T> &a, const Vector2<T> &b) {
    return {
        a.x * b.x, a.x * b.y,
        a.y * b.x, a.y * b.y
    };
}

/**
 * @brief Takes the outer product of two Vector3 instances.
 *
 * @tparam T the base data type.
 *
 * @param a the first Vector2 instance.
 * @param b the second Vector2 instance.
 *
 * @return The vector-vector outer product.
 */
template <typename T>
Matrix3x3<T> outer(const Vector3<T> &a, const Vector3<T> &b) {
    return {
        a.x * b.x, a.x * b.y, a.x * b.z,
        a.y * b.x, a.y * b.y, a.y * b.z,
        a.z * b.x, a.z * b.y, a.z * b.z
    };
}

/**
 * @brief Takes the outer product of two Vector4 instances.
 *
 * @tparam T the base data type.
 *
 * @param a the first Vector2 instance.
 * @param b the second Vector2 instance.
 *
 * @return The vector-vector outer product.
 */
template <typename T>
Matrix4x4<T> outer(const Vector4<T> &a, const Vector4<T> &b) {
    return {
        a.x * b.x, a.x * b.y, a.x * b.z, a.x * b.w,
        a.y * b.x, a.y * b.y, a.y * b.z, a.y * b.w,
        a.z * b.x, a.z * b.y, a.z * b.z, a.z * b.w,
        a.w * b.x, a.w * b.y, a.w * b.z, a.w * b.w
    };
}

// ######################################################################### //
// # Matrix adjugate.                                                      # //
// ######################################################################### //

/**
 * @brief Takes the adjugate of a Matrix2x2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix2x2 instance.
 *
 * @return The matrix adjugate.
 */
template <typename T>
Matrix2x2<T> adj(const Matrix2x2<T> &a) {
    return {
         a.m[1][1],
        -a.m[0][1],
        -a.m[1][0],
         a.m[0][0]
    };
}

/**
 * @brief Takes the adjugate of a Matrix3x3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix3x3 instance.
 *
 * @return The matrix adjugate.
 */
template <typename T>
Matrix3x3<T> adj(const Matrix3x3<T> &a) {
    return {
        a.m[1][1]*a.m[2][2] - a.m[1][2]*a.m[2][1],
        a.m[0][2]*a.m[2][1] - a.m[0][1]*a.m[2][2],
        a.m[0][1]*a.m[1][2] - a.m[0][2]*a.m[1][1],
        a.m[1][2]*a.m[2][0] - a.m[1][0]*a.m[2][2],
        a.m[0][0]*a.m[2][2] - a.m[0][2]*a.m[2][0],
        a.m[0][2]*a.m[1][0] - a.m[0][0]*a.m[1][2],
        a.m[1][0]*a.m[2][1] - a.m[1][1]*a.m[2][0],
        a.m[0][1]*a.m[2][0] - a.m[0][0]*a.m[2][1],
        a.m[0][0]*a.m[1][1] - a.m[0][1]*a.m[1][0]
    };
}

/**
 * @brief Takes the adjugate of a Matrix4x4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix4x4 instance.
 *
 * @return The matrix adjugate.
 */
template <typename T>
Matrix4x4<T> adj(const Matrix4x4<T> &a) {
    return {
        a.m[1][2]*a.m[2][3]*a.m[3][1] - a.m[1][3]*a.m[2][2]*a.m[3][1] + a.m[1][3]*a.m[2][1]*a.m[3][2] - a.m[1][1]*a.m[2][3]*a.m[3][2] - a.m[1][2]*a.m[2][1]*a.m[3][3] + a.m[1][1]*a.m[2][2]*a.m[3][3],
        a.m[0][3]*a.m[2][2]*a.m[3][1] - a.m[0][2]*a.m[2][3]*a.m[3][1] - a.m[0][3]*a.m[2][1]*a.m[3][2] + a.m[0][1]*a.m[2][3]*a.m[3][2] + a.m[0][2]*a.m[2][1]*a.m[3][3] - a.m[0][1]*a.m[2][2]*a.m[3][3],
        a.m[0][2]*a.m[1][3]*a.m[3][1] - a.m[0][3]*a.m[1][2]*a.m[3][1] + a.m[0][3]*a.m[1][1]*a.m[3][2] - a.m[0][1]*a.m[1][3]*a.m[3][2] - a.m[0][2]*a.m[1][1]*a.m[3][3] + a.m[0][1]*a.m[1][2]*a.m[3][3],
        a.m[0][3]*a.m[1][2]*a.m[2][1] - a.m[0][2]*a.m[1][3]*a.m[2][1] - a.m[0][3]*a.m[1][1]*a.m[2][2] + a.m[0][1]*a.m[1][3]*a.m[2][2] + a.m[0][2]*a.m[1][1]*a.m[2][3] - a.m[0][1]*a.m[1][2]*a.m[2][3],
        a.m[1][3]*a.m[2][2]*a.m[3][0] - a.m[1][2]*a.m[2][3]*a.m[3][0] - a.m[1][3]*a.m[2][0]*a.m[3][2] + a.m[1][0]*a.m[2][3]*a.m[3][2] + a.m[1][2]*a.m[2][0]*a.m[3][3] - a.m[1][0]*a.m[2][2]*a.m[3][3],
        a.m[0][2]*a.m[2][3]*a.m[3][0] - a.m[0][3]*a.m[2][2]*a.m[3][0] + a.m[0][3]*a.m[2][0]*a.m[3][2] - a.m[0][0]*a.m[2][3]*a.m[3][2] - a.m[0][2]*a.m[2][0]*a.m[3][3] + a.m[0][0]*a.m[2][2]*a.m[3][3],
        a.m[0][3]*a.m[1][2]*a.m[3][0] - a.m[0][2]*a.m[1][3]*a.m[3][0] - a.m[0][3]*a.m[1][0]*a.m[3][2] + a.m[0][0]*a.m[1][3]*a.m[3][2] + a.m[0][2]*a.m[1][0]*a.m[3][3] - a.m[0][0]*a.m[1][2]*a.m[3][3],
        a.m[0][2]*a.m[1][3]*a.m[2][0] - a.m[0][3]*a.m[1][2]*a.m[2][0] + a.m[0][3]*a.m[1][0]*a.m[2][2] - a.m[0][0]*a.m[1][3]*a.m[2][2] - a.m[0][2]*a.m[1][0]*a.m[2][3] + a.m[0][0]*a.m[1][2]*a.m[2][3],
        a.m[1][1]*a.m[2][3]*a.m[3][0] - a.m[1][3]*a.m[2][1]*a.m[3][0] + a.m[1][3]*a.m[2][0]*a.m[3][1] - a.m[1][0]*a.m[2][3]*a.m[3][1] - a.m[1][1]*a.m[2][0]*a.m[3][3] + a.m[1][0]*a.m[2][1]*a.m[3][3],
        a.m[0][3]*a.m[2][1]*a.m[3][0] - a.m[0][1]*a.m[2][3]*a.m[3][0] - a.m[0][3]*a.m[2][0]*a.m[3][1] + a.m[0][0]*a.m[2][3]*a.m[3][1] + a.m[0][1]*a.m[2][0]*a.m[3][3] - a.m[0][0]*a.m[2][1]*a.m[3][3],
        a.m[0][1]*a.m[1][3]*a.m[3][0] - a.m[0][3]*a.m[1][1]*a.m[3][0] + a.m[0][3]*a.m[1][0]*a.m[3][1] - a.m[0][0]*a.m[1][3]*a.m[3][1] - a.m[0][1]*a.m[1][0]*a.m[3][3] + a.m[0][0]*a.m[1][1]*a.m[3][3],
        a.m[0][3]*a.m[1][1]*a.m[2][0] - a.m[0][1]*a.m[1][3]*a.m[2][0] - a.m[0][3]*a.m[1][0]*a.m[2][1] + a.m[0][0]*a.m[1][3]*a.m[2][1] + a.m[0][1]*a.m[1][0]*a.m[2][3] - a.m[0][0]*a.m[1][1]*a.m[2][3],
        a.m[1][2]*a.m[2][1]*a.m[3][0] - a.m[1][1]*a.m[2][2]*a.m[3][0] - a.m[1][2]*a.m[2][0]*a.m[3][1] + a.m[1][0]*a.m[2][2]*a.m[3][1] + a.m[1][1]*a.m[2][0]*a.m[3][2] - a.m[1][0]*a.m[2][1]*a.m[3][2],
        a.m[0][1]*a.m[2][2]*a.m[3][0] - a.m[0][2]*a.m[2][1]*a.m[3][0] + a.m[0][2]*a.m[2][0]*a.m[3][1] - a.m[0][0]*a.m[2][2]*a.m[3][1] - a.m[0][1]*a.m[2][0]*a.m[3][2] + a.m[0][0]*a.m[2][1]*a.m[3][2],
        a.m[0][2]*a.m[1][1]*a.m[3][0] - a.m[0][1]*a.m[1][2]*a.m[3][0] - a.m[0][2]*a.m[1][0]*a.m[3][1] + a.m[0][0]*a.m[1][2]*a.m[3][1] + a.m[0][1]*a.m[1][0]*a.m[3][2] - a.m[0][0]*a.m[1][1]*a.m[3][2],
        a.m[0][1]*a.m[1][2]*a.m[2][0] - a.m[0][2]*a.m[1][1]*a.m[2][0] + a.m[0][2]*a.m[1][0]*a.m[2][1] - a.m[0][0]*a.m[1][2]*a.m[2][1] - a.m[0][1]*a.m[1][0]*a.m[2][2] + a.m[0][0]*a.m[1][1]*a.m[2][2]
    };
}

// ######################################################################### //
// # Matrix determinants.                                                  # //
// ######################################################################### //

/**
 * @brief Takes the determinant of a Matrix2x2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix2x2 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
T det(const Matrix2x2<T> &a) {
    return a.m[0][0]*a.m[1][1] - a.m[0][1]*a.m[1][0];
}

/**
 * @brief Takes the determinant of a Matrix3x3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix3x3 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
T det(const Matrix3x3<T> &a) {
    return a.m[0][1]*a.m[1][2]*a.m[2][0] - a.m[0][2]*a.m[1][1]*a.m[2][0] +
           a.m[0][2]*a.m[1][0]*a.m[2][1] - a.m[0][0]*a.m[1][2]*a.m[2][1] -
           a.m[0][1]*a.m[1][0]*a.m[2][2] + a.m[0][0]*a.m[1][1]*a.m[2][2];
}

/**
 * @brief Takes the determinant of a Matrix4x4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix4x4 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
T det(const Matrix4x4<T> &a) {
    return a.m[0][3]*a.m[1][2]*a.m[2][1]*a.m[3][0] -
           a.m[0][2]*a.m[1][3]*a.m[2][1]*a.m[3][0] -
           a.m[0][3]*a.m[1][1]*a.m[2][2]*a.m[3][0] +
           a.m[0][1]*a.m[1][3]*a.m[2][2]*a.m[3][0] +
           a.m[0][2]*a.m[1][1]*a.m[2][3]*a.m[3][0] -
           a.m[0][1]*a.m[1][2]*a.m[2][3]*a.m[3][0] -
           a.m[0][3]*a.m[1][2]*a.m[2][0]*a.m[3][1] +
           a.m[0][2]*a.m[1][3]*a.m[2][0]*a.m[3][1] +
           a.m[0][3]*a.m[1][0]*a.m[2][2]*a.m[3][1] -
           a.m[0][0]*a.m[1][3]*a.m[2][2]*a.m[3][1] -
           a.m[0][2]*a.m[1][0]*a.m[2][3]*a.m[3][1] +
           a.m[0][0]*a.m[1][2]*a.m[2][3]*a.m[3][1] +
           a.m[0][3]*a.m[1][1]*a.m[2][0]*a.m[3][2] -
           a.m[0][1]*a.m[1][3]*a.m[2][0]*a.m[3][2] -
           a.m[0][3]*a.m[1][0]*a.m[2][1]*a.m[3][2] +
           a.m[0][0]*a.m[1][3]*a.m[2][1]*a.m[3][2] +
           a.m[0][1]*a.m[1][0]*a.m[2][3]*a.m[3][2] -
           a.m[0][0]*a.m[1][1]*a.m[2][3]*a.m[3][2] -
           a.m[0][2]*a.m[1][1]*a.m[2][0]*a.m[3][3] +
           a.m[0][1]*a.m[1][2]*a.m[2][0]*a.m[3][3] +
           a.m[0][2]*a.m[1][0]*a.m[2][1]*a.m[3][3] -
           a.m[0][0]*a.m[1][2]*a.m[2][1]*a.m[3][3] -
           a.m[0][1]*a.m[1][0]*a.m[2][2]*a.m[3][3] +
           a.m[0][0]*a.m[1][1]*a.m[2][2]*a.m[3][3];
}

// ######################################################################### //
// # Matrix trace.                                                         # //
// ######################################################################### //

/**
 * @brief Takes the trace of a Matrix2x2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix2x2 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
T trace(const Matrix2x2<T> &a) {
    return a.m[0][0] + a.m[1][1];
}

/**
 * @brief Takes the trace of a Matrix3x3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix3x3 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
T trace(const Matrix3x3<T> &a) {
    return a.m[0][0] + a.m[1][1] + a.m[2][2];
}

/**
 * @brief Takes the trace of a Matrix4x4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix4x4 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
T trace(const Matrix4x4<T> &a) {
    return a.m[0][0] + a.m[1][1] + a.m[2][2] + a.m[3][3];
}

// ######################################################################### //
// # Matrix diagonals.                                                     # //
// ######################################################################### //

/**
 * @brief Takes the diagonal of a Matrix2x2 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix2x2 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
Vector2<T> diag(const Matrix2x2<T> &a) {
    return {a.m[0][0], a.m[1][1]};
}

/**
 * @brief Takes the diagonal of a Matrix3x3 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix3x3 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
Vector3<T> diag(const Matrix3x3<T> &a) {
    return {a.m[0][0], a.m[1][1], a.m[2][2]};
}

/**
 * @brief Takes the diagonal of a Matrix4x4 instance.
 *
 * @tparam T the base data type.
 *
 * @param a the Matrix4x4 instance.
 *
 * @return The matrix determinant.
 */
template <typename T>
Vector4<T> diag(const Matrix4x4<T> &a) {
    return {a.m[0][0], a.m[1][1], a.m[2][2], a.m[3][3]};
}

// ######################################################################### //
// # Conversions.                                                          # //
// ######################################################################### //

/**
 * @brief Converts a 4D vector to a 3D vector by assuming that the 4D vector
 *        is homogenous.
 *
 * @tparam T the base data type.
 *
 * @param a the Vector4 instance.
 *
 * @return a Vector3 instance (assuming that the input was homogenous).
 */
template <typename T>
Vector3<T> hom_convert(const Vector4<T> &a) {
    return {a.x / a.w, a.y / a.w, a.z / a.w};
}

/**
 * @brief Converts a 3D vector to a 4D homogenous vector.
 *
 * @tparam T the base data type.
 *
 * @param a the Vector3 instance.
 *
 * @return a homogenous Vector4 instance.
 */
template <typename T>
Vector4<T> convert(const Vector3<T> &a) {
    return {a.x, a.y , a.z, 1.0};
}

#endif //FMM_LINALG_HPP
