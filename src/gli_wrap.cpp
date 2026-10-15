#include <gli/gli.hpp>
#include <algorithm>
#define EXPORT extern "C" __attribute__((visibility("default")))
typedef gli::texture T;
struct Int3 { int x, y, z; };
struct Sw { int r, g, b, a; };

static Int3 I3(gli::extent3d const& e) { return { (int)e.x, (int)e.y, (int)e.z }; }
static T::swizzles_type S(Sw s) {
  return T::swizzles_type(gli::swizzle(s.r), gli::swizzle(s.g), gli::swizzle(s.b), gli::swizzle(s.a));
}
static T* box(T&& t) { return t.empty() ? nullptr : new T(std::move(t)); }

EXPORT T* createEmpty() { return new T(); }
EXPORT T* create(int target, int format, Int3 e, long layers, long faces, long levels, Sw s) {
  return new T((gli::target)target, (gli::format)format, gli::extent3d(e.x, e.y, e.z), layers, faces, levels, S(s));
}
EXPORT T* createFromExistingSubset(T* t, int target, int format, long bl, long ml, long bf, long mf, long blv, long mlv, Sw s) {
  return new T(*t, (gli::target)target, (gli::format)format, bl, ml, bf, mf, blv, mlv, S(s));
}
EXPORT T* createFromExisting(T* t, int target, int format, Sw s) {
  return new T(*t, (gli::target)target, (gli::format)format, S(s));
}
EXPORT unsigned char save(T* t, const char* path) { return gli::save(*t, path) ? 1 : 0; }
EXPORT void release(T* t) { delete t; }
EXPORT T* load(const char* path) { return box(gli::load(path)); }
EXPORT T* loadFromMemory(const char* data, long size) { return box(gli::load(data, (size_t)size)); }
EXPORT void* data(T* t) { return t->data(); }
EXPORT void* imagedata(T* t, long level, long layer, long face) { return t->data(layer, face, level); }
EXPORT long size(T* t) { return (long)t->size(); }
EXPORT long levelsize(T* t, long level) { return (long)t->size(level); }
EXPORT Int3 extent(T* t, long level) { return I3(t->extent(level)); }
EXPORT int format(T* t) { return (int)t->format(); }
EXPORT long layers(T* t) { return (long)t->layers(); }
EXPORT long levels(T* t) { return (long)t->levels(); }
EXPORT long faces(T* t) { return (long)t->faces(); }
EXPORT int target(T* t) { return (int)t->target(); }
EXPORT long rowpitch(T* t, long level) {
  auto e = t->extent(level); auto b = gli::block_extent(t->format());
  long bx = std::max<long>(1, b.x);
  return (long)gli::block_size(t->format()) * ((e.x + bx - 1) / bx);
}
EXPORT long blocksize(T* t) { return (long)gli::block_size(t->format()); }
EXPORT Int3 blockextent(T* t) { return I3(gli::block_extent(t->format())); }
EXPORT unsigned char iscompressed(T* t) { return gli::is_compressed(t->format()) ? 1 : 0; }
