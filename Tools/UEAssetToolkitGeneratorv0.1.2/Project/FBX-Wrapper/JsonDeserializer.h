#ifndef FBX_WRAPPER_JSONDESERIALIZER_H
#define FBX_WRAPPER_JSONDESERIALIZER_H

#include <string>
#include "json.hpp"
#include "SMStructs.h"
#include "SKStructs.h"
#include "SKMStructs.h"

class JsonDeserializer {
public:
    static FStaticMeshStruct DeserializeSM(std::string Json);
    static FReferenceSkeleton DeserializeSK(std::string Json, std::string ParentType);
    static FSkeletalMeshStruct DeserializeSKM(std::string Json);

private:
    static nlohmann::json UZ(nlohmann::json JsonObj);
};


#endif //FBX_WRAPPER_JSONDESERIALIZER_H
