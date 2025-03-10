/*
 * Copyright 2011-2022 Branimir Karadzic. All rights reserved.
 * License: https://github.com/bkaradzic/bgfx/blob/master/LICENSE
 */

/*
 *
 * AUTO GENERATED FROM IDL! DO NOT EDIT! (source : temp.defines.h)
 *
 * More info about IDL:
 * https://gist.github.com/bkaradzic/05a1c86a6dd57bf86e2d828878e88dc2#bgfx-is-switching-to-idl-to-generate-api
 *
 */

#ifndef BGFX_DEFINES_H_HEADER_GUARD
#define BGFX_DEFINES_H_HEADER_GUARD

#define BGFX_API_VERSION (117)

/**
 * Color RGB/alpha/depth write. When it's not specified write will be disabled.
 *
 */
#define BGFX_STATE_WRITE_R                        (0x0000000000000001) //!< Enable R write.
#define BGFX_STATE_WRITE_G                        (0x0000000000000002) //!< Enable G write.
#define BGFX_STATE_WRITE_B                        (0x0000000000000004) //!< Enable B write.
#define BGFX_STATE_WRITE_A                        (0x0000000000000008) //!< Enable alpha write.
#define BGFX_STATE_WRITE_Z                        (0x0000004000000000) //!< Enable depth write.
/// Enable RGB write.
#define BGFX_STATE_WRITE_RGB (0 \
	| BGFX_STATE_WRITE_R \
	| BGFX_STATE_WRITE_G \
	| BGFX_STATE_WRITE_B \
	)

/// Write all channels mask.
#define BGFX_STATE_WRITE_MASK (0 \
	| BGFX_STATE_WRITE_RGB \
	| BGFX_STATE_WRITE_A \
	| BGFX_STATE_WRITE_Z \
	)


/**
 * Depth test state. When `BGFX_STATE_DEPTH_` is not specified depth test will be disabled.
 *
 */
#define BGFX_STATE_DEPTH_TEST_LESS                (0x0000000000000010) //!< Enable depth test, less.
#define BGFX_STATE_DEPTH_TEST_LEQUAL              (0x0000000000000020) //!< Enable depth test, less or equal.
#define BGFX_STATE_DEPTH_TEST_EQUAL               (0x0000000000000030) //!< Enable depth test, equal.
#define BGFX_STATE_DEPTH_TEST_GEQUAL              (0x0000000000000040) //!< Enable depth test, greater or equal.
#define BGFX_STATE_DEPTH_TEST_GREATER             (0x0000000000000050) //!< Enable depth test, greater.
#define BGFX_STATE_DEPTH_TEST_NOTEQUAL            (0x0000000000000060) //!< Enable depth test, not equal.
#define BGFX_STATE_DEPTH_TEST_NEVER               (0x0000000000000070) //!< Enable depth test, never.
#define BGFX_STATE_DEPTH_TEST_ALWAYS              (0x0000000000000080) //!< Enable depth test, always.
#define BGFX_STATE_DEPTH_TEST_SHIFT               4                            //!< Depth test state bit shift
#define BGFX_STATE_DEPTH_TEST_MASK                (0x00000000000000f0) //!< Depth test state bit mask

/**
 * Use BGFX_STATE_BLEND_FUNC(_src, _dst) or BGFX_STATE_BLEND_FUNC_SEPARATE(_srcRGB, _dstRGB, _srcA, _dstA)
 * helper macros.
 *
 */
#define BGFX_STATE_BLEND_ZERO                     (0x0000000000001000) //!< 0, 0, 0, 0
#define BGFX_STATE_BLEND_ONE                      (0x0000000000002000) //!< 1, 1, 1, 1
#define BGFX_STATE_BLEND_SRC_COLOR                (0x0000000000003000) //!< Rs, Gs, Bs, As
#define BGFX_STATE_BLEND_INV_SRC_COLOR            (0x0000000000004000) //!< 1-Rs, 1-Gs, 1-Bs, 1-As
#define BGFX_STATE_BLEND_SRC_ALPHA                (0x0000000000005000) //!< As, As, As, As
#define BGFX_STATE_BLEND_INV_SRC_ALPHA            (0x0000000000006000) //!< 1-As, 1-As, 1-As, 1-As
#define BGFX_STATE_BLEND_DST_ALPHA                (0x0000000000007000) //!< Ad, Ad, Ad, Ad
#define BGFX_STATE_BLEND_INV_DST_ALPHA            (0x0000000000008000) //!< 1-Ad, 1-Ad, 1-Ad ,1-Ad
#define BGFX_STATE_BLEND_DST_COLOR                (0x0000000000009000) //!< Rd, Gd, Bd, Ad
#define BGFX_STATE_BLEND_INV_DST_COLOR            (0x000000000000a000) //!< 1-Rd, 1-Gd, 1-Bd, 1-Ad
#define BGFX_STATE_BLEND_SRC_ALPHA_SAT            (0x000000000000b000) //!< f, f, f, 1; f = min(As, 1-Ad)
#define BGFX_STATE_BLEND_FACTOR                   (0x000000000000c000) //!< Blend factor
#define BGFX_STATE_BLEND_INV_FACTOR               (0x000000000000d000) //!< 1-Blend factor
#define BGFX_STATE_BLEND_SHIFT                    12                           //!< Blend state bit shift
#define BGFX_STATE_BLEND_MASK                     (0x000000000ffff000) //!< Blend state bit mask

/**
 * Use BGFX_STATE_BLEND_EQUATION(_equation) or BGFX_STATE_BLEND_EQUATION_SEPARATE(_equationRGB, _equationA)
 * helper macros.
 *
 */
