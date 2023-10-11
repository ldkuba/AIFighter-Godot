#include "ailink.h"
#include <godot_cpp/core/class_db.hpp>
#include <stdlib.h>

#include "schema_compiled/CubesExample_generated.h"

using namespace godot;

void AILink::_bind_methods() {
}

AILink::AILink() {
    flatbuffers::FlatBufferBuilder builder(1024);
    
    auto setupMessage = CubesExample::CreateSetupMessage(builder, false);
    builder.Finish(setupMessage);

    printf("AILink::AILink() %d\n", builder.GetSize());
}

AILink::~AILink() {
}

void AILink::_process(double delta) {
}
