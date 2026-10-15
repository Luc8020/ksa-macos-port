#include <vulkan/vulkan.h>

#define EXPORT __attribute__((visibility("default")))

EXPORT void vxDestroyImages(VkDevice d, const VkImage *p, int n, const VkAllocationCallbacks *a)
{ for (int i = 0; i < n; i++) vkDestroyImage(d, p[i], a); }

EXPORT void vxDestroyImageViews(VkDevice d, const VkImageView *p, int n, const VkAllocationCallbacks *a)
{ for (int i = 0; i < n; i++) vkDestroyImageView(d, p[i], a); }

EXPORT void vxDestroyBuffers(VkDevice d, const VkBuffer *p, int n, const VkAllocationCallbacks *a)
{ for (int i = 0; i < n; i++) vkDestroyBuffer(d, p[i], a); }

EXPORT void vxDestroyBufferViews(VkDevice d, const VkBufferView *p, int n, const VkAllocationCallbacks *a)
{ for (int i = 0; i < n; i++) vkDestroyBufferView(d, p[i], a); }