#define BGFX_STATE_BLEND_EQUATION_ADD             (0x0000000000000000) //!< Blend add: src + dst.
#define BGFX_STATE_BLEND_EQUATION_SUB             (0x0000000010000000) //!< Blend subtract: src - dst.
#define BGFX_STATE_BLEND_EQUATION_REVSUB          (0x0000000020000000) //!< Blend reverse subtract: dst - src.
#define BGFX_STATE_BLEND_EQUATION_MIN             (0x0000000030000000) //!< Blend min: min(src, dst).
#define BGFX_STATE_BLEND_EQUATION_MAX             (0x0000000040000000) //!< Blend max: max(src, dst).
#define BGFX_STATE_BLEND_EQUATION_SHIFT           28                           //!< Blend equation bit shift
#define BGFX_STATE_BLEND_EQUATION_MASK            (0x00000003f0000000) //!< Blend equation bit mask

/**
 * Cull state. When `BGFX_STATE_CULL_*` is not specified culling will be disabled.
 *
 */
#define BGFX_STATE_CULL_CW                        (0x0000001000000000) //!< Cull clockwise triangles.
#define BGFX_STATE_CULL_CCW                       (0x0000002000000000) //!< Cull counter-clockwise triangles.
#define BGFX_STATE_CULL_SHIFT                     36                           //!< Culling mode bit shift
#define BGFX_STATE_CULL_MASK                      (0x0000003000000000) //!< Culling mode bit mask

/**
 * Alpha reference value.
 *
 */
#define BGFX_STATE_ALPHA_REF_SHIFT                40                           //!< Alpha reference bit shift
#define BGFX_STATE_ALPHA_REF_MASK                 (0x0000ff0000000000) //!< Alpha reference bit mask
#define BGFX_STATE_ALPHA_REF(v) ( ( (uint64_t)(v)<<BGFX_STATE_ALPHA_REF_SHIFT )&BGFX_STATE_ALPHA_REF_MASK)

#define BGFX_STATE_PT_TRISTRIP                    (0x0001000000000000) //!< Tristrip.
#define BGFX_STATE_PT_LINES                       (0x0002000000000000) //!< Lines.
#define BGFX_STATE_PT_LINESTRIP                   (0x0003000000000000) //!< Line strip.
#define BGFX_STATE_PT_POINTS                      (0x0004000000000000) //!< Points.
#define BGFX_STATE_PT_SHIFT                       48                           //!< Primitive type bit shift
#define BGFX_STATE_PT_MASK                        (0x0007000000000000) //!< Primitive type bit mask

/**
 * Point size value.
 *
 */
#define BGFX_STATE_POINT_SIZE_SHIFT               52                           //!< Point size bit shift
#define BGFX_STATE_POINT_SIZE_MASK                (0x00f0000000000000) //!< Point size bit mask
#define BGFX_STATE_POINT_SIZE(v) ( ( (uint64_t)(v)<<BGFX_STATE_POINT_SIZE_SHIFT )&BGFX_STATE_POINT_SIZE_MASK)

/**
 * Enable MSAA write when writing into MSAA frame buffer.
 * This flag is ignored when not writing into MSAA frame buffer.
 *
 */
#define BGFX_STATE_MSAA                           (0x0100000000000000) //!< Enable MSAA rasterization.
#define BGFX_STATE_LINEAA                         (0x0200000000000000) //!< Enable line AA rasterization.
#define BGFX_STATE_CONSERVATIVE_RASTER            (0x0400000000000000) //!< Enable conservative rasterization.
#define BGFX_STATE_NONE                           (0x0000000000000000) //!< No state.
#define BGFX_STATE_FRONT_CCW                      (0x0000008000000000) //!< Front counter-clockwise (default is clockwise).
#define BGFX_STATE_BLEND_INDEPENDENT              (0x0000000400000000) //!< Enable blend independent.
#define BGFX_STATE_BLEND_ALPHA_TO_COVERAGE        (0x0000000800000000) //!< Enable alpha to coverage.
/// Default state is write to RGB, alpha, and depth with depth test less enabled, with clockwise
/// culling and MSAA (when writing into MSAA frame buffer, otherwise this flag is ignored).
#define BGFX_STATE_DEFAULT (0 \
	| BGFX_STATE_WRITE_RGB \
	| BGFX_STATE_WRITE_A \
	| BGFX_STATE_WRITE_Z \
	| BGFX_STATE_DEPTH_TEST_LESS \
	| BGFX_STATE_CULL_CW \
	| BGFX_STATE_MSAA \
	)

#define BGFX_STATE_MASK                           (0xffffffffffffffff) //!< State bit mask

/**
 * Do not use!
 *
 */
#define BGFX_STATE_RESERVED_SHIFT                 61

#define BGFX_STATE_RESERVED_MASK                  (0xe000000000000000)

/**
 * Set stencil ref value.
 *
 */
#define BGFX_STENCIL_FUNC_REF_SHIFT               0

#define BGFX_STENCIL_FUNC_REF_MASK                (0x000000ff)
#define BGFX_STENCIL_FUNC_REF(v) ( ( (uint32_t)(v)<<BGFX_STENCIL_FUNC_REF_SHIFT )&BGFX_STENCIL_FUNC_REF_MASK)

/**
 * Set stencil rmask value.
 *
 */
#define BGFX_STENCIL_FUNC_RMASK_SHIFT             8

#define BGFX_STENCIL_FUNC_RMASK_MASK              (0x0000ff00)
#define BGFX_STENCIL_FUNC_RMASK(v) ( ( (uint32_t)(v)<<BGFX_STENCIL_FUNC_RMASK_SHIFT )&BGFX_STENCIL_FUNC_RMASK_MASK)

#define BGFX_STENCIL_NONE                         (0x00000000)
#define BGFX_STENCIL_MASK                         (0xffffffff)
#define BGFX_STENCIL_DEFAULT                      (0x00000000)

