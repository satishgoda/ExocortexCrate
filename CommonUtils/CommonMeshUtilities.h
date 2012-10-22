#ifndef __MESH_UTILITIES_H
#define __MESH_UTILITIES_H

#include "CommonAlembic.h"

bool isAlembicMeshValid( Alembic::AbcGeom::IObject *pIObj );
bool isAlembicMeshNormals( Alembic::AbcGeom::IObject *pIObj, bool& isConstant );
bool isAlembicMeshPositions( Alembic::AbcGeom::IObject *pIObj, bool& isConstant );
bool isAlembicMeshUVWs( Alembic::AbcGeom::IObject *pIObj, bool& isConstant );
bool isAlembicMeshTopoDynamic( Alembic::AbcGeom::IObject *pIObj );
bool isAlembicMeshTopology( Alembic::AbcGeom::IObject *pIObj );
bool isAlembicMeshPointCache( Alembic::AbcGeom::IObject *pIObj );


int validateAlembicMeshTopo(std::vector<Alembic::AbcCoreAbstract::ALEMBIC_VERSION_NS::int32_t> faceCounts,
							std::vector<Alembic::AbcCoreAbstract::ALEMBIC_VERSION_NS::int32_t> faceIndices,
							const std::string& meshName);

bool getIndexAndValues( Alembic::Abc::Int32ArraySamplePtr faceIndices, Alembic::AbcGeom::IV2fGeomParam& param, AbcA::index_t sampleIndex, 
					   std::vector<Imath::V2f>& outputValues, std::vector<AbcA::uint32_t>& outputIndices );
bool getIndexAndValues( Alembic::Abc::Int32ArraySamplePtr faceIndices, Alembic::AbcGeom::IN3fGeomParam& param, AbcA::index_t sampleIndex,
					   std::vector<Imath::V3f>& outputValues, std::vector<AbcA::uint32_t>& outputIndices );

#endif // __MESH_UTILITIES_H