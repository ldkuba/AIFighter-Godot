#include "ailink.h"
#include <godot_cpp/core/class_db.hpp>
#include <stdlib.h>

#include "schema_compiled/CubesExample_generated.h"

using namespace godot;

void AILink::_bind_methods() {
}

AILink::AILink() {
    flatbuffers::FlatBufferBuilder builder(1024);

    // Serialize a name for our monster, called "Orc".
    auto name = builder.CreateString("Orc");
    
    // Create a `vector` representing the inventory of the Orc. Each number
    // could correspond to an item that can be claimed after he is slain.
    unsigned char treasure[] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
    auto inventory = builder.CreateVector(treasure, 10);

    // Finally, create the monster using the `CreateMonster` helper function
    // to set all fields.
    auto orc = CreateMonster(builder, nullptr, 200, 200, name, inventory,
                            CubesExample::Color::Color_Red);
    builder.Finish(orc);

    printf("FlatBufferBuilder: %d\n", builder.GetSize());
}

AILink::~AILink() {
}

void AILink::_process(double delta) {
}