#define BGFX_STENCIL_TEST_LESS                    (0x00010000) //!< Enable stencil test, less.
#define BGFX_STENCIL_TEST_LEQUAL                  (0x00020000) //!< Enable stencil test, less or equal.
#define BGFX_STENCIL_TEST_EQUAL                   (0x00030000) //!< Enable stencil test, equal.
#define BGFX_STENCIL_TEST_GEQUAL                  (0x00040000) //!< Enable stencil test, greater or equal.
#define BGFX_STENCIL_TEST_GREATER                 (0x00050000) //!< Enable stencil test, greater.
#define BGFX_STENCIL_TEST_NOTEQUAL                (0x00060000) //!< Enable stencil test, not equal.
#define BGFX_STENCIL_TEST_NEVER                   (0x00070000) //!< Enable stencil test, never.
#define BGFX_STENCIL_TEST_ALWAYS                  (0x00080000) //!< Enable stencil test, always.
#define BGFX_STENCIL_TEST_SHIFT                   16                   //!< Stencil test bit shift
#define BGFX_STENCIL_TEST_MASK                    (0x000f0000) //!< Stencil test bit mask

#define BGFX_STENCIL_OP_FAIL_S_ZERO               (0x00000000) //!< Zero.
#define BGFX_STENCIL_OP_FAIL_S_KEEP               (0x00100000) //!< Keep.
#define BGFX_STENCIL_OP_FAIL_S_REPLACE            (0x00200000) //!< Replace.
#define BGFX_STENCIL_OP_FAIL_S_INCR               (0x00300000) //!< Increment and wrap.
#define BGFX_STENCIL_OP_FAIL_S_INCRSAT            (0x00400000) //!< Increment and clamp.
#define BGFX_STENCIL_OP_FAIL_S_DECR               (0x00500000) //!< Decrement and wrap.
#define BGFX_STENCIL_OP_FAIL_S_DECRSAT            (0x00600000) //!< Decrement and clamp.
#define BGFX_STENCIL_OP_FAIL_S_INVERT             (0x00700000) //!< Invert.
#define BGFX_STENCIL_OP_FAIL_S_SHIFT              20                   //!< Stencil operation fail bit shift
#define BGFX_STENCIL_OP_FAIL_S_MASK               (0x00f00000) //!< Stencil operation fail bit mask

#define BGFX_STENCIL_OP_FAIL_Z_ZERO               (0x00000000) //!< Zero.
#define BGFX_STENCIL_OP_FAIL_Z_KEEP               (0x01000000) //!< Keep.
#define BGFX_STENCIL_OP_FAIL_Z_REPLACE            (0x02000000) //!< Replace.
#define BGFX_STENCIL_OP_FAIL_Z_INCR               (0x03000000) //!< Increment and wrap.
#define BGFX_STENCIL_OP_FAIL_Z_INCRSAT            (0x04000000) //!< Increment and clamp.
#define BGFX_STENCIL_OP_FAIL_Z_DECR               (0x05000000) //!< Decrement and wrap.
#define BGFX_STENCIL_OP_FAIL_Z_DECRSAT            (0x06000000) //!< Decrement and clamp.
#define BGFX_STENCIL_OP_FAIL_Z_INVERT             (0x07000000) //!< Invert.
#define BGFX_STENCIL_OP_FAIL_Z_SHIFT              24                   //!< Stencil operation depth fail bit shift
#define BGFX_STENCIL_OP_FAIL_Z_MASK               (0x0f000000) //!< Stencil operation depth fail bit mask

#define BGFX_STENCIL_OP_PASS_Z_ZERO               (0x00000000) //!< Zero.
#define BGFX_STENCIL_OP_PASS_Z_KEEP               (0x10000000) //!< Keep.
#define BGFX_STENCIL_OP_PASS_Z_REPLACE            (0x20000000) //!< Replace.
#define BGFX_STENCIL_OP_PASS_Z_INCR               (0x30000000) //!< Increment and wrap.
#define BGFX_STENCIL_OP_PASS_Z_INCRSAT            (0x40000000) //!< Increment and clamp.
#define BGFX_STENCIL_OP_PASS_Z_DECR               (0x50000000) //!< Decrement and wrap.
#define BGFX_STENCIL_OP_PASS_Z_DECRSAT            (0x60000000) //!< Decrement and clamp.
#define BGFX_STENCIL_OP_PASS_Z_INVERT             (0x70000000) //!< Invert.
#define BGFX_STENCIL_OP_PASS_Z_SHIFT              28                   //!< Stencil operation depth pass bit shift
#define BGFX_STENCIL_OP_PASS_Z_MASK               (0xf0000000) //!< Stencil operation depth pass bit mask

#define BGFX_CLEAR_NONE                           (0x0000) //!< No clear flags.
#define BGFX_CLEAR_COLOR                          (0x0001) //!< Clear color.
#define BGFX_CLEAR_DEPTH                          (0x0002) //!< Clear depth.
#define BGFX_CLEAR_STENCIL                        (0x0004) //!< Clear stencil.
#define BGFX_CLEAR_DISCARD_COLOR_0                (0x0008) //!< Discard frame buffer attachment 0.
#define BGFX_CLEAR_DISCARD_COLOR_1                (0x0010) //!< Discard frame buffer attachment 1.
#define BGFX_CLEAR_DISCARD_COLOR_2                (0x0020) //!< Discard frame buffer attachment 2.
#define BGFX_CLEAR_DISCARD_COLOR_3                (0x0040) //!< Discard frame buffer attachment 3.
#define BGFX_CLEAR_DISCARD_COLOR_4                (0x0080) //!< Discard frame buffer attachment 4.
#define BGFX_CLEAR_DISCARD_COLOR_5                (0x0100) //!< Discard frame buffer attachment 5.
#define BGFX_CLEAR_DISCARD_COLOR_6                (0x0200) //!< Discard frame buffer attachment 6.
#define BGFX_CLEAR_DISCARD_COLOR_7                (0x0400) //!< Discard frame buffer attachment 7.
#define BGFX_CLEAR_DISCARD_DEPTH                  (0x0800) //!< Discard frame buffer depth attachment.
#define BGFX_CLEAR_DISCARD_STENCIL                (0x1000) //!< Discard frame buffer stencil attachment.
#define BGFX_CLEAR_DISCARD_COLOR_MASK (0 \
	| BGFX_CLEAR_DISCARD_COLOR_0 \
	| BGFX_CLEAR_DISCARD_COLOR_1 \
	| BGFX_CLEAR_DISCARD_COLOR_2 \
	| BGFX_CLEAR_DISCARD_COLOR_3 \
	| BGFX_CLEAR_DISCARD_COLOR_4 \
	| BGFX_CLEAR_DISCARD_COLOR_5 \
	| BGFX_CLEAR_DISCARD_COLOR_6 \
	| BGFX_CLEAR_DISCARD_COLOR_7 \
	)

