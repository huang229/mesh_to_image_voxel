#pragma once
#ifndef BASIC_VALUE_TYPES_H
#define BASIC_VALUE_TYPES_H




/*! @file BasicValueTypes.h
	@brief ��������ά���ݽṹ.

	�������������ݽṹ������ά���������꣬˫�������꣬��ת���󣬰�Χ��.
*/

// �����������������ݽṹ�����ά˫����PointXY,��ά˫����Point
// ������stl�㷨ͷ�ļ���3*3 4*4��ת����ͷ�ļ�����Χ��ͷ�ļ�����Щ�ļ�����
// �������ļ��в�Ҫ����������ֱ����#include<BasicValueTypes.h>

#pragma warning(push)
//openmesh
#undef min
#undef max
#ifndef _USE_MATH_DEFINES
#define _USE_MATH_DEFINES
#define _MATH_DEFINES_DEFINED
#endif
#include<OpenMesh/Core/Geometry/VectorT.hh>
#include<OpenMesh/Core/Mesh/Traits.hh>
#pragma warning(pop)
#include <cstdint>
#include <math.h>
#include <algorithm>

#ifdef USING_X64
typedef double FReal;
#else
typedef float FReal;
#endif

typedef OpenMesh::Vec2d         PointXYd;
typedef OpenMesh::Vec3d         Pointd;
typedef OpenMesh::Vec3d         Normald;

using OpenMesh::VectorT;
#ifndef M_PI_2
#define M_PI_2	1.57079632679489661923
#endif // !


#endif // !BASIC_VALUE_TYPES_H
