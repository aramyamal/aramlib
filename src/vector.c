#include "aramlib/vector.h"

VoidVector VoidVector_create(size_t capacity, size_t element_size) {
    // TODO
    VoidVector vec = {0};
    return vec;
}

void VoidVector_destroy(VoidVector *self) {
    // TODO
}

size_t VoidVector_length(const VoidVector *self) {
    // TODO
    return 0;
}

size_t VoidVector_capacity(const VoidVector *self) {
    // TODO
    return 0;
}

void VoidVector_push(VoidVector *self, const void *value) {
    // TODO
}

bool VoidVector_get(const VoidVector *self, void *out_value, size_t index) {
    // TODO
    return false;
}

bool VoidVector_set(VoidVector *self, const void *value, size_t index) {
    // TODO
    return false;
}

bool VoidVector_pop(const VoidVector *self, void *out_value) {
    // TODO
    return false;
}

void VoidVector_clear(VoidVector *self) {
    // TODO
}

VoidVector VoidVector_copy(const VoidVector *self) {
    // TODO
    VoidVector vec = {0};
    return vec;
}