#define BGFX_CLEAR_DISCARD_MASK (0 \
	| BGFX_CLEAR_DISCARD_COLOR_MASK \
	| BGFX_CLEAR_DISCARD_DEPTH \
	| BGFX_CLEAR_DISCARD_STENCIL \
	)


/**
 * Rendering state discard. When state is preserved in submit, rendering states can be discarded
 * on a finer grain.
 *
 */
#define BGFX_DISCARD_NONE                         (0x00) //!< Preserve everything.
#define BGFX_DISCARD_BINDINGS                     (0x01) //!< Discard texture sampler and buffer bindings.
#define BGFX_DISCARD_INDEX_BUFFER                 (0x02) //!< Discard index buffer.
#define BGFX_DISCARD_INSTANCE_DATA                (0x04) //!< Discard instance data.
#define BGFX_DISCARD_STATE                        (0x08) //!< Discard state and uniform bindings.
#define BGFX_DISCARD_TRANSFORM                    (0x10) //!< Discard transform.
#define BGFX_DISCARD_VERTEX_STREAMS               (0x20) //!< Discard vertex streams.
#define BGFX_DISCARD_ALL                          (0xff) //!< Discard all states.

#define BGFX_DEBUG_NONE                           (0x00000000) //!< No debug.
#define BGFX_DEBUG_WIREFRAME                      (0x00000001) //!< Enable wireframe for all primitives.

/// Enable infinitely fast hardware test. No draw calls will be submitted to driver.
/// It's useful when profiling to quickly assess bottleneck between CPU and GPU.
#define BGFX_DEBUG_IFH                            (0x00000002)
#define BGFX_DEBUG_STATS                          (0x00000004) //!< Enable statistics display.
#define BGFX_DEBUG_TEXT                           (0x00000008) //!< Enable debug text display.
#define BGFX_DEBUG_PROFILER                       (0x00000010) //!< Enable profiler. This causes per-view statistics to be collected, available through `bgfx::Stats::ViewStats`. This is unrelated to the profiler functions in `bgfx::CallbackI`.

#define BGFX_BUFFER_COMPUTE_FORMAT_8X1            (0x0001) //!< 1 8-bit value
#define BGFX_BUFFER_COMPUTE_FORMAT_8X2            (0x0002) //!< 2 8-bit values
#define BGFX_BUFFER_COMPUTE_FORMAT_8X4            (0x0003) //!< 4 8-bit values
#define BGFX_BUFFER_COMPUTE_FORMAT_16X1           (0x0004) //!< 1 16-bit value
#define BGFX_BUFFER_COMPUTE_FORMAT_16X2           (0x0005) //!< 2 16-bit values
#define BGFX_BUFFER_COMPUTE_FORMAT_16X4           (0x0006) //!< 4 16-bit values
#define BGFX_BUFFER_COMPUTE_FORMAT_32X1           (0x0007) //!< 1 32-bit value
#define BGFX_BUFFER_COMPUTE_FORMAT_32X2           (0x0008) //!< 2 32-bit values
#define BGFX_BUFFER_COMPUTE_FORMAT_32X4           (0x0009) //!< 4 32-bit values
#define BGFX_BUFFER_COMPUTE_FORMAT_SHIFT          0

#define BGFX_BUFFER_COMPUTE_FORMAT_MASK           (0x000f)

#define BGFX_BUFFER_COMPUTE_TYPE_INT              (0x0010) //!< Type `int`.
#define BGFX_BUFFER_COMPUTE_TYPE_UINT             (0x0020) //!< Type `uint`.
#define BGFX_BUFFER_COMPUTE_TYPE_FLOAT            (0x0030) //!< Type `float`.
#define BGFX_BUFFER_COMPUTE_TYPE_SHIFT            4

#define BGFX_BUFFER_COMPUTE_TYPE_MASK             (0x0030)

#define BGFX_BUFFER_NONE                          (0x0000)
#define BGFX_BUFFER_COMPUTE_READ                  (0x0100) //!< Buffer will be read by shader.
#define BGFX_BUFFER_COMPUTE_WRITE                 (0x0200) //!< Buffer will be used for writing.
#define BGFX_BUFFER_DRAW_INDIRECT                 (0x0400) //!< Buffer will be used for storing draw indirect commands.
#define BGFX_BUFFER_ALLOW_RESIZE                  (0x0800) //!< Allow dynamic index/vertex buffer resize during update.
#define BGFX_BUFFER_INDEX32                       (0x1000) //!< Index buffer contains 32-bit indices.
#define BGFX_BUFFER_COMPUTE_READ_WRITE (0 \
	| BGFX_BUFFER_COMPUTE_READ \
	| BGFX_BUFFER_COMPUTE_WRITE \
	)


