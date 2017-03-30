/**
 * Simple Image Processing Library
 * Copyright Erik Smistad 2012
 * See LICENSE file for information on use 
 */

#ifndef SIPL_TYPES
#define SIPL_TYPES

#include <math.h>

namespace SIPL {
typedef unsigned char uchar;
typedef unsigned short ushort;
typedef unsigned int uint; 
typedef struct color_float { float red, blue, green;} color_float ; 
typedef struct color_uchar { unsigned char red, blue, green;} color_uchar ;
enum slice_plane {X,Y,Z};

class int2;
// Vector classes
class float2 {
    public:
        float x,y;
        float2() {
            this->x = 0.0f;
            this->y = 0.0f;
        };
        float2(float x, float y) {
            this->x = x;
            this->y = y;
        };
        float length() const {
            return sqrt((float)(x*x+y*y));
        };
        float2 normalize() const {
            float l = this->length();
            return float2(x/l,y/l);
        };
        float distance(float2 other) const ;
        float dot(float2 other) const ;
        float distance(int2 other) const ;
        float dot(int2 other) const ;
        bool operator==(float2 other) const;
        bool operator==(int2 other) const;
        template <class T>
        float2 operator+(T v) const {
            float2 n;
            n.x = this->x + v;
            n.y = this->y + v;
            return n;
        };
        template <class T>
        float2 operator-(T v) const {
            float2 n;
            n.x = this->x - v;
            n.y = this->y - v;
            return n;
        };
        template <class T>
        float2 operator*(T v) const {
            float2 n;
            n.x = this->x * v;
            n.y = this->y * v;
            return n;
        };
        template <class T>
        float2 operator/(T v) const {
            float2 n;
            n.x = this->x / v;
            n.y = this->y / v;
            return n;
        };

 };

class int3;

class float3 {
    public:
        float x,y,z;
        float3() {
            this->x = 0.0f;
            this->y = 0.0f;
            this->z = 0.0f;
        };
        float3(float x, float y, float z) {
            this->x = x;
            this->y = y;
            this->z = z;
        };
        float length() const {
            return sqrt((float)(x*x+y*y+z*z));
        };
        float3 normalize() {
            float l = this->length();
            return float3(x / l, y / l, z / l);
        };
        float distance(float3 other) const ;
        float distance(int3 other) const ;
        float dot(float3 other) const ;
        float dot(int3 other) const ;
        bool operator==(float3 other) const;
        bool operator==(int3 other) const;
        template <class T>
        float3 operator+(T v) const {
            float3 n;
            n.x = this->x + v;
            n.y = this->y + v;
            n.z = this->z + v;
            return n;
        };
        template <class T>
        float3 operator-(T v) const {
            float3 n;
            n.x = this->x - v;
            n.y = this->y - v;
            n.z = this->z - v;
            return n;
        };
        template <class T>
        float3 operator*(T v) const {
            float3 n;
            n.x = this->x * v;
            n.y = this->y * v;
            n.z = this->z * v;
            return n;
        };
        template <class T>
        float3 operator/(T v) const {
            float3 n;
            n.x = this->x / v;
            n.y = this->y / v;
            n.z = this->z / v;
            return n;
        };
};

// Matrix class
class mat3x3 {
    public:
        float m11, m12, m13, m21, m22, m23, m31, m32, m33;
        mat3x3() {
            this->m11 = 0.0f;
            this->m12 = 0.0f;
            this->m13 = 0.0f;
            this->m21 = 0.0f;
            this->m22 = 0.0f;
            this->m23 = 0.0f;
            this->m31 = 0.0f;
            this->m32 = 0.0f;
            this->m33 = 0.0f;
        };
        mat3x3(float m11, float m12, float m13, float m21, float m22, float m23, float m31, float m32, float m33) {
            this->m11 = m11;
            this->m12 = m12;
            this->m13 = m13;
            this->m21 = m21;
            this->m22 = m22;
            this->m23 = m23;
            this->m31 = m31;
            this->m32 = m32;
            this->m33 = m33;
        };

};


// These are not for images/volumes
class int2 {
    public:
        int x,y;
        int2() {
            this->x = 0;
            this->y = 0;
        };
        int2(float x, float y) {
            this->x = x;
            this->y = y;
        };
        float length() const {
            return sqrt((float)(x*x+y*y));
        };
        float2 normalize() const {
            float l = this->length();
            return float2(x / l, y / l);
        };
        float distance(float2 other) const ;
        float dot(float2 other) const ;
        float distance(int2 other) const ;
        float dot(int2 other) const ;
        bool operator==(int2 other) const;
        bool operator==(float2 other) const;
        template <class T>
        int2 operator+(T v) const {
            int2 n;
            n.x = this->x + v;
            n.y = this->y + v;
            return n;
        };
        template <class T>
        int2 operator-(T v) const {
            int2 n;
            n.x = this->x - v;
            n.y = this->y - v;
            return n;
        };
        template <class T>
        int2 operator*(T v) const {
            int2 n;
            n.x = this->x * v;
            n.y = this->y * v;
            return n;
        };
        template <class T>
        int2 operator/(T v) const {
            int2 n;
            n.x = this->x / v;
            n.y = this->y / v;
            return n;
        };
};

class int3 {
    public:
        int x,y,z;
        int3() {
            this->x = 0;
            this->y = 0;
            this->z = 0;
        };
        int3(int x, int y, int z) {
            this->x = x;
            this->y = y;
            this->z = z;
        };
        float length() const {
            return sqrt((float)(x*x+y*y+z*z));
        };
        float3 normalize() const {
            float l = this->length();
            return float3(x / l, y / l, z / l);
        };
        float distance(float3 other) const ;
        float distance(int3 other) const ;
        float dot(float3 other) const ;
        float dot(int3 other) const ;
        bool operator==(int3 other) const;
        bool operator==(float3 other) const;
        template <class T>
        int3 operator+(T v) const {
            int3 n;
            n.x = this->x + v;
            n.y = this->y + v;
            n.z = this->z + v;
            return n;
        };
        template <class T>
        int3 operator-(T v) const {
            int3 n;
            n.x = this->x - v;
            n.y = this->y - v;
            n.z = this->z - v;
            return n;
        };
        template <class T>
        int3 operator*(T v) const {
            int3 n;
            n.x = this->x * v;
            n.y = this->y * v;
            n.z = this->z * v;
            return n;
        };
        template <class T>
        int3 operator/(T v) const {
            int3 n;
            n.x = this->x / v;
            n.y = this->y / v;
            n.z = this->z / v;
            return n;
        };
};

class Region {
    public:
        int3 offset;
        int3 size;
        Region(int x_size, int y_size);
        Region(int x_offset, int y_offset, int x_size, int y_size);
        Region(int x_size, int y_size, int z_size);
        Region(int x_offset, int y_offset, int z_offset, int x_size, int y_size, int z_size);
};

// float2
template <> inline
float2 float2::operator+(float2 other) const {
    float2 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    return v;
}
template <> inline
float2 float2::operator+(int2 other) const {
    float2 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    return v;
}
template <> inline
float2 float2::operator-(float2 other) const {
    float2 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    return v;
}
template <> inline
float2 float2::operator-(int2 other) const {
    float2 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    return v;
}
template <> inline
float2 float2::operator*(float2 other) const {
    float2 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    return v;
}
template <> inline
float2 float2::operator*(int2 other) const {
    float2 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    return v;
}

template <class T>
float2 operator+(T scalar, float2 other) {
    return other.operator+(scalar);
}
template <class T>
float2 operator-(T scalar, float2 other) {
    return other.operator-(scalar);
}
template <class T>
float2 operator*(T scalar, float2 other) {
    return other.operator*(scalar);
}


// float3
template <> inline
float3 float3::operator+(float3 other) const {
    float3 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    v.z = this->z + other.z;
    return v;
}
template <> inline
float3 float3::operator+(int3 other) const {
    float3 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    v.z = this->z + other.z;
    return v;
}
template <> inline
float3 float3::operator-(float3 other) const {
    float3 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    v.z = this->z - other.z;
    return v;
}
template <> inline
float3 float3::operator-(int3 other) const {
    float3 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    v.z = this->z - other.z;
    return v;
}
template <> inline
float3 float3::operator*(float3 other) const {
    float3 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    v.z = this->z * other.z;
    return v;
}
template <> inline
float3 float3::operator*(int3 other) const {
    float3 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    v.z = this->z * other.z;
    return v;
}

template <class T>
float3 operator+(T scalar, float3 other) {
    return other.operator+(scalar);
}
template <class T>
float3 operator-(T scalar, float3 other) {
    return other.operator-(scalar);
}
template <class T>
float3 operator*(T scalar, float3 other) {
    return other.operator*(scalar);
}

// int2
template <> inline
int2 int2::operator+(float2 other) const {
    int2 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    return v;
}
template <> inline
int2 int2::operator+(int2 other) const {
    int2 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    return v;
}
template <> inline
int2 int2::operator-(float2 other) const {
    int2 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    return v;
}
template <> inline
int2 int2::operator-(int2 other) const {
    int2 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    return v;
}
template <> inline
int2 int2::operator*(float2 other) const {
    int2 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    return v;
}
template <> inline
int2 int2::operator*(int2 other) const {
    int2 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    return v;
}

template <class T>
int2 operator+(T scalar, int2 other) {
    return other.operator+(scalar);
}
template <class T>
int2 operator-(T scalar, int2 other) {
    return other.operator-(scalar);
}
template <class T>
int2 operator*(T scalar, int2 other) {
    return other.operator*(scalar);
}


// float3
template <> inline
int3 int3::operator+(float3 other) const {
    int3 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    v.z = this->z + other.z;
    return v;
}
template <> inline
int3 int3::operator+(int3 other) const {
    int3 v;
    v.x = this->x + other.x;
    v.y = this->y + other.y;
    v.z = this->z + other.z;
    return v;
}
template <> inline
int3 int3::operator-(float3 other) const {
    int3 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    v.z = this->z - other.z;
    return v;
}
template <> inline
int3 int3::operator-(int3 other) const {
    int3 v;
    v.x = this->x - other.x;
    v.y = this->y - other.y;
    v.z = this->z - other.z;
    return v;
}
template <> inline
int3 int3::operator*(float3 other) const {
    int3 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    v.z = this->z * other.z;
    return v;
}
template <> inline
int3 int3::operator*(int3 other) const {
    int3 v;
    v.x = this->x * other.x;
    v.y = this->y * other.y;
    v.z = this->z * other.z;
    return v;
}

template <class T>
int3 operator+(T scalar, int3 other) {
    return other.operator+(scalar);
}
template <class T>
int3 operator-(T scalar, int3 other) {
    return other.operator-(scalar);
}
template <class T>
int3 operator*(T scalar, int3 other) {
    return other.operator*(scalar);
}


}; // end SIPL namespace
#endif
