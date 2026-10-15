/* generated: "1"-suffixed wrappers expected by Brutal.Ktx */
#include "ktx.h"

KTX_API const char * KTX_APIENTRY ktxErrorString1(ktx_error_code_e a0) { return ktxErrorString(a0); }
KTX_API const char * KTX_APIENTRY ktxSupercompressionSchemeString1(ktxSupercmpScheme a0) { return ktxSupercompressionSchemeString(a0); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_CreateFromMemory1(const ktx_uint8_t * a0, ktx_size_t a1, ktxTextureCreateFlags a2, ktxTexture ** a3) { return ktxTexture_CreateFromMemory(a0, a1, a2, a3); }
#include <stdio.h>
#include <string.h>
#include <errno.h>
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_CreateFromNamedFile1(const char *const a0, ktxTextureCreateFlags a1, ktxTexture ** a2) {
    char clean[1024];
    strncpy(clean, a0, sizeof(clean) - 1);
    clean[sizeof(clean) - 1] = '\0';
    for (int i = 0; clean[i]; i++) {
        if (clean[i] == '\\') clean[i] = '/';
    }
    // Falls ein nicht-nullterminierter Span nach .ktx2 oder .ktx weiterläuft, sauber abschneiden:
    char *ext2 = strstr(clean, ".ktx2");
    if (ext2 && ext2[5] != '\0') ext2[5] = '\0';
    ktx_error_code_e res = ktxTexture_CreateFromNamedFile(clean, a1, a2);
    if (res != 0) {
        fprintf(stderr, "[KTX-DEBUG] orig='%s' clean='%s' err=%d errno=%d (%s)\n", a0, clean, res, errno, strerror(errno));
    }
    return res;
}
KTX_API void KTX_APIENTRY ktxTexture_Destroy1(ktxTexture * a0) { a0->vtbl->Destroy(a0); }
KTX_API ktx_uint8_t * KTX_APIENTRY ktxTexture_GetData1(ktxTexture * a0) { return ktxTexture_GetData(a0); }
KTX_API ktx_size_t KTX_APIENTRY ktxTexture_GetDataSize1(ktxTexture * a0) { return ktxTexture_GetDataSize(a0); }
KTX_API ktx_size_t KTX_APIENTRY ktxTexture_GetDataSizeUncompressed1(ktxTexture * a0) { return a0->vtbl->GetDataSizeUncompressed(a0); }
KTX_API ktx_uint32_t KTX_APIENTRY ktxTexture_GetElementSize1(ktxTexture * a0) { return ktxTexture_GetElementSize(a0); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_GetImageOffset1(ktxTexture * a0, ktx_uint32_t a1, ktx_uint32_t a2, ktx_uint32_t a3, ktx_size_t * a4) { return a0->vtbl->GetImageOffset(a0, a1, a2, a3, a4); }
KTX_API ktx_size_t KTX_APIENTRY ktxTexture_GetImageSize1(ktxTexture * a0, ktx_uint32_t a1) { return a0->vtbl->GetImageSize(a0, a1); }
KTX_API ktx_size_t KTX_APIENTRY ktxTexture_GetLevelSize1(ktxTexture * a0, ktx_uint32_t a1) { return a0->vtbl->GetLevelSize(a0, a1); }
KTX_API ktx_uint32_t KTX_APIENTRY ktxTexture_GetRowPitch1(ktxTexture * a0, ktx_uint32_t a1) { return ktxTexture_GetRowPitch(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_IterateLevelFaces1(ktxTexture * a0, PFNKTXITERCB a1, void * a2) { return ktxTexture_IterateLevelFaces(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_IterateLevels1(ktxTexture * a0, PFNKTXITERCB a1, void * a2) { return a0->vtbl->IterateLevels(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_IterateLoadLevelFaces1(ktxTexture * a0, PFNKTXITERCB a1, void * a2) { return a0->vtbl->IterateLoadLevelFaces(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_LoadImageData1(ktxTexture * a0, ktx_uint8_t * a1, ktx_size_t a2) { return a0->vtbl->LoadImageData(a0, a1, a2); }
KTX_API ktx_bool_t KTX_APIENTRY ktxTexture_NeedsTranscoding1(ktxTexture * a0) { return a0->vtbl->NeedsTranscoding(a0); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_SetImageFromMemory1(ktxTexture * a0, ktx_uint32_t a1, ktx_uint32_t a2, ktx_uint32_t a3, const ktx_uint8_t * a4, ktx_size_t a5) { return a0->vtbl->SetImageFromMemory(a0, a1, a2, a3, a4, a5); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_WriteToMemory1(ktxTexture * a0, ktx_uint8_t ** a1, ktx_size_t * a2) { return a0->vtbl->WriteToMemory(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture_WriteToNamedFile1(ktxTexture * a0, const char *const a1) { return a0->vtbl->WriteToNamedFile(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture1_Create1(const ktxTextureCreateInfo *const a0, ktxTextureCreateStorageEnum a1, ktxTexture1 ** a2) { return ktxTexture1_Create(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture1_CreateFromMemory1(const ktx_uint8_t * a0, ktx_size_t a1, ktxTextureCreateFlags a2, ktxTexture1 ** a3) { return ktxTexture1_CreateFromMemory(a0, a1, a2, a3); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture1_CreateFromNamedFile1(const char *const a0, ktxTextureCreateFlags a1, ktxTexture1 ** a2) { return ktxTexture1_CreateFromNamedFile(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture1_WriteKTX2ToMemory1(ktxTexture1 * a0, ktx_uint8_t ** a1, ktx_size_t * a2) { return ktxTexture1_WriteKTX2ToMemory(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture1_WriteKTX2ToNamedFile1(ktxTexture1 * a0, const char *const a1) { return ktxTexture1_WriteKTX2ToNamedFile(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_CompressAstc1(ktxTexture2 * a0, ktx_uint32_t a1) { return ktxTexture2_CompressAstc(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_CompressAstcEx1(ktxTexture2 * a0, ktxAstcParams * a1) { return ktxTexture2_CompressAstcEx(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_CompressBasis1(ktxTexture2 * a0, ktx_uint32_t a1) { return ktxTexture2_CompressBasis(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_CompressBasisEx1(ktxTexture2 * a0, ktxBasisParams * a1) { return ktxTexture2_CompressBasisEx(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_Create1(const ktxTextureCreateInfo *const a0, ktxTextureCreateStorageEnum a1, ktxTexture2 ** a2) { return ktxTexture2_Create(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_CreateCopy1(ktxTexture2 * a0, ktxTexture2 ** a1) { return ktxTexture2_CreateCopy(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_CreateFromMemory1(const ktx_uint8_t * a0, ktx_size_t a1, ktxTextureCreateFlags a2, ktxTexture2 ** a3) { return ktxTexture2_CreateFromMemory(a0, a1, a2, a3); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_CreateFromNamedFile1(const char *const a0, ktxTextureCreateFlags a1, ktxTexture2 ** a2) { return ktxTexture2_CreateFromNamedFile(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_DecodeAstc1(ktxTexture2 * a0) { return ktxTexture2_DecodeAstc(a0); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_DeflateZLIB1(ktxTexture2 * a0, ktx_uint32_t a1) { return ktxTexture2_DeflateZLIB(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_DeflateZstd1(ktxTexture2 * a0, ktx_uint32_t a1) { return ktxTexture2_DeflateZstd(a0, a1); }
KTX_API khr_df_model_e KTX_APIENTRY ktxTexture2_GetColorModel_e1(ktxTexture2 * a0) { return ktxTexture2_GetColorModel_e(a0); }
KTX_API void KTX_APIENTRY ktxTexture2_GetComponentInfo1(ktxTexture2 * a0, ktx_uint32_t * a1, ktx_uint32_t * a2) { ktxTexture2_GetComponentInfo(a0, a1, a2); }
KTX_API ktx_uint32_t KTX_APIENTRY ktxTexture2_GetNumComponents1(ktxTexture2 * a0) { return ktxTexture2_GetNumComponents(a0); }
KTX_API khr_df_transfer_e KTX_APIENTRY ktxTexture2_GetOETF_e1(ktxTexture2 * a0) { return ktxTexture2_GetOETF_e(a0); }
KTX_API ktx_uint32_t KTX_APIENTRY ktxTexture2_GetOETF1(ktxTexture2 * a0) { return ktxTexture2_GetOETF(a0); }
KTX_API ktx_bool_t KTX_APIENTRY ktxTexture2_GetPremultipliedAlpha1(ktxTexture2 * a0) { return ktxTexture2_GetPremultipliedAlpha(a0); }
KTX_API khr_df_primaries_e KTX_APIENTRY ktxTexture2_GetPrimaries_e1(ktxTexture2 * a0) { return ktxTexture2_GetPrimaries_e(a0); }
KTX_API khr_df_transfer_e KTX_APIENTRY ktxTexture2_GetTransferFunction_e1(ktxTexture2 * a0) { return ktxTexture2_GetTransferFunction_e(a0); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_LoadDeflatedImageData1(ktxTexture2 * a0, ktx_uint8_t * a1, ktx_size_t a2) { return ktxTexture2_LoadDeflatedImageData(a0, a1, a2); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_SetOETF1(ktxTexture2 * a0, khr_df_transfer_e a1) { return ktxTexture2_SetOETF(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_SetPrimaries1(ktxTexture2 * a0, khr_df_primaries_e a1) { return ktxTexture2_SetPrimaries(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_SetTransferFunction1(ktxTexture2 * a0, khr_df_transfer_e a1) { return ktxTexture2_SetTransferFunction(a0, a1); }
KTX_API ktx_error_code_e KTX_APIENTRY ktxTexture2_TranscodeBasis1(ktxTexture2 * a0, ktx_transcode_fmt_e a1, ktx_transcode_flags a2) { return ktxTexture2_TranscodeBasis(a0, a1, a2); }
KTX_API const char * KTX_APIENTRY ktxTranscodeFormatString1(ktx_transcode_fmt_e a0) { return ktxTranscodeFormatString(a0); }

/* GetVkFormat lives in ktxvulkan.h (VkFormat is a 32-bit enum); declared here to avoid needing Vulkan headers */
extern int ktxTexture_GetVkFormat(ktxTexture* This);
extern int ktxTexture1_GetVkFormat(ktxTexture1* This);
extern int ktxTexture2_GetVkFormat(ktxTexture2* This);
KTX_API int KTX_APIENTRY ktxTexture_GetVkFormat1(ktxTexture* a0)   { return ktxTexture_GetVkFormat(a0); }
KTX_API int KTX_APIENTRY ktxTexture1_GetVkFormat1(ktxTexture1* a0) { return ktxTexture1_GetVkFormat(a0); }
KTX_API int KTX_APIENTRY ktxTexture2_GetVkFormat1(ktxTexture2* a0) { return ktxTexture2_GetVkFormat(a0); }

/* RocketWerkz-specific: frees a buffer returned by ktxTexture_WriteToMemory (not part of upstream KTX) */
#include <stdlib.h>
KTX_API void KTX_APIENTRY ktx_FreeWriteToMemoryBuffer1(void* a0) { free(a0); }