#define BGFX_TEXTURE_NONE                         (0x0000000000000000)
#define BGFX_TEXTURE_MSAA_SAMPLE                  (0x0000000800000000) //!< Texture will be used for MSAA sampling.
#define BGFX_TEXTURE_RT                           (0x0000001000000000) //!< Render target no MSAA.
#define BGFX_TEXTURE_COMPUTE_WRITE                (0x0000100000000000) //!< Texture will be used for compute write.
#define BGFX_TEXTURE_SRGB                         (0x0000200000000000) //!< Sample texture as sRGB.
#define BGFX_TEXTURE_BLIT_DST                     (0x0000400000000000) //!< Texture will be used as blit destination.
#define BGFX_TEXTURE_READ_BACK                    (0x0000800000000000) //!< Texture will be used for read back from GPU.

#define BGFX_TEXTURE_RT_MSAA_X2                   (0x0000002000000000) //!< Render target MSAAx2 mode.
#define BGFX_TEXTURE_RT_MSAA_X4                   (0x0000003000000000) //!< Render target MSAAx4 mode.
#define BGFX_TEXTURE_RT_MSAA_X8                   (0x0000004000000000) //!< Render target MSAAx8 mode.
#define BGFX_TEXTURE_RT_MSAA_X16                  (0x0000005000000000) //!< Render target MSAAx16 mode.
#define BGFX_TEXTURE_RT_MSAA_SHIFT                36

#define BGFX_TEXTURE_RT_MSAA_MASK                 (0x0000007000000000)

#define BGFX_TEXTURE_RT_WRITE_ONLY                (0x0000008000000000) //!< Render target will be used for writing
#define BGFX_TEXTURE_RT_SHIFT                     36

#define BGFX_TEXTURE_RT_MASK                      (0x000000f000000000)

/**
 * Sampler flags.
 *
 */
#define BGFX_SAMPLER_U_MIRROR                     (0x00000001) //!< Wrap U mode: Mirror
#define BGFX_SAMPLER_U_CLAMP                      (0x00000002) //!< Wrap U mode: Clamp
#define BGFX_SAMPLER_U_BORDER                     (0x00000003) //!< Wrap U mode: Border
#define BGFX_SAMPLER_U_SHIFT                      0

#define BGFX_SAMPLER_U_MASK                       (0x00000003)

#define BGFX_SAMPLER_V_MIRROR                     (0x00000004) //!< Wrap V mode: Mirror
#define BGFX_SAMPLER_V_CLAMP                      (0x00000008) //!< Wrap V mode: Clamp
#define BGFX_SAMPLER_V_BORDER                     (0x0000000c) //!< Wrap V mode: Border
#define BGFX_SAMPLER_V_SHIFT                      2

#define BGFX_SAMPLER_V_MASK                       (0x0000000c)

#define BGFX_SAMPLER_W_MIRROR                     (0x00000010) //!< Wrap W mode: Mirror
#define BGFX_SAMPLER_W_CLAMP                      (0x00000020) //!< Wrap W mode: Clamp
#define BGFX_SAMPLER_W_BORDER                     (0x00000030) //!< Wrap W mode: Border
#define BGFX_SAMPLER_W_SHIFT                      4

#define BGFX_SAMPLER_W_MASK                       (0x00000030)

#define BGFX_SAMPLER_MIN_POINT                    (0x00000040) //!< Min sampling mode: Point
#define BGFX_SAMPLER_MIN_ANISOTROPIC              (0x00000080) //!< Min sampling mode: Anisotropic
#define BGFX_SAMPLER_MIN_SHIFT                    6

#define BGFX_SAMPLER_MIN_MASK                     (0x000000c0)

#define BGFX_SAMPLER_MAG_POINT                    (0x00000100) //!< Mag sampling mode: Point
#define BGFX_SAMPLER_MAG_ANISOTROPIC              (0x00000200) //!< Mag sampling mode: Anisotropic
#define BGFX_SAMPLER_MAG_SHIFT                    8

#define BGFX_SAMPLER_MAG_MASK                     (0x00000300)

#define BGFX_SAMPLER_MIP_POINT                    (0x00000400) //!< Mip sampling mode: Point
#define BGFX_SAMPLER_MIP_SHIFT                    10

#define BGFX_SAMPLER_MIP_MASK                     (0x00000400)

#define BGFX_SAMPLER_COMPARE_LESS                 (0x00010000) //!< Compare when sampling depth texture: less.
#define BGFX_SAMPLER_COMPARE_LEQUAL               (0x00020000) //!< Compare when sampling depth texture: less or equal.
#define BGFX_SAMPLER_COMPARE_EQUAL                (0x00030000) //!< Compare when sampling depth texture: equal.
#define BGFX_SAMPLER_COMPARE_GEQUAL               (0x00040000) //!< Compare when sampling depth texture: greater or equal.
#define BGFX_SAMPLER_COMPARE_GREATER              (0x00050000) //!< Compare when sampling depth texture: greater.
#define BGFX_SAMPLER_COMPARE_NOTEQUAL             (0x00060000) //!< Compare when sampling depth texture: not equal.
#define BGFX_SAMPLER_COMPARE_NEVER                (0x00070000) //!< Compare when sampling depth texture: never.
#define BGFX_SAMPLER_COMPARE_ALWAYS               (0x00080000) //!< Compare when sampling depth texture: always.
#define BGFX_SAMPLER_COMPARE_SHIFT                16

#define BGFX_SAMPLER_COMPARE_MASK                 (0x000f0000)

#define BGFX_SAMPLER_BORDER_COLOR_SHIFT           24

#define BGFX_SAMPLER_BORDER_COLOR_MASK            (0x0f000000)
#define BGFX_SAMPLER_BORDER_COLOR(v) ( ( (uint32_t)(v)<<BGFX_SAMPLER_BORDER_COLOR_SHIFT )&BGFX_SAMPLER_BORDER_COLOR_MASK)

#define BGFX_SAMPLER_RESERVED_SHIFT               28

#define BGFX_SAMPLER_RESERVED_MASK                (0xf0000000)

#define BGFX_SAMPLER_NONE                         (0x00000000)
#define BGFX_SAMPLER_SAMPLE_STENCIL               (0x00100000) //!< Sample stencil instead of depth.
#define BGFX_SAMPLER_POINT (0 \
	| BGFX_SAMPLER_MIN_POINT \
	| BGFX_SAMPLER_MAG_POINT \
	| BGFX_SAMPLER_MIP_POINT \
	)

#define BGFX_SAMPLER_UVW_MIRROR (0 \
	| BGFX_SAMPLER_U_MIRROR \
	| BGFX_SAMPLER_V_MIRROR \
	| BGFX_SAMPLER_W_MIRROR \
	)

#define BGFX_SAMPLER_UVW_CLAMP (0 \
	| BGFX_SAMPLER_U_CLAMP \
	| BGFX_SAMPLER_V_CLAMP \
	| BGFX_SAMPLER_W_CLAMP \
	)

#define BGFX_SAMPLER_UVW_BORDER (0 \
	| BGFX_SAMPLER_U_BORDER \
	| BGFX_SAMPLER_V_BORDER \
	| BGFX_SAMPLER_W_BORDER \
	)

#define BGFX_SAMPLER_BITS_MASK (0 \
	| BGFX_SAMPLER_U_MASK \
	| BGFX_SAMPLER_V_MASK \
	| BGFX_SAMPLER_W_MASK \
	| BGFX_SAMPLER_MIN_MASK \
	| BGFX_SAMPLER_MAG_MASK \
	| BGFX_SAMPLER_MIP_MASK \
	| BGFX_SAMPLER_COMPARE_MASK \
	)


#define BGFX_RESET_MSAA_X2                        (0x00000010) //!< Enable 2x MSAA.
#define BGFX_RESET_MSAA_X4                        (0x00000020) //!< Enable 4x MSAA.
#define BGFX_RESET_MSAA_X8                        (0x00000030) //!< Enable 8x MSAA.
#define BGFX_RESET_MSAA_X16                       (0x00000040) //!< Enable 16x MSAA.
#define BGFX_RESET_MSAA_SHIFT                     4

#define BGFX_RESET_MSAA_MASK                      (0x00000070)

#define BGFX_RESET_NONE                           (0x00000000) //!< No reset flags.
#define BGFX_RESET_FULLSCREEN                     (0x00000001) //!< Not supported yet.
#define BGFX_RESET_VSYNC                          (0x00000080) //!< Enable V-Sync.
#define BGFX_RESET_MAXANISOTROPY                  (0x00000100) //!< Turn on/off max anisotropy.
#define BGFX_RESET_CAPTURE                        (0x00000200) //!< Begin screen capture.
#define BGFX_RESET_FLUSH_AFTER_RENDER             (0x00002000) //!< Flush rendering after submitting to GPU.

/// This flag specifies where flip occurs. Default behaviour is that flip occurs
/// before rendering new frame. This flag only has effect when `BGFX_CONFIG_MULTITHREADED=0`.
#define BGFX_RESET_FLIP_AFTER_RENDER              (0x00004000)
#define BGFX_RESET_SRGB_BACKBUFFER                (0x00008000) //!< Enable sRGB backbuffer.
#define BGFX_RESET_HDR10                          (0x00010000) //!< Enable HDR10 rendering.
#define BGFX_RESET_HIDPI                          (0x00020000) //!< Enable HiDPI rendering.
#define BGFX_RESET_DEPTH_CLAMP                    (0x00040000) //!< Enable depth clamp.
#define BGFX_RESET_SUSPEND                        (0x00080000) //!< Suspend rendering.
#define BGFX_RESET_TRANSPARENT_BACKBUFFER         (0x00100000) //!< Transparent backbuffer. Availability depends on: `BGFX_CAPS_TRANSPARENT_BACKBUFFER`.

#define BGFX_RESET_FULLSCREEN_SHIFT               0

#define BGFX_RESET_FULLSCREEN_MASK                (0x00000001)

#define BGFX_RESET_RESERVED_SHIFT                 31                   //!< Internal bit shift
#define BGFX_RESET_RESERVED_MASK                  (0x80000000) //!< Internal bit mask

#define BGFX_CAPS_ALPHA_TO_COVERAGE               (0x0000000000000001) //!< Alpha to coverage is supported.
#define BGFX_CAPS_BLEND_INDEPENDENT               (0x0000000000000002) //!< Blend independent is supported.
#define BGFX_CAPS_COMPUTE                         (0x0000000000000004) //!< Compute shaders are supported.
#define BGFX_CAPS_CONSERVATIVE_RASTER             (0x0000000000000008) //!< Conservative rasterization is supported.
#define BGFX_CAPS_DRAW_INDIRECT                   (0x0000000000000010) //!< Draw indirect is supported.
#define BGFX_CAPS_FRAGMENT_DEPTH                  (0x0000000000000020) //!< Fragment depth is available in fragment shader.
#define BGFX_CAPS_FRAGMENT_ORDERING               (0x0000000000000040) //!< Fragment ordering is available in fragment shader.
#define BGFX_CAPS_GRAPHICS_DEBUGGER               (0x0000000000000080) //!< Graphics debugger is present.
#define BGFX_CAPS_HDR10                           (0x0000000000000100) //!< HDR10 rendering is supported.
#define BGFX_CAPS_HIDPI                           (0x0000000000000200) //!< HiDPI rendering is supported.
#define BGFX_CAPS_IMAGE_RW                        (0x0000000000000400) //!< Image Read/Write is supported.
#define BGFX_CAPS_INDEX32                         (0x0000000000000800) //!< 32-bit indices are supported.
#define BGFX_CAPS_INSTANCING                      (0x0000000000001000) //!< Instancing is supported.
#define BGFX_CAPS_OCCLUSION_QUERY                 (0x0000000000002000) //!< Occlusion query is supported.
#define BGFX_CAPS_RENDERER_MULTITHREADED          (0x0000000000004000) //!< Renderer is on separate thread.
#define BGFX_CAPS_SWAP_CHAIN                      (0x0000000000008000) //!< Multiple windows are supported.
#define BGFX_CAPS_TEXTURE_2D_ARRAY                (0x0000000000010000) //!< 2D texture array is supported.
#define BGFX_CAPS_TEXTURE_3D                      (0x0000000000020000) //!< 3D textures are supported.
#define BGFX_CAPS_TEXTURE_BLIT                    (0x0000000000040000) //!< Texture blit is supported.
#define BGFX_CAPS_TRANSPARENT_BACKBUFFER          (0x0000000000080000) //!< Transparent back buffer supported.
#define BGFX_CAPS_TEXTURE_COMPARE_RESERVED        (0x0000000000100000)
#define BGFX_CAPS_TEXTURE_COMPARE_LEQUAL          (0x0000000000200000) //!< Texture compare less equal mode is supported.
#define BGFX_CAPS_TEXTURE_CUBE_ARRAY              (0x0000000000400000) //!< Cubemap texture array is supported.
#define BGFX_CAPS_TEXTURE_DIRECT_ACCESS           (0x0000000000800000) //!< CPU direct access to GPU texture memory.
#define BGFX_CAPS_TEXTURE_READ_BACK               (0x0000000001000000) //!< Read-back texture is supported.
#define BGFX_CAPS_VERTEX_ATTRIB_HALF              (0x0000000002000000) //!< Vertex attribute half-float is supported.
#define BGFX_CAPS_VERTEX_ATTRIB_UINT10            (0x0000000004000000) //!< Vertex attribute 10_10_10_2 is supported.
#define BGFX_CAPS_VERTEX_ID                       (0x0000000008000000) //!< Rendering with VertexID only is supported.
#define BGFX_CAPS_VIEWPORT_LAYER_ARRAY            (0x0000000010000000) //!< Viewport layer is available in vertex shader.
#define BGFX_CAPS_DRAW_INDIRECT_COUNT             (0x0000000020000000) //!< Draw indirect with indirect count is supported.
/// All texture compare modes are supported.
#define BGFX_CAPS_TEXTURE_COMPARE_ALL (0 \
	| BGFX_CAPS_TEXTURE_COMPARE_RESERVED \
	| BGFX_CAPS_TEXTURE_COMPARE_LEQUAL \
	)


#define BGFX_CAPS_FORMAT_TEXTURE_NONE             (0x00000000) //!< Texture format is not supported.
#define BGFX_CAPS_FORMAT_TEXTURE_2D               (0x00000001) //!< Texture format is supported.
#define BGFX_CAPS_FORMAT_TEXTURE_2D_SRGB          (0x00000002) //!< Texture as sRGB format is supported.
#define BGFX_CAPS_FORMAT_TEXTURE_2D_EMULATED      (0x00000004) //!< Texture format is emulated.
#define BGFX_CAPS_FORMAT_TEXTURE_3D               (0x00000008) //!< Texture format is supported.
#define BGFX_CAPS_FORMAT_TEXTURE_3D_SRGB          (0x00000010) //!< Texture as sRGB format is supported.
#define BGFX_CAPS_FORMAT_TEXTURE_3D_EMULATED      (0x00000020) //!< Texture format is emulated.
#define BGFX_CAPS_FORMAT_TEXTURE_CUBE             (0x00000040) //!< Texture format is supported.
#define BGFX_CAPS_FORMAT_TEXTURE_CUBE_SRGB        (0x00000080) //!< Texture as sRGB format is supported.
#define BGFX_CAPS_FORMAT_TEXTURE_CUBE_EMULATED    (0x00000100) //!< Texture format is emulated.
#define BGFX_CAPS_FORMAT_TEXTURE_VERTEX           (0x00000200) //!< Texture format can be used from vertex shader.
#define BGFX_CAPS_FORMAT_TEXTURE_IMAGE_READ       (0x00000400) //!< Texture format can be used as image and read from.
#define BGFX_CAPS_FORMAT_TEXTURE_IMAGE_WRITE      (0x00000800) //!< Texture format can be used as image and written to.
#define BGFX_CAPS_FORMAT_TEXTURE_FRAMEBUFFER      (0x00001000) //!< Texture format can be used as frame buffer.
#define BGFX_CAPS_FORMAT_TEXTURE_FRAMEBUFFER_MSAA (0x00002000) //!< Texture format can be used as MSAA frame buffer.
#define BGFX_CAPS_FORMAT_TEXTURE_MSAA             (0x00004000) //!< Texture can be sampled as MSAA.
#define BGFX_CAPS_FORMAT_TEXTURE_MIP_AUTOGEN      (0x00008000) //!< Texture format supports auto-generated mips.

#define BGFX_RESOLVE_NONE                         (0x00) //!< No resolve flags.
#define BGFX_RESOLVE_AUTO_GEN_MIPS                (0x01) //!< Auto-generate mip maps on resolve.

#define BGFX_PCI_ID_NONE                          (0x0000) //!< Autoselect adapter.
#define BGFX_PCI_ID_SOFTWARE_RASTERIZER           (0x0001) //!< Software rasterizer.
#define BGFX_PCI_ID_AMD                           (0x1002) //!< AMD adapter.
#define BGFX_PCI_ID_APPLE                         (0x106b) //!< Apple adapter.
#define BGFX_PCI_ID_INTEL                         (0x8086) //!< Intel adapter.
#define BGFX_PCI_ID_NVIDIA                        (0x10de) //!< nVidia adapter.
#define BGFX_PCI_ID_MICROSOFT                     (0x1414) //!< Microsoft adapter.
#define BGFX_PCI_ID_ARM                           (0x13b5) //!< ARM adapter.

#define BGFX_CUBE_MAP_POSITIVE_X                  (0x00) //!< Cubemap +x.
#define BGFX_CUBE_MAP_NEGATIVE_X                  (0x01) //!< Cubemap -x.
#define BGFX_CUBE_MAP_POSITIVE_Y                  (0x02) //!< Cubemap +y.
#define BGFX_CUBE_MAP_NEGATIVE_Y                  (0x03) //!< Cubemap -y.
#define BGFX_CUBE_MAP_POSITIVE_Z                  (0x04) //!< Cubemap +z.
#define BGFX_CUBE_MAP_NEGATIVE_Z                  (0x05) //!< Cubemap -z.


/// Blend function separate.
#define BGFX_STATE_BLEND_FUNC_SEPARATE(_srcRGB, _dstRGB, _srcA, _dstA) ((0) \
	| ( ( (uint64_t)(_srcRGB)|( (uint64_t)(_dstRGB)<<4) )   )                       \
	| ( ( (uint64_t)(_srcA  )|( (uint64_t)(_dstA  )<<4) )<<8)                       \
	)

/// Blend equation separate.
#define BGFX_STATE_BLEND_EQUATION_SEPARATE(_equationRGB, _equationA) ( (uint64_t)(_equationRGB)|( (uint64_t)(_equationA)<<3) )

/// Blend function.
#define BGFX_STATE_BLEND_FUNC(_src, _dst)    BGFX_STATE_BLEND_FUNC_SEPARATE(_src, _dst, _src, _dst)

/// Blend equation.
#define BGFX_STATE_BLEND_EQUATION(_equation) BGFX_STATE_BLEND_EQUATION_SEPARATE(_equation, _equation)

/// Utility predefined blend modes.

/// Additive blending.
#define BGFX_STATE_BLEND_ADD (0                                         \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_ONE, BGFX_STATE_BLEND_ONE) \
	)

/// Alpha blend.
#define BGFX_STATE_BLEND_ALPHA (0                                                       \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_SRC_ALPHA, BGFX_STATE_BLEND_INV_SRC_ALPHA) \
	)

/// Selects darker color of blend.
#define BGFX_STATE_BLEND_DARKEN (0                                      \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_ONE, BGFX_STATE_BLEND_ONE) \
	| BGFX_STATE_BLEND_EQUATION(BGFX_STATE_BLEND_EQUATION_MIN)          \
	)

/// Selects lighter color of blend.
#define BGFX_STATE_BLEND_LIGHTEN (0                                     \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_ONE, BGFX_STATE_BLEND_ONE) \
	| BGFX_STATE_BLEND_EQUATION(BGFX_STATE_BLEND_EQUATION_MAX)          \
	)

/// Multiplies colors.
#define BGFX_STATE_BLEND_MULTIPLY (0                                           \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_DST_COLOR, BGFX_STATE_BLEND_ZERO) \
	)

/// Opaque pixels will cover the pixels directly below them without any math or algorithm applied to them.
#define BGFX_STATE_BLEND_NORMAL (0                                                \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_ONE, BGFX_STATE_BLEND_INV_SRC_ALPHA) \
	)

/// Multiplies the inverse of the blend and base colors.
#define BGFX_STATE_BLEND_SCREEN (0                                                \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_ONE, BGFX_STATE_BLEND_INV_SRC_COLOR) \
	)

/// Decreases the brightness of the base color based on the value of the blend color.
#define BGFX_STATE_BLEND_LINEAR_BURN (0                                                 \
	| BGFX_STATE_BLEND_FUNC(BGFX_STATE_BLEND_DST_COLOR, BGFX_STATE_BLEND_INV_DST_COLOR) \
	| BGFX_STATE_BLEND_EQUATION(BGFX_STATE_BLEND_EQUATION_SUB)                          \
	)

///
#define BGFX_STATE_BLEND_FUNC_RT_x(_src, _dst) (0         \
	| ( (uint32_t)( (_src)>>BGFX_STATE_BLEND_SHIFT)       \
	| ( (uint32_t)( (_dst)>>BGFX_STATE_BLEND_SHIFT)<<4) ) \
	)

///
#define BGFX_STATE_BLEND_FUNC_RT_xE(_src, _dst, _equation) (0         \
	| BGFX_STATE_BLEND_FUNC_RT_x(_src, _dst)                          \
	| ( (uint32_t)( (_equation)>>BGFX_STATE_BLEND_EQUATION_SHIFT)<<8) \
	)

#define BGFX_STATE_BLEND_FUNC_RT_1(_src, _dst)  (BGFX_STATE_BLEND_FUNC_RT_x(_src, _dst)<< 0)
#define BGFX_STATE_BLEND_FUNC_RT_2(_src, _dst)  (BGFX_STATE_BLEND_FUNC_RT_x(_src, _dst)<<11)
#define BGFX_STATE_BLEND_FUNC_RT_3(_src, _dst)  (BGFX_STATE_BLEND_FUNC_RT_x(_src, _dst)<<22)

#define BGFX_STATE_BLEND_FUNC_RT_1E(_src, _dst, _equation) (BGFX_STATE_BLEND_FUNC_RT_xE(_src, _dst, _equation)<< 0)
#define BGFX_STATE_BLEND_FUNC_RT_2E(_src, _dst, _equation) (BGFX_STATE_BLEND_FUNC_RT_xE(_src, _dst, _equation)<<11)
#define BGFX_STATE_BLEND_FUNC_RT_3E(_src, _dst, _equation) (BGFX_STATE_BLEND_FUNC_RT_xE(_src, _dst, _equation)<<22)


#endif // BGFX_DEFINES_H_HEADER_GUARD
