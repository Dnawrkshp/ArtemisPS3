// 3141card
#ifndef __SDK_H__
#define __SDK_H__


////////////////////////////////////////////////////////////////////////
// gcm 

extern void sdk_01F173C4(const uint32_t ref);                    // cellGcmSetReferenceCommand()
#define GcmSetReferenceCommand sdk_01F173C4

extern int sdk_055BD74D(const uint32_t size);                    // cellGcmGetTiledPitchSize()
#define GcmGetTiledPitchSize sdk_055BD74D

extern void sdk_059B007C(const uint32_t start,                   // cellGcmSetVertexProgramConstants()
                         const uint32_t count,
                         CellGcmContextData *thisContext,
                         const float *data);
#define GcmSetVertexProgramConstants sdk_059B007C

extern void sdk_06EDEA9E(void (*handler)(const uint32_t cause));  // cellGcmSetUserHandler()
#define GcmSetUserHandler sdk_06EDEA9E

extern int sdk_0B4B62D5(CellGcmContextData *thisContext,          // cellGcmSetPrepareFlip()
                        const uint8_t id);
#define GcmSetPrepareFlip sdk_0B4B62D5

extern void sdk_0CDD7A1C(CellGcmContextData *thisContext,         // cellGcmSetLineWidth()
                         const uint32_t width);
#define GcmSetLineWidth sdk_0CDD7A1C

extern void sdk_0CFB527B(CellGcmContextData *thisContext,         // cellGcmSetRestartIndex()
                         const uint32_t index);
#define GcmSetRestartIndex sdk_0CFB527B

extern void sdk_14619D58(CellGcmContextData *thisContext,         // cellGcmSetVertexProgramRegisterCount()
                         const uint32_t registerCount);
#define GcmSetVertexProgramRegisterCount sdk_14619D58

extern void sdk_153DD546(CellGcmContextData *thisContext,         // cellGcmSetRenderEnable()
                         const uint8_t mode,
                         const uint32_t index);
#define GcmSetRenderEnable sdk_153DD546

extern int sdk_16B9369D(CellGcmContextData *thisContext,          // cellGcmSetTransferDataOffset()
                        const uint32_t dstOffset,
                        const uint32_t srcOffset);
#define GcmSetTransferDataOffset sdk_16B9369D

extern void sdk_17427A25(CellGcmContextData *thisContext,         // cellGcmSetWaitLabel()
                         const uint32_t index,
                         const uint32_t value);
#define GcmSetWaitLabel sdk_17427A25

extern void sdk_17A3DA2C(CellGcmContextData *thisContext,         // cellGcmSetVertexTexture()
                         const uint8_t index,
                         const CellGcmTexture *texture);
#define GcmSetVertexTexture sdk_17A3DA2C

extern void sdk_18049621(CellGcmContextData *thisContext,        // cellGcmSetBlendFunc()
                         const uint16_t sfColor,
                         const uint16_t dfColor,
                         const uint16_t sfAlpha,
                         const uint16_t dfAlpha);
#define GcmSetBlendFunc sdk_18049621

extern void sdk_1AA1C2BF(CellGcmContextData *thisContext,        // cellGcmSetDrawInlineArray()
                         const uint8_t mode,
                         const uint32_t count,
                         const void *data);
#define GcmSetDrawInlineArray sdk_1AA1C2BF

extern void sdk_1B752FD1(CellGcmContextData *thisContext,        // cellGcmSetTextureRemap()
                         const uint8_t index,
                         const uint32_t remap);
#define GcmSetTextureRemap sdk_1B752FD1

extern uint32_t sdk_1E479B4C(CellGcmContextData *thisContext,    // cellGcmSetTransferData()
                             const uint8_t mode,
                             const uint32_t dstOffset,
                             const uint32_t dstPitch,
                             const uint32_t srcOffset,
                             const uint32_t srcPitch,
                             const uint32_t bytesPerRow,
                             const uint32_t rowCount);
#define GcmSetTransferData sdk_1CEDF8D0

extern int sdk_21AC3697(const void *address, uint32_t *offset);   // cellGcmAddressToOffset()
#define GcmAddressToOffset sdk_21AC3697

extern void sdk_21B94163(CellGcmContextData *thisContext);        // cellGcmSetInvalidateVertexCache()
#define GcmSetInvalidateVertexCache sdk_21B94163

extern void sdk_246CA27F(CellGcmContextData *thisContext,         // cellGcmSetVertexAttribInputMask()
                         const uint16_t mask);
#define GcmSetVertexAttribInputMask sdk_246CA27F

extern void sdk_28B0901F(CellGcmContextData *thisContext,         // cellGcmSetWriteCommandLabel()
                         const uint8_t index,
                         const uint32_t value);
#define GcmSetWriteCommandLabel sdk_28B0901F

extern int sdk_2A6FBA9C(uint32_t ioOffset, void **address);       // cellGcmIoOffsetToAddress()
#define GcmIoOffsetToAddress sdk_2A6FBA9C

extern void sdk_2B127BAD(CellGcmContextData *thisContext,         // cellGcmSetInlineTransferPointer()
                         const uint32_t offset,
                         const uint32_t count,
                         void **pointer);
#define GcmSetInlineTransferPointer sdk_2B127BAD

extern void sdk_2ED72466(CellGcmContextData *thisContext,         // cellGcmSetBackStencilMask()
                         const uint32_t sm);
#define GcmSetBackStencilMask sdk_2ED72466

extern void sdk_2F2832E3(CellGcmContextData *thisContext,         // cellGcmSetJumpCommand()
                         const uint32_t offset);
#define GcmSetJumpCommand sdk_2F2832E3

extern void sdk_2F96E40A(CellGcmContextData *thisContext,         // cellGcmSetDitherEnable()
                         const uint32_t enable);
#define GcmSetDitherEnable sdk_2F96E40A

extern void sdk_2FA9B538(CellGcmContextData *thisContext,         // cellGcmSetFrontFace()
                         const uint32_t dir);
#define cellGcmSetFrontFace sdk_2FA9B538

extern void sdk_325392F7(CellGcmContextData *thisContext,         // cellGcmSetSurfaceWindow()
                         const CellGcmSurface *surface,
                         const uint32_t origin,
                         const uint32_t pixelCenter);
#define GcmSetSurfaceWindow sdk_325392F7

extern void sdk_33DDD3AE(CellGcmContextData *thisContext,         // cellGcmSetColorMaskMrt()
                         const uint32_t mask);
#define GcmSetColorMaskMrt sdk_33DDD3AE

extern void sdk_3402C4F9(CellGcmContextData *thisContext);        // cellGcmSetDrawEnd()
#define GcmSetDrawEnd sdk_3402C4F9

extern void sdk_39ECE24F(CellGcmContextData *thisContext,         // cellGcmSetAnisoSpread()
                         const uint8_t index, 
                         const uint8_t reduceSamplesEnable,
                         const uint8_t hReduceSamplesEnable,
                         const uint8_t vReduceSamplesEnable,
                         const uint8_t spacingSelect,
                         const uint8_t hSpacingSelect,
                         const uint8_t vSpacingSelect);
#define GcmSetAnisoSpread sdk_39ECE24F

extern void sdk_3D1D929C(CellGcmContextData *thisContext,         // cellGcmSetVertexTextureBorderColor()
                         const uint8_t index,
                         const uint32_t color);
#define GcmSetVertexTextureBorderColor sdk_3D1D929C

extern void sdk_35FD8200(CellGcmContextData *thisContext,         // cellGcmSetCylindricalWrap()
                         const uint32_t enable,
                         const uint32_t reserved);
#define GcmSetCylindricalWrap sdk_35FD8200

extern void sdk_368D1690(CellGcmContextData *thisContext,        // cellGcmSetVertexTextureAddress()
                         const uint8_t index,
                         const uint8_t wraps,
                         const uint8_t wrapt);
#define GcmSetVertexTextureAddress sdk_368D1690

extern void sdk_3F9CC648(CellGcmContextData *thisContext,        // cellGcmSetVertexProgramLoadSlot()
                         const uint32_t loadSlot,
                         const uint32_t instCount,
                         const void *ucode);
#define GcmSetVertexProgramLoadSlot sdk_3F9CC648

extern void sdk_43DC3E94(CellGcmContextData *thisContext,        // cellGcmSetLineSmoothEnable()
                         const uint32_t enable);
#define GcmSetLineSmoothEnable sdk_43DC3E94

extern int sdk_4524CCCD(const uint8_t index);                    // cellGcmBindTile()
#define GcmBindTile sdk_4524CCCD

extern void sdk_476A66AD(CellGcmContextData *thisContext,        // cellGcmSetDepthMask()
                         const uint32_t enable);
#define GcmSetDepthMask sdk_476A66AD

extern void sdk_4CBD0593(CellGcmContextData *thisContext,        // cellGcmSetVertexProgramConstantsPointer()
                         const uint32_t start,
                         const uint32_t count,
                         void **pointer);
#define GcmSetVertexProgramConstantsPointer sdk_4CBD0593

extern void sdk_4D5D1D07(CellGcmContextData *thisContext,        // cellGcmSetAlphaFunc()
                         const uint32_t af,
                         const uint32_t ref);
#define GcmSetAlphaFunc sdk_4D5D1D07

extern void sdk_4D5FAA76(CellGcmContextData *thisContext,        // cellGcmSetLineStippleEnable()
                         const uint32_t enable); 
#define GcmSetLineStippleEnable sdk_4D5FAA76

extern void sdk_4DF84707(CellGcmContextData *thisContext,        // cellGcmSetConvertSwizzleFormat()
                         const uint32_t dstOffset,
                         const uint32_t dstWidth,
                         const uint32_t dstHeight,
                         const uint32_t dstX,
                         const uint32_t dstY,
                         const uint32_t srcOffset,
                         const uint32_t srcPitch,
                         const uint32_t srcX,
                         const uint32_t srcY,
                         const uint32_t srcWidth,
                         const uint32_t srcHeight,
                         const uint32_t bytesPerPixel,
                         const uint32_t mode);
#define GcmSetConvertSwizzleFormat  sdk_4DF84707

extern void sdk_4EC1A446(CellGcmContextData *thisContext,        // cellGcmSetFragmentProgramGammaEnable()
                          const uint32_t enable);
#define GcmSetFragmentProgramGammaEnable sdk_4EC1A446

extern void sdk_4EDCDBF7(CellGcmContextData *thisContext,        // cellGcmSetBlendEnable()
                         const uint32_t enable);
#define GcmSetBlendEnable sdk_4EDCDBF7

// extern int sdk_527C6439(void);  // cellGcmTerminate()

extern void sdk_531AAB53(CellGcmContextData *thisContext,       // cellGcmSetUpdateFragmentProgramParameterLocation()
                         const uint32_t offset,
                         const uint32_t location);
#define GcmSetUpdateFragmentProgramParameterLocation sdk_531AAB53

extern int sdk_543A7C29(CellGcmContextData *thisContext,        // cellGcmSetBlendOptimization()
                        const uint32_t enable);
#define GcmSetBlendOptimization sdk_543A7C29

extern void sdk_54AE2561(CellGcmContextData *thisContext,       // cellGcmSetScissor()
                         const uint16_t x,
                         const uint16_t y,
                         const uint16_t width,
                         const uint16_t height);
#define GcmSetScissor sdk_54AE2561

extern void sdk_55982D1E(CellGcmContextData *thisContext,
                         const uint32_t func,
                         const uint32_t ref,
                         const uint32_t mask);                 // cellGcmSetStencilFunc()
#define GcmSetStencilFunc sdk_55982D1E

extern void sdk_57D3FF62(CellGcmContextData *thisContext);     // cellGcmSetInvalidateZcull()
#define GcmSetInvalidateZcull sdk_57D3FF62

extern void sdk_57E01799(CellGcmContextData *thisContext,      // cellGcmSetDepthFunc()
                         const uint32_t zf);
#define GcmSetDepthFunc sdk_57E01799

extern uint64_t sdk_5A41C10F(const uint32_t index);            // cellGcmGetTimeStamp()
#define GcmGetTimeStamp sdk_5A41C10F

extern void sdk_5A668942(CellGcmContextData *thisContext,      // cellGcmSetDepthBounds()
                         const float zmin,
                         const float zmax);
#define GcmSetDepthBounds sdk_5A668942

extern void sdk_5C1E2BCA(CellGcmContextData *thisContext,      // cellGcmSetDrawIndexArray()
                         const uint8_t mode,
                         const uint32_t count,
                         const uint8_t type,
                         const uint8_t location,
                         const uint32_t indices);  
#define GcmSetDrawIndexArray sdk_5C1E2BCA

extern void sdk_5C64929F(CellGcmContextData *thisContext,      // cellGcmSetDepthFormat()
                         const uint32_t format);
#define GcmSetDepthFormat sdk_5C64929F

extern int sdk_5CD3CE2A(CellGcmContextData *thisContext,
                        const uint32_t enable);                // cellGcmSetZpassPixelCountEnable()
#define GcmSetZpassPixelCountEnable sdk_5CD3CE2A

extern void sdk_5D045671(CellGcmContextData *thisContext,      // cellGcmSetPolygonOffsetLineEnable()
                         const uint32_t enable);
#define GcmSetPolygonOffsetLineEnable sdk_5D045671

extern void sdk_5FCB6457(CellGcmContextData *thisContext,      // cellGcmSetBlendEquation()
                         const uint16_t color,
                         const uint16_t alpha);
#define GcmSetBlendEquation sdk_5FCB6457

extern void sdk_62A015B6(CellGcmContextData *thisContext,      // cellGcmSetAntiAliasingControl()
                         const uint32_t enable,
                         const uint32_t alphaToCoverage,
                         const uint32_t alphaToOne,
                         const uint32_t sampleMask);
#define GcmSetAntiAliasingControl sdk_62A015B6

extern int sdk_63387071(void);                                 // cellGcmGetLastFlipTime()
#define GcmGetLastFlipTime sdk_63387071

extern void sdk_64E1269D(CellGcmContextData *thisContext,      // cellGcmSetVertexDataArray()
                         const uint8_t index,
                         const uint16_t frequency,
                         const uint8_t stride,
                         const uint8_t size,
                         const uint8_t type,
                         const uint8_t location,
                         const uint32_t offset);
#define GcmSetVertexDataArray sdk_64E1269D

extern void sdk_66BB5FFB(CellGcmContextData *thisContext,      // cellGcmSetPointSize()
                         const float size);
#define GcmSetPointSize sdk_66BB5FFB

extern void sdk_6CE8408E(CellGcmContextData *thisContext,      // cellGcmSetFogMode()
                         const uint32_t mode);
#define GcmSetFogMode sdk_6CE8408E

extern void sdk_74E1D875(CellGcmContextData *thisContext,      // cellGcmSetStencilOp()
                         const uint32_t fail,
                         const uint32_t depthFail,
                         const uint32_t depthPass);
#define GcmSetStencilOp sdk_74E1D875

extern void sdk_76143974(CellGcmContextData *thisContext,      // cellGcmSetFogParams()
                         const float p0,
                         const float p1);
#define GcmSetFogParams sdk_76143974

extern void sdk_76CA1B53(CellGcmContextData *thisContext,      // cellGcmSetCullFace()
                         const uint32_t cfm);
#define GcmSetCullFace sdk_76CA1B53

extern void sdk_7739AB40(CellGcmContextData *thisContext,      // cellGcmSetLogicOpEnable()
                         uint32_t enable);
#define GcmSetLogicOpEnable sdk_7739AB40

extern void sdk_77F2A468(CellGcmContextData *thisContext,      // cellGcmSetTextureFilter()
                         const uint8_t index,
                         const uint16_t bias,
                         const uint8_t min,
                         const uint8_t mag,
                         const uint8_t conv);
#define GcmSetTextureFilter sdk_77F2A468

extern void sdk_77F5413F(CellGcmContextData *thisContext,      // cellGcmSetTwoSidedStencilTestEnable()
                         const uint32_t enable);
#define GcmSetTwoSidedStencilTestEnable sdk_77F5413F

extern void sdk_789713F1(CellGcmContextData *thisContext,      // cellGcmSetDrawArrays()
                         const uint8_t mode,
                         const uint32_t first,
                         const uint32_t count);
#define GcmSetDrawArrays sdk_789713F1

extern void sdk_792D30AA(CellGcmContextData *thisContext,      // cellGcmSetDepthBoundsTestEnable()
                         const uint32_t enable);
#define GcmSetDepthBoundsTestEnable sdk_792D30AA

extern void sdk_7CC47DDC(CellGcmContextData *thisContext,      // cellGcmSetPolygonOffset()
                         const float factor,
                         const float units);
#define GcmSetPolygonOffset sdk_7CC47DDC

extern void sdk_7D91FACF(CellGcmContextData *thisContext,      // cellGcmSetTransferDataMode()
                         const uint8_t mode);
#define GcmSetTransferDataMode sdk_7D91FACF

extern void sdk_7EBECBE0(CellGcmContextData *thisContext,      // cellGcmSetTransferScaleSwizzle()
                         const CellGcmTransferScale *scale,
                         const CellGcmTransferSwizzle *swizzle);
#define GcmSetTransferScaleSwizzle sdk_7EBECBE0

extern void sdk_800E24A1(CellGcmContextData *thisContext,      // cellGcmSetTransformBranchBits()
                         const uint32_t branchBits);
#define GcmSetTransformBranchBits sdk_800E24A1

extern void sdk_84B6B9CA(CellGcmContextData *thisContext,      // cellGcmSetClearReport()
                         const uint32_t type);
#define GcmSetClearReport sdk_84B6B9CA

extern void sdk_84D310D3(CellGcmContextData *thisContext,      // cellGcmSetCallCommand()
                         const uint32_t offset);
#define GcmSetCallCommand sdk_84D310D3

extern void sdk_86C75EAE(CellGcmContextData *thisContext,      // cellGcmSetVertexProgramLoad()
                         const CellCgbVertexProgramConfiguration *conf,
                         const void *ucode);
#define GcmSetVertexProgramLoad sdk_86C75EAE

extern void sdk_875FFBCB(CellGcmContextData *thisContext,      // cellGcmSetTextureControl()
                         const uint8_t index,
                         const uint32_t enable,
                         const uint16_t minLod,
                         const uint16_t maxLod,
                         const uint8_t maxAniso);
#define GcmSetTextureControl sdk_875FFBCB

extern void sdk_8795AF23(CellGcmContextData *thisContext,     // cellGcmSetBlendEnableMrt()
                         const uint32_t mrt1,
                         const uint32_t mrt2,
                         const uint32_t mrt3);
#define GcmSetBlendEnableMrt sdk_8795AF23

extern void sdk_89D8C76B(CellGcmContextData *thisContext,     // cellGcmSetPolygonOffsetFillEnable()
                         const uint32_t enable);
#define GcmSetPolygonOffsetFillEnable sdk_89D8C76B

extern void sdk_8BDE5EBF(CellGcmContextData *thisContext,     // cellGcmSetUserCommand()
                         const uint32_t cause);
#define GcmSetUserCommand sdk_8BDE5EBF

extern void sdk_8D34D33B(CellGcmContextData *thisContext,     // cellGcmSetDrawInlineIndexArray32()
                         const uint8_t mode,
                         const uint32_t start,
                         const uint32_t count,
                         const uint32_t *data);
#define GcmSetDrawInlineIndexArray32 sdk_8D34D33B

extern void sdk_8E52EBC7(CellGcmContextData *thisContext,     // cellGcmSetFragmentProgram()
                         const CGprogram prog,
                         const CGparameter param,
                         const uint32_t offset,
                         const uint32_t srcOffset);
#define GcmSetFragmentProgramParameterPointer sdk_8E52EBC7

extern void sdk_9049D753(CellGcmContextData *thisContext,     // cellGcmSetTransferLocation()
                         const uint32_t location);
#define GcmSetTransferLocation sdk_9049D753

extern void sdk_91A4EF0A(CellGcmContextData *thisContext,     // cellGcmInlineTransfer()
                         const uint32_t dstOffset,
                         const void *srcAdr,
                         const uint32_t sizeInWords,
                         const uint8_t location);
#define GcmInlineTransfer sdk_91A4EF0A

extern void sdk_969403F9(CellGcmContextData *thisContext,     // cellGcmSetTransferDataFormat()
                         const int32_t inPitch,
                         const int32_t outPitch,
                         const uint32_t lineLength,
                         const uint32_t lineCount,
                         const uint8_t inFormat,
                         const uint8_t outFormat);
#define GcmSetTransferDataFormat sdk_969403F9

extern void sdk_97C85E96(CellGcmContextData *thisContext,     // cellGcmSetTextureOptimization()
                         const uint8_t index,
                         const uint8_t slope,
                         const uint8_t iso,
                         const uint8_t aniso);
#define GcmSetTextureOptimization sdk_97C85E96

extern void sdk_983FB9AA(CellGcmContextData *thisContext);    // cellGcmSetWaitFlip()
#define GcmSetWaitFlip sdk_983FB9AA

extern void sdk_9B36CF23(CellGcmContextData *thisContext,     // cellGcmSetCullFaceEnable()
                         const uint32_t enable);
#define GcmSetCullFaceEnable sdk_9B36CF23

extern void sdk_9C26525D(CellGcmContextData *thisContext,     // cellGcmSetZcullLimit()
                         const uint16_t moveForwardLimit,
                         const uint16_t pushBackLimit);
#define GcmSetZcullLimit sdk_9C26525D

extern void sdk_9CF7908C(CellGcmContextData *thisContext,     // cellGcmSetBackStencilFunc()
                         const uint32_t func,
                         const uint32_t ref,
                         const uint32_t mask);
#define cellGcmSetBackStencilFunc sdk_9CF7908C

extern void sdk_9DB68B9D(CellGcmContextData *thisContext,    // cellGcmSetDrawInlineIndexArray16()
                         const uint8_t mode,
                         const uint32_t start,
                         const uint32_t count,
                         const uint16_t *data);
#define cellGcmSetDrawInlineIndexArray16 sdk_9DB68B9D

extern void sdk_9E6D4FDB(CellGcmContextData *thisContext,    // cellGcmSetVertexProgramStartSlot()
                         const uint32_t startSlot);
#define GcmSetVertexProgramStartSlot sdk_9E6D4FDB

extern void sdk_A10EDAE9(CellGcmContextData *thisContext,    // cellGcmSetColorMask()
                         const uint32_t mask);
#define GcmSetColorMask sdk_A10EDAE9

extern int sdk_A114EC67(const void *ea,                      // cellGcmMapMainMemory()
                        const uint32_t size,
                        const uint32_t *offset);
#define GcmMapMainMemory sdk_A114EC67

extern void sdk_A1BFE761(CellGcmContextData *thisContext,    // cellGcmSetTimeStamp()
                         const uint32_t index);
#define GcmSetTimeStamp sdk_A1BFE761

extern void sdk_A1ECA254(CellGcmContextData *thisContext,    // cellGcmSetShadeMode()
                         const uint32_t sm);
#define GcmSetShadeMode sdk_A1ECA254

extern void sdk_A1F43AD5(CellGcmContextData *thisContext,    // cellGcmSetViewport()
                         const uint16_t x, 
                         const uint16_t y,
                         const uint16_t width,
                         const uint16_t height,
                         const float min,
                         const float max,
                         const float scale[4],
                         const float offset[4]);
#define GcmSetViewport sdk_A1F43AD5

extern void sdk_A36EB2C4(CellGcmContextData *thisContext,    // cellGcmSetStencilMask()
                         const uint32_t sm);
#define GcmSetStencilMask sdk_A36EB2C4

extern void sdk_A41EF7E8(void (*handler)(const uint32_t head));  // cellGcmSetFlipHandler()
#define GcmSetFlipHandler sdk_A41EF7E8

extern int sdk_A53D12AE(const uint8_t id,                    // cellGcmSetDisplayBuffer()
                        const uint32_t offset, 
                        const uint32_t pitch,
                        const uint32_t width,
                        const uint32_t height);
#define GcmSetDisplayBuffer sdk_A53D12AE

extern CellGcmControl *sdk_A547ADDE(void);                  // cellGcmGetControlRegister()
#define GcmGetControlRegister sdk_A547ADDE

extern void sdk_A6B5FC54(CellGcmContextData *thisContext,   // cellGcmSetDrawBegin()
                         const uint8_t mode); 
#define GcmSetDrawBegin sdk_A6B5FC54

extern void sdk_A719DFA3(CellGcmContextData *thisContext,   // cellGcmSetClearColor()
                         const uint32_t color); 
#define GcmSetClearColor sdk_A719DFA3

extern void sdk_AC91830E(CellGcmContextData *thisContext,   // cellGcmSetZcullStatsEnable()
                         const uint32_t enable);
#define GcmSetZcullStatsEnable sdk_AC91830E

extern void sdk_AD46EA38(CellGcmContextData *thisContext,   // cellGcmSetInvalidateTextureCache()
                         const uint32_t value);
#define GcmSetInvalidateTextureCache sdk_AD46EA38

extern void sdk_AE0D9D26(CellGcmContextData *thisContext,   // cellGcmSetZMinMaxControl()
                         const uint32_t cullNearFarEnable,
                         const uint32_t zclampEnable,
                         const uint32_t cullIgnoreW);
#define GcmSetZMinMaxControl sdk_AE0D9D26

extern void sdk_AED1C2C8(CellGcmContextData *thisContext,   // cellGcmSetFragmentProgramControl()
                         const CGprogram prog,
                         const uint8_t controlTxp,
                         const uint8_t reserved0,
                         const uint8_t reserved1);
#define GcmSetFragmentProgramControl sdk_AED1C2C8

extern void sdk_B059C38A(CellGcmContextData *thisContext,   // cellGcmSetNopCommand()
                         const int32_t count); 
#define GcmSetNopCommand sdk_B059C38A

extern void sdk_B194F501(CellGcmContextData *thisContext,   // cellGcmSetTextureAddress()
                         const uint8_t index,
                         const uint8_t wraps,
                         const uint8_t wrapt,
                         const uint8_t wrapr,
                         const uint8_t unsignedRemap,
                         const uint8_t zfunc,
                         const uint8_t gamma);
#define GcmSetTextureAddress sdk_B194F501

extern void sdk_B2B91406(CellGcmContextData *thisContext,   // cellGcmSetTwoSideLightEnable()
                         const uint32_t enable);
#define GcmSetTwoSideLightEnable sdk_B2B91406

extern void sdk_B2D4C7FC(CellGcmContextData *thisContext,   // cellGcmSetScullControl()
                         const uint8_t sFunc,
                         const uint8_t sRef,
                         const uint8_t sMask);
#define GcmSetScullControl sdk_B2D4C7FC

extern void sdk_B712D2C9(CellGcmContextData *thisContext,   // cellGcmSetDrawInlineArrayPointer()
                         const uint32_t count,
                         void **pointer);
#define GcmSetDrawInlineArrayPointer sdk_B712D2C9

extern void sdk_B9B8DA59(CellGcmContextData *thisContext,   // cellGcmSetTextureBorderColor()
                         const uint8_t index,
                         const uint32_t color);
#define GcmSetTextureBorderColor sdk_B9B8DA59

extern void sdk_B9C79A02(CellGcmContextData *thisContext,   // cellGcmSetStencilTestEnable()
                         const uint32_t enable); 
#define GcmSetStencilTestEnable sdk_B9C79A02

extern void sdk_B9ECE4C8(CellGcmContextData *thisContext,   // cellGcmSetBackPolygonMode()
                         const uint32_t mode);
#define GcmSetBackPolygonMode sdk_B9ECE4C8

extern void sdk_BBDFE4B7(CellGcmContextData *thisContext,   // cellGcmSetAlphaTestEnable()
                         const uint32_t enable);
#define GcmSetAlphaTestEnable sdk_BBDFE4B7

extern int sdk_BD100DBC(const uint8_t index,                // cellGcmSetTileInfo()
                        const uint8_t location,
                        const uint32_t offset,
                        const uint32_t size,
                        const uint32_t pitch,
                        const uint8_t comp,
                        const uint16_t base,
                        const uint32_t bank);
#define GcmSetTileInfo sdk_BD100DBC

extern void sdk_BD42DA64(CellGcmContextData *thisContext,   // cellGcmSetTransferScaleSurface()
                         const CellGcmTransferScale *scale,
                         const CellGcmTransferSurface *surface);
#define GcmSetTransferScaleSurface sdk_BD42DA64

// extern int sdk_BD6D60D9(void);                           // cellGcmSetInvalidateTile()

extern void sdk_BF0D62FD(CellGcmContextData *thisContext,   // cellGcmSetReport()
                         const uint32_t type,
                         const uint32_t index); 
#define GcmSetReport sdk_BF0D62FD

extern void sdk_BF6F72CE(CellGcmContextData *thisContext,   // cellGcmSetBackStencilOp()
                         const uint32_t fail,  
                         const uint32_t depthFail,
                         const uint32_t depthPass);
#define GcmSetBackStencilOp sdk_BF6F72CE

extern void sdk_C450FEA6(CellGcmContextData *thisContext,   // cellGcmSetBlendColor()
                         const uint32_t color,
                         const uint32_t color2); 
#define GcmSetBlendColor sdk_C450FEA6

extern void sdk_C75CA9AA(CellGcmContextData *thisContext,   // cellGcmSetVertexAttribOutputMask()
                         const uint32_t mask);
#define GcmSetVertexAttribOutputMask sdk_C75CA9AA

extern void sdk_C77D9AE2(CellGcmContextData *thisContext,   // cellGcmSetLineStipplePattern()
                         const uint16_t* pattern,
                         const uint8_t factor);
#define GcmSetLineStipplePattern sdk_C77D9AE2

extern void sdk_CA517C10(CellGcmContextData *thisContext,   // cellGcmSetUserClipPlaneControl()
                         const uint32_t plane0,
                         const uint32_t plane1,
                         const uint32_t plane2,
                         const uint32_t plane3,
                         const uint32_t plane4,
                         const uint32_t plane5);
#define GcmSetUserClipPlaneControl sdk_CA517C10

extern void sdk_CECEC6BC(CellGcmContextData *thisContext,   // cellGcmSetRestartIndexEnable()
                         const uint32_t enable);
#define GcmSetRestartIndexEnable sdk_CECEC6BC

extern void sdk_CFC2C3ED(CellGcmContextData *thisContext,   // cellGcmSetTextureBorder()
                         const uint8_t index,
                         const CellGcmTexture *texture,
                         uint8_t border);
#define GcmSetTextureBorder sdk_CFC2C3ED

extern void sdk_D058B6C2(CellGcmContextData *thisContext,   // cellGcmSetClearDepthStencil()
                         const uint32_t value);
#define GcmSetClearDepthStencil sdk_D058B6C2

// sdk_D0B1D189  // cellGcmSetTile()

extern void sdk_D0BE74C1(CellGcmContextData *thisContext,   // cellGcmSetTransferReportData()
                         const uint32_t offset,
                         const uint32_t index,
                         const uint32_t count);
#define GcmSetTransferReportData sdk_D0BE74C1

extern void sdk_D20004C0(CellGcmContextData *thisContext,   // cellGcmSetTransferScaleMode()
                         const uint8_t mode,
                         const uint8_t surface);
#define GcmSetTransferScaleMode sdk_D20004C0

extern void sdk_D22D4C58(CellGcmContextData *thisContext,   // cellGcmSetZcullControl()
                         const uint8_t zCullDir,
                         const uint8_t zCullFormat);
#define GcmSetZcullControl sdk_D22D4C58

extern void sdk_D2610322(CellGcmContextData *thisContext,   // cellGcmSetPolygonStippleEnable()
                         const uint32_t enable);
#define GcmSetPolygonStippleEnable sdk_D2610322

extern void sdk_D34A420D(const uint32_t index,              // cellGcmSetZcull()
                         const uint32_t offset,
                         const uint32_t width,     
                         const uint32_t height,
                         const uint32_t cullStart,
                         const uint32_t zFormat,
                         const uint32_t aaFormat,
                         const uint32_t zcullDir,
                         const uint32_t zcullFormat,
                         const uint32_t sFunc,
                         const uint32_t sRef,
                         const uint32_t sMask);
#define GcmSetZcull sdk_D34A420D

extern void sdk_D5506A07(CellGcmContextData *thisContext,   // cellGcmSetTextureAddressAnisoBias()
                         const uint8_t index,
                         const uint8_t wraps,
                         const uint8_t wrapt,
                         const uint8_t wrapr,
                         const uint8_t unsignedRemap,
                         const uint8_t zfunc,
                         const uint8_t gamma,
                         const uint8_t anisoBias);
#define GcmSetTextureAddressAnisoBias sdk_D5506A07

extern void sdk_D5ACC03B(CellGcmContextData *thisContext,   // cellGcmSetDepthTestEnable()
                         const uint32_t enable);
#define GcmSetDepthTestEnable sdk_D5ACC03B

extern void sdk_D8CCC3D5(CellGcmContextData *thisContext,   // cellGcmSetFrontPolygonMode()
                         const uint32_t mode);
#define GcmSetFrontPolygonMode sdk_D8CCC3D5

extern void sdk_D8E7C747(CellGcmContextData *thisContext,   // cellGcmSetVertexProgram()
                         const CGprogram prog,
                         const void *ucode);
#define GcmSetVertexProgram sdk_D8E7C747

extern int sdk_D9B7653E(const uint8_t index);               // cellGcmUnbindTile()
#define GcmUnbindTile sdk_D9B7653E

extern void sdk_D9F235F2(CellGcmContextData *thisContext,   // cellGcmSetFrequencyDividerOperation()
                         const uint16_t operation);
#define GcmSetFrequencyDividerOperation sdk_D9F235F2

extern int sdk_DB23E867(const uint32_t io);                 // cellGcmUnmapIoAddress()
#define GcmUnmapIoAddress sdk_DB23E867

extern int sdk_DC09357E(CellGcmContextData *thisContext,    // cellGcmSetFlip()
                        const uint8_t id);
#define GcmSetFlip sdk_DC09357E

extern int sdk_E315A0B2(CellGcmConfig *cfg);                // cellGcmGetConfiguration()
#define GcmGetConfiguration sdk_E315A0B2

extern void sdk_E9983E4E(CellGcmContextData *thisContext,   // cellGcmSetVertexTextureFilter()
                         const uint8_t index,
                         const uint16_t bias);
#define GcmSetVertexTextureFilter sdk_E9983E4E

extern void sdk_EA617F0E(CellGcmContextData *thisContext,   // cellGcmSetPolygonStipplePattern()
                         const uint32_t* pattern);
#define GcmSetPolygonStipplePattern sdk_EA617F0E

extern void sdk_ED9143BF(CellGcmContextData *thisContext,   // cellGcmSetDrawInlineIndexArray16Pointer()
                         const uint32_t count,
                         void **pointer);
#define GcmSetDrawInlineIndexArray16Pointer sdk_ED9143BF

extern void sdk_EEB27FA2(CellGcmContextData *thisContext,   // cellGcmSetPolySmoothEnable()
                         const uint32_t enable);
#define GcmSetPolySmoothEnable sdk_EEB27FA2

extern void sdk_F233C864(CellGcmContextData *thisContext,   // cellGcmSetVertexTextureControl()
                         const uint8_t index,
                         const uint32_t enable,
                         const uint16_t minLod,
                         const uint16_t maxLod);
#define GcmSetVertexTextureControl sdk_F233C864

// extern int sdk_F30142BB(void);                           // cellGcmTransferData()

extern void sdk_F644E687(CellGcmContextData *thisContext,   // cellGcmSetLogicOp()
                         const uint32_t op); 
#define GcmSetLogicOp sdk_F644E687

extern uint32_t sdk_F80196C1(const uint8_t index);          // cellGcmGetLabelAddress()
#define GcmGetLabelAddress sdk_F80196C1

extern void sdk_FB60931F(CellGcmContextData *thisContext,   // cellGcmSetVertexProgramParameterBlock()
                         const uint32_t baseConst,
                         const uint32_t constCount,
                         const float *value);
#define GcmSetVertexProgramParameterBlock sdk_FB60931F

extern void sdk_FBEA0DCD(CellGcmContextData *thisContext,   // cellGcmSetFragmentProgramLoadLocation()
                         const CellCgbFragmentProgramConfiguration *conf,
                         const uint32_t location);
#define GcmSetFragmentProgramLoadLocation sdk_FBEA0DCD

extern void sdk_FCDE8385(CellGcmContextData *thisContext,   // cellGcmSetFragmentProgramOffset()
                         const CGprogram prog, 
                         const uint32_t offset,
                         const uint32_t location);
#define GcmSetFragmentProgramOffset sdk_FCDE8385

extern int sdk_B396DD41(CellGcmContextData *thisContext,    // cellGcmSetClearSurface()
                        const uint32_t mask); 
#define GcmSetClearSurface sdk_B396DD41

extern void sdk_F6A68A30(CellGcmContextData *thisContext);  // cellGcmFlush()
#define GcmFlush sdk_F6A68A30

extern void sdk_A95951FC(CellGcmContextData *thisContext,   // cellGcmFinish()
                         uint32_t ref);
#define GcmFinish sdk_A95951FC

extern uint32_t *sdk_BDB10C87(void);                        // _GcmGetCurrentBuffer()
#define GcmGetCurrentBuffer sdk_BDB10C87

extern void sdk_466CAC30(const uint32_t *addr,              // _GcmSetCurrentBuffer()
                         const size_t size); 
#define GcmSetCurrentBuffer sdk_466CAC30

// sdk_3099B063  // _GcmAllocateChannel()
// sdk_7AF7A874  // _GcmInitChannel()


////////////////////////////////////////////////////////////////////////
// gcm cg
extern void sdk_C6EB8B40(CGprogram prog);               // cellGcmCgInitProgram()
#define GcmCgInitProgram sdk_C6EB8B40

extern uint32_t sdk_000CE4E2(CGprogram prog);           // cellGcmCgGetCountParameter()
#define GcmCgGetCountParameter sdk_000CE4E2

extern int sdk_1373C94D(const CGprogram prog,           // cellGcmCgSetInstructionSlot()
                        const uint32_t newSlot);
#define GcmCgSetInstructionSlot sdk_1373C94D

extern uint32_t sdk_01CEA187(const CGprogram prog);     // cellGcmCgGetAttribOutputMask()
#define GcmCgGetAttribOutputMask sdk_01CEA187

extern const float *sdk_268A9624(CGprogram prog,        // cellGcmCgGetParameterValues()
                                 CGparameter param);
#define GcmCgGetParameterValues sdk_268A9624

extern int sdk_3037CEE8(CGprogram prog,                // cellGcmCgGetParameterOrdinalNumber()
                        CGparameter param);
#define GcmCgGetParameterOrdinalNumber sdk_3037CEE8

extern CGbool sdk_33A2DB76(CGprogram prog,             // cellGcmCgGetParameterReferenced()
                           CGparameter param);
#define GcmCgGetParameterReferenced sdk_33A2DB76

extern void sdk_3DE928EE(CGprogram prog,               // cellGcmCgGetUCode()
                         void **pUCode,
                         uint32_t *pUCodeSize);
#define GcmCgGetUCode sdk_3DE928EE

extern void sdk_44F6D0D2(const CGprogram prog,         // cellGcmCgSetRegisterCount()
                         const uint8_t regCount);
#define GcmCgSetRegisterCount sdk_44F6D0D2

extern uint32_t sdk_45440B57(CGprogram prog,           // cellGcmCgGetParameterResourceIndex()
                             CGparameter param);
#define GcmCgGetParameterResourceIndex sdk_45440B57

extern uint32_t sdk_4D93E97C(const CGprogram prog,     // cellGcmCgGetEmbeddedConstantCount()
                             CGparameter param);
#define GcmCgGetEmbeddedConstantCount sdk_4D93E97C

extern uint32_t sdk_75327302(CGprogram prog);          // cellGcmCgGetInstructions()
#define GcmCgGetInstructions sdk_75327302

extern uint32_t sdk_843BBC85(const CGprogram prog);    // cellGcmCgGetRegisterCount()
#define GcmCgGetRegisterCount sdk_843BBC85

extern uint32_t sdk_89906220(const CGprogram prog,     // cellGcmCgGetEmbeddedConstantOffset()
                             CGparameter param,
                             const uint32_t index);
#define GcmCgGetEmbeddedConstantOffset sdk_89906220

extern const char *sdk_95ED21D8(CGprogram prog,        // cellGcmCgGetParameterSemantic()
                                CGparameter param);
#define GcmCgGetParameterSemantic sdk_95ED21D8

extern CGtype sdk_A2BD7265(CGprogram prog,             // cellGcmCgGetParameterType()
                           CGparameter param);
#define GcmCgGetParameterType sdk_A2BD7265

extern CGparameter sdk_A566693D(CGprogram prog,        // cellGcmCgGetNamedParameter()
                                const char *name); 
#define GcmCgGetNamedParameter sdk_A566693D

extern void sdk_D54D3FD9(const CGprogram prog,         // cellGcmCgSetAttribOutputMask()
                         const uint32_t mask);
#define GcmCgSetAttribOutputMask sdk_D54D3FD9

extern uint16_t sdk_DBBE4790(const CGprogram prog);   // cellGcmCgGetVertexAttribInputMask()
#define GcmCgGetVertexAttribInputMask sdk_DBBE4790

extern CGenum sdk_EC86025F(CGprogram prog,            // cellGcmCgGetParameterVariability()
                           CGparameter param);
#define GcmCgGetParameterVariability sdk_EC86025F

extern uint32_t sdk_F1790E85(CGprogram prog);         // cellGcmCgGetTotalBinarySize()
#define GcmCgGetTotalBinarySize sdk_F1790E85

extern CGenum sdk_F2E9C12B(CGprogram prog,            // cellGcmCgGetParameterDirection()
                           CGparameter param);
#define GcmCgGetParameterDirection sdk_F2E9C12B

extern uint32_t sdk_F3868921(const CGprogram prog);   // cellGcmCgGetVertexUserClipMask()
#define GcmCgGetVertexUserClipMask sdk_F3868921

extern CGresource sdk_F514EDF3(CGprogram prog,        // cellGcmCgGetParameterResource()
                               CGparameter param);
#define GcmCgGetParameterResource sdk_F514EDF3


////////////////////////////////////////////////////////////////////////
// font
// sdk_7A0A83C4  // cellFontInitLibraryFreeTypeWithRevision()
// sdk_F03DCC29  // cellFontInitializeWithRevision()

extern int sdk_042E74E3(const CellFontLibrary *lib,          // cellFontCreateRenderer()
                        CellFontRendererConfig *cfg,
                        CellFontRenderer *Renderer);
#define FontCreateRenderer sdk_042E74E3

extern int sdk_1387C45C(const CellFont *font,                // cellFontGetHorizontalLayout()
                        CellFontHorizontalLayout *layout);
#define FontGetHorizontalLayout sdk_1387C45C

extern int sdk_21EBB248(CellFontRenderer *renderer);         // cellFontDestroyRenderer()
#define FontDestroyRenderer sdk_21EBB248

extern int sdk_227E1E3C(const CellFont *font,                // cellFontSetupRenderScalePixel()
                        float w,
                        float h); 
#define FontSetupRenderScalePixel sdk_227E1E3C

extern int sdk_25253FE4(const CellFont *font,                // cellFontSetEffectWeight()
                        float weightParam);
#define FontSetEffectWeight sdk_25253FE4

extern int sdk_29329541(CellFont *openedFont,                // cellFontOpenFontInstance()
                        CellFont *font);
#define FontOpenFontInstance sdk_29329541

extern int sdk_297F0E93(const CellFont *font,               // cellFontSetScalePixel()
                        float w,
                        float h);
#define FontSetScalePixel sdk_297F0E93

extern int sdk_40D40544(const CellFontLibrary *library);    // cellFontEndLibrary()
#define FontEndLibrary sdk_40D40544

extern int sdk_66A23100(const CellFont *font,               // cellFontBindRenderer()
                        CellFontRenderer *renderer);
#define FontBindRenderer sdk_66A23100

extern int sdk_698897F8(const CellFont *font,               // cellFontGetVerticalLayout()
                        CellFontVerticalLayout *layout);
#define FontGetVerticalLayout sdk_698897F8

extern int sdk_70F3E728(const CellFont *font,               // cellFontSetScalePoint()
                        float w,
                        float h);
#define FontSetScalePoint sdk_70F3E728

extern int sdk_7AB47F7E(void);                              // cellFontEnd()
#define FontEnd sdk_7AB47F7E

extern int sdk_8657C8F5(const CellFont *font,               // cellFontSetEffectSlant()
                        float slantParam);
#define FontSetEffectSlant sdk_8657C8F5

extern int sdk_88BE4799(const CellFont *font,               // cellFontRenderCharGlyphImage()
                        uint32_t code,
                        CellFontRenderSurface *surface,
                        float x,
                        float y,
                        CellFontGlyphMetrics* *metrics,
                        CellFontImageTransInfo *transInfo);
#define FontRenderCharGlyphImage sdk_88BE4799

extern void sdk_90B9465E(CellFontRenderSurface *surface,    // cellFontRenderSurfaceInit()
                         void *buffer,
                         int bufferWidthByte,
                         int pixelSizeByte,
                         int w,
                         int h);
#define FontRenderSurfaceInit sdk_90B9465E

extern int sdk_A6DC25D1(const CellFont *font,              // cellFontSetupRenderEffectWeight()
                        float weightParam);
#define FontSetupRenderEffectWeight sdk_A6DC25D1

extern int sdk_A885CC9B(const CellFontLibrary *library,    // cellFontOpenFontset()
                        CellFontType *fontType,
                        CellFont *font);
#define FontOpenFontset sdk_A885CC9B

extern int sdk_B276F1F6(CellFont *font);                   // cellFontCloseFont()
#define FontCloseFont sdk_B276F1F6

extern void sdk_B422B005(CellFontRenderSurface *surface,   // cellFontRenderSurfaceSetScissor()
                         int x0,
                         int y0,
                         int w,
                         int h);
#define FontRenderSurfaceSetScissor sdk_B422B005

extern int sdk_D8EAEE9F(const CellFont *font,              // cellFontGetCharGlyphMetrics()
                        uint32_t code,
                        CellFontGlyphMetrics *metrics);
#define FontGetCharGlyphMetrics sdk_D8EAEE9F

extern int sdk_F16379FA(CellFont *font);                   // cellFontUnbindRenderer()
#define FontUnbindRenderer sdk_F16379FA

extern int sdk_FB3341BA(const CellFont *font,              // cellFontSetResolutionDpi()
                        uint32_t hDpi,
                        uint32_t vDpi);
#define FontSetResolutionDpi sdk_FB3341BA


////////////////////////////////////////////////////////////////////////
// font/freetype
// extern int sdk_0124A94B(void);  // FT_Done_Library()
// extern int sdk_13268E21(void);  // FT_Bitmap_New()
// extern int sdk_1AEB33A5(void);  // FT_Bitmap_Embolden()
// extern int sdk_1BFBE848(void);  // FT_New_Memory_Face()
// extern int sdk_1CEDF8D0(void);  // FT_Done_Face()
// extern int sdk_38E8695C(void);  // FT_MulFix()
// extern int sdk_420DE176(void);  // FT_Glyph_Copy()
// extern int sdk_44951709(void);  // FT_Glyph_Get_CBox()
// extern int sdk_46D8826F(void);  // FT_Set_Char_Size()
// extern int sdk_4B4CBF7A(void);  // FT_Outline_Embolden()
// extern int sdk_4B573039(void);  // FT_Get_Glyph()
// extern int sdk_4BC591D7(void);  // FT_Vector_Transform()
// extern int sdk_4F36CF3F(void);  // FT_Get_Char_Index
// extern int sdk_51B09E1D(void);  // FT_Open_Face
// extern int sdk_5C36E44F(void);  // FT_Render_Glyph
// extern int sdk_68C25868(void);  // FT_Add_Default_Modules
// extern int sdk_7EA2C657(void);  // FT_Set_Transform
// extern int sdk_7EC07F08(void);  // FT_Bitmap_Copy
// extern int sdk_85A969B6(void);  // FT_Init_FreeType
// extern int sdk_85C80B7F(void);  // FT_RoundFix
// extern int sdk_89FB856E(void);  // FT_Get_Sfnt_Table
// extern int sdk_A11BA28B(void);  // FT_New_Library
// extern int sdk_A4E6C423(void);  // FT_Select_Charmap
// extern int sdk_B229E6BF(void);  // FT_Load_Glyph
// extern int sdk_B499D895(void);  // FT_Glyph_To_Bitmap
// extern int sdk_CC20195F(void);  // FT_New_Face
// extern int sdk_D912B0F4(void);  // FT_Glyph_Transform
// extern int sdk_DB615095(void);  // FT_Done_Glyph


////////////////////////////////////////////////////////////////////////
// lion
extern L10nResult sdk_060EE3B2(const uint8_t jis[],      // JISstoUTF8s()
                               size_t *jis_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define JISstoUTF8s sdk_060EE3B2

extern int sdk_1906CE6B(const uint8_t str[],             // jstrnchk()
                        size_t len);            
#define jstrnchk sdk_1906CE6B

extern uint16_t sdk_24FD32A9(const uint16_t c);          // sjishan2zen()
#define sjishan2zen sdk_24FD32A9

extern L10nResult sdk_2AD091C6(const uint16_t ucs2[],    // UCS2stoUTF8s()
                               size_t *ucs2_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define UCS2stoUTF8s sdk_2AD091C6

extern L10nResult sdk_2B84030C(const uint8_t euckr[],    // EUCKRstoUTF8s()
                               size_t *euckr_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define EUCKRstoUTF8s sdk_2B84030C

extern int sdk_317AB7C2(const uint16_t utf16[],          // UTF16toUTF8()
                        uint8_t utf8[],
                        size_t *utf8_len);
#define UTF16toUTF8 sdk_317AB7C2

extern L10nResult sdk_32689828(const uint8_t arib[],    // ARIBstoUTF8s()
                               size_t *arib_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define ARIBstoUTF8s sdk_32689828

extern L10nResult sdk_33435818(const uint8_t sjis[],    // SJISstoUTF8s()
                               size_t *sjis_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define SJISstoUTF8s sdk_33435818

extern uint16_t sdk_33F8B35C(const uint16_t c);         // sjiszen2han
#define sjiszen2han sdk_33F8B35C

extern L10nResult sdk_52B7883F(const uint8_t utf8[],    // UTF8stoBIG5s()
                               size_t *utf8_len,
                               uint8_t big5[],
                               size_t *big5_len);
#define UTF8stoBIG5s sdk_52B7883F

extern int sdk_596DF41C(const uint16_t ucs2,            // UCS2toSJIS()
                        uint8_t sjis[]); 
#define UCS2toSJIS sdk_596DF41C

extern L10nResult sdk_5A4AB223(const uint16_t msjis[],  // MSJISstoUTF8s()
                               size_t *msjis_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define MSJISstoUTF8s sdk_5A4AB223

extern int sdk_5B684DFB(const uint16_t ucs2,            // UCS2toBIG5()
                        uint8_t big5[]);  
#define UCS2toBIG5 sdk_5B684DFB

extern L10nResult sdk_5CD29270(const uint8_t utf8[],    // UTF8stoEUCKRs()
                               size_t *utf8_len,
                               uint8_t euckr[],
                               size_t *euckr_len);
#define UTF8stoEUCKRs sdk_5CD29270

extern L10nResult sdk_5E1D9330(const uint8_t uhc[],     // UHCstoUTF8s()
                               size_t *uhc_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define UHCstoUTF8s sdk_5E1D9330

extern int sdk_6122E000(const uint8_t sjis[],           // SJIStoUTF8()
                        uint8_t utf8[],
                        size_t *utf8_len);         
#define SJIStoUTF8 sdk_6122E000

extern int sdk_61FB9442(const uint8_t utf8[],           // UTF8toUTF16()
                        uint16_t utf16[],
                        size_t *utf16_len);        
#define UTF8toUTF16 sdk_61FB9442

extern L10nResult sdk_638C2FC1(const uint8_t src[],     // SjisHan2Zen()
                               size_t *src_len,
                               uint8_t dst[],
                               size_t *dst_len);
#define SjisHan2Zen sdk_638C2FC1

extern L10nResult sdk_89236C86(const uint8_t utf8[],    // UTF8stoGB18030s()
                               size_t *utf8_len,
                               uint8_t gb18030[],
                               size_t *gb18030_len);
#define UTF8stoGB18030s sdk_89236C86

extern L10nResult sdk_931FF25A(L10nCode src_code,       // L10nConvertStr()
                               const void *src,
                               size_t *src_len,
                               L10nCode dst_code, 
                               void *dst,
                               size_t *dst_len);
#define L10nConvertStr sdk_931FF25A

extern int sdk_9A0E7D23(const uint16_t ucs2,           // UCS2toEUCCN()
                        uint8_t euccn[]);
#define UCS2toEUCCN sdk_9A0E7D23

extern int sdk_A9A76FB8(const uint16_t ucs2,          // UCS2toUTF8()
                        uint8_t utf8[]);
#define UCS2toUTF8 sdk_A9A76FB8

extern int sdk_BDD44EE3(const uint8_t sjis[],         // SJIStoUCS2()                   
                        uint16_t *ucs2); 
#define SJIStoUCS2 sdk_BDD44EE3

extern int sdk_BEFE3869(const uint16_t c);            // isSjisKigou()
#define isSjisKigou sdk_BEFE3869

extern L10nResult sdk_D02EF83D(const uint8_t gb18030[],  // GB18030stoUTF8s()
                               size_t *gb18030_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define GB18030stoUTF8s sdk_D02EF83D

extern L10nResult sdk_D990858B(const uint8_t big5[],     // BIG5stoUTF8s()
                               size_t *big5_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define BIG5stoUTF8s sdk_D990858B

extern L10nResult sdk_DA67B37F(const uint8_t utf8[],     // UTF8stoSBCSs()
                               size_t *utf8_len,
                               uint8_t sbcs[],
                               size_t *sbcs_len,
                               L10nCode code);
#define UTF8stoSBCSs sdk_DA67B37F

extern L10nResult sdk_DD5EBDEB(const uint8_t utf8[],     // UTF8stoSJISs()
                               size_t *utf8_len,
                               uint8_t sjis[],
                               size_t *sjis_len);
#define UTF8stoSJISs sdk_DD5EBDEB

extern L10nResult sdk_E6F5711B(const uint16_t utf16[],   // UTF16stoUTF8s()
                               size_t *utf16_len,
                               uint8_t utf8[],
                               size_t *utf8_len);
#define UTF16stoUTF8s sdk_E6F5711B

extern int sdk_EB3DC670(const uint8_t utf8[],            // UTF8toSJIS()
                        uint8_t sjis[],
                        size_t *sjis_len); 
#define UTF8toSJIS sdk_EB3DC670

extern L10nResult sdk_F7681B9A(const uint8_t utf8[],     // UTF8stoUTF16s()
                               size_t *utf8_len,
                               uint16_t utf16[],
                               size_t *utf16_len);
#define UTF8stoUTF16s sdk_F7681B9A

extern L10nResult sdk_FDBF6AC5(const uint8_t utf8[],    // UTF8stoUCS2s()
                               size_t *utf8_len,
                               uint16_t ucs2[],
                               size_t *ucs2_len);
#define UTF8stoUCS2s sdk_FDBF6AC5

extern L10nResult sdk_714A9B4A(const uint16_t ucs2[],   // UCS2stoUTF16s()
                               size_t *ucs2_len,
                               uint16_t utf16[],
                               size_t *utf16_len); 
#define UCS2stoUTF16s sdk_714A9B4A

extern L10nResult sdk_72632E53(const uint8_t sbcs[],    // SBCSstoUTF8s()
                               size_t *sbcs_len,
                               uint8_t utf8[],
                               size_t *utf8_len,
                               L10nCode code);
#define SBCSstoUTF8s sdk_72632E53


////////////////////////////////////////////////////////////////////////
// AES
struct aes_key
{ 
	uint32_t x[60];  // u32[60] -> size on stack
};
typedef struct aes_key AES_KEY;

extern int sdk_FC096B9E(AES_KEY *aes_key,                    // return round for bits or -1(error)
                        const unsigned char *user_key,
                        const int bits);
#define AES_set_encrypt_key sdk_FC096B9E

extern int sdk_C02932C4(AES_KEY *aes_key,                    // return rounds for bits or -1(error)
                        const unsigned char *user_key,
                        const int bits);
#define AES_set_decrypt_key sdk_C02932C4

extern void sdk_BEFAD0E2(unsigned char *out,
                         const unsigned char *in,
                         AES_KEY *aes_key,
                         int round);
#define AES_encrypt sdk_BEFAD0E2

extern void sdk_70C081A7(unsigned char *out,
                         const unsigned char *in,
                         AES_KEY *aes_key,
                         int round);
#define AES_decrypt sdk_70C081A7

extern int sdk_7B79B6C5(unsigned char *out,               // ret: 0 (ok), -1 (key error), -2 (length error)
                        const unsigned char *in,
                        int len,
                        const unsigned char *user_key,
                        const int bits,
                        unsigned char *iv);
#define AES_CBC_CFB_encrypt sdk_7B79B6C5

extern int sdk_B45387CD(unsigned char *out,               // ret: 0 (ok), -1 (key error), -2 (length error)
                        const unsigned char *in,
                        int len,
                        const unsigned char *user_key,
                        const int bits,
                        unsigned char *iv);
#define AES_CBC_CFB_decrypt sdk_B45387CD


////////////////////////////////////////////////////////////////////////
// io

// gamepad
// sdk_1F98080A  // ?
// sdk_826F5CB5  // ?
extern int sdk_4AF81871(int portNo);                         // Disconnect GamePad
extern int sdk_31BB1D05(int portNo, uint16_t *status);       // getPower
extern int sdk_832304BC(int portNo, uint16_t *statusLevel);  // getBattery
// sdk_8FAB7348                                              // ? sys_hid_manager_ioctl(u32 port_no, u32 packet_id(0), u8[0x44], u32 size(0x44))
extern int sdk_4C751D97(int portNo, int deviceNo);           // unmap_port_from_pad, e.g. (0, 0) unmap pad(device 0) from port 0
extern int sdk_CF03F47A(int portNo, int deviceNo);           // map_port_to_pad, e.g. (2, 0) map pad(device 0) to port 3(2)
// sdk_6C54092D  // ? start: io_sys_config_stop/free
// sdk_5161DDBD  // ? end: register/alloc

// keyboard
// sdk_F133FB78  // ?
// sdk_70CB170C  // ?
extern int sdk_A33FC21C(int portNo, int deviceNo);           // unmap_port_from_keybord
extern int sdk_650A537E(int portNo, int deviceNo);           // map_port_to_keybord 
// sdk_32B741DE  // ? 
// sdk_0F6D0878  // ? 

// mouse
// sdk_D2DE9F18  // ?
extern int sdk_2D3B4E2B(int portNo, int deviceNo);           // unmap_port_from_mouse 
extern int sdk_5C06471E(int portNo, int deviceNo);           // map_port_to_mouse
// sdk_8A2E5730  // ?
// sdk_A2858F66  // ?






// sdk_00582E1A  // ?
// sdk_0417988E  // ?
// sdk_054E5064  // ?
// sdk_05AE48E7  // ?
// sdk_05C4F805  // ?
// sdk_05F214E0  // ?
// sdk_05FD5858  // ?
// sdk_0744531E  // ?
// sdk_07A95741  // sha256_hmac_buffer 
// sdk_0BAC90F2  // avset_finish 
// sdk_0D05DA19  // ?
// sdk_0E508B17  // avset_audioubinfo
// sdk_10C8D8FE  // ?
// sdk_14D6C1E3  // ?
// sdk_15D3C74C  // avset_sethdmimode
// sdk_16AA3407  // avset_setvideopitch
// sdk_18E4FC82  // avset_getksv
// sdk_19109EC7  // rsa sign 512 
// sdk_1A706BAF  // ?
// sdk_1B5A0282  // rsa verify 2048 
// sdk_1F6E56C3  // avset_makeaudiochstat
// sdk_2140F339  // avset_setbackendmute
// sdk_26067778  // avset_settvmute (1)
// sdk_27C75D30  // ?
// sdk_280E6BA5  // ?
// sdk_284F0041  // ?
// sdk_28563CCF  // ?
// sdk_2E09D1C4  // avset_setmv
// sdk_2E0E728B  // ?
// sdk_2E267B28  // ?
// sdk_300B99F2  // sha1_hmac_final()
// sdk_329DAD93  // ?
// sdk_33CD8C2F  // ?
// sdk_34BAB2E1  // ?
// sdk_3543A1A2  // avset_ytrapcontrol
// sdk_38750386  // ?
// sdk_3897F229  // ?
// sdk_3C579B2B  // des encrypt ecb set key ? 
// sdk_3CABD075  // sha1_final
// sdk_3EAAAD1C  // ?
// sdk_3F9DC158  // avset_portoption
// sdk_400B7E88  // ?
// sdk_4484A101  // sha1_hmac_update()
// sdk_4656CC55  // ?
// sdk_496B71D4  // ?
// sdk_4B478CDD  // ?
// sdk_50418A29  // ?
// sdk_509D1588  // avset_get_cec_config
// sdk_5161DDBD  // ?
// sdk_529AFC47  // ?
// sdk_547B602C  // sha1_hmac_init
// sdk_55A1F3B9  // avset_acp_packet (4) 
// sdk_55ACAB8A  // sha1_init
// sdk_59B24A01  // ?
// sdk_5AC8605C  // avset_acp_packet (0xA) 	
// sdk_5C306D39  // avset_setaudiomute (0)
// sdk_5C48EDCD  // sha256_final 
// sdk_5D7BDBEA  // ?
// sdk_5D81B912  // sha256_init
// sdk_5D87C513  // sha256_hmac_update
// sdk_5E89C269  // ?
// sdk_5FAFE92B  // cellCryptoPuSha1Hash
// sdk_60D34743  // avset_setvideoformat
// sdk_6176961D  // ?
// sdk_61D5F528  // avset_gethwconfig 
// sdk_642C0E15  // ?
// sdk_64AB4054  // ?
// sdk_65E27CB3  // ?
// sdk_677BC574  // avset_getksv (0,0)
// sdk_68B630D5  // aes_omac_mode_1
// sdk_6A226C1C  // ?
// sdk_6A4F5AF2  // rsa sign 1024
// sdk_6DB792AE  // ?
// sdk_6DFF610C  // avset_setvideomode (0)
// sdk_6F3986A6  // ?
// sdk_708A9A5D  // ?
// sdk_71F86685  // ?
// sdk_722032CB  // ?
// sdk_73209D59  // ?
// sdk_74A2A1FE  // sha1_hmac_buffer
// sdk_76EC624A  // ?
// sdk_7961474B  // ?
// sdk_7B4DEEAD  // avset_setaudiomute (1)
// sdk_7F9F62EC  // 
// sdk_831E89EE  // sha1_update
// sdk_84E4A0A0  // ?
// sdk_8BB8A16A  // ?
// sdk_8CA59B74  // ?
// sdk_8D74012D  // avset_audioctrlinfo
// sdk_8DFABC0A  // ?
// sdk_8EFAF138  // avset_settvmute (0)
// sdk_8F7AEA15  // ?
// sdk_9097FC9B  // ?
// sdk_915D28A3  // avset_setcgmswss
// sdk_919FF7E5  // ?
// sdk_947C7B8A  // ?
// sdk_96FE7939  // ret 0
// sdk_97AEDED8  // ?
// sdk_98146E83  // avset_setaudioactive (0) 
// sdk_990D6A8D  // avset_acp_ctrl
// sdk_9C15FD4F  // des encrypt ? (ecb) 
// sdk_9D792718  // ?
// sdk_9E445E9F  // avset_finish 
// sdk_A2BF1C3A  // ?
// sdk_A3ED6917  // avset_addsigctrl (1)
// sdk_A4F73351  // ?
// sdk_A5F629E4  // ?
// sdk_A9009E9F  // avset_ctrlhdcpenc
// sdk_AC12AA49  // ?
// sdk_B0F08283  // ?
// sdk_B369C9E3  // ?
// sdk_B5877BBF  // cellAvsetGetMonitorInformation 	int cellAvsetGetMonitorInformation (uint8_t[0xCC], 0, 0xCC)
// sdk_B5BB1EF4  // ?
// sdk_B6A6AD5A  // ?
// sdk_B80602D2  // ecc_ec_dsa_verify 
// sdk_B85E0B0D  // ?
// sdk_B88738E3  // ?
// sdk_BA3FF070  // avset_setaudioactive (1)
// sdk_BFC29929  // des encrypt ecb ? 
// sdk_C25D60F0  // ?
// sdk_C64E3D47  // ?
// sdk_C75E6A6C  // ?
// sdk_C7781115  // sha256_buffer 
// sdk_C8365EE7  // ?
// sdk_C916193F  // des decrypt ecb set key ? 
// sdk_CAE48D42  // ?
// sdk_CBA11A47  // ?
// sdk_CFFBE62C  // ?
// sdk_D08B68DA  // ?
// sdk_D449B80C  // avset_clrccfifo
// sdk_D632BCBF  // ?
// sdk_D7A665F4  // avset_cs_direct
// sdk_DA0FB37E  // ?
// sdk_DAF887EA  // avset_setccmulti 	
// sdk_DB69D144  // ?
// sdk_DF1C334E  // sys_rsx_attribute
// sdk_DF2DCF22  // avset_audiomode (2)
// sdk_DFA003EA  // ?
// sdk_DFABCE03  // ?
// sdk_E0B77114  // avset_setvideomode (1)
// sdk_E0E56430  // rsa verify 512 
// sdk_E20D7343  // ?
// sdk_E391F8EA  // ?
// sdk_E3A101E0  // ?
// sdk_E5282470  // ?
// sdk_E5A389E4  // ?
// sdk_E69544B6  // ?
// sdk_E9D67D3C  // ?
// sdk_EB4716D4  // avset_setvideomute
// sdk_ED10FCFE  // ?
// sdk_EDCDED77  // rsa sign 2048 
// sdk_EE14B155  // ?
// sdk_EF9CE7C7  // rsa verify 1024
// sdk_F37209FA  // avset_audiomode (0)
// sdk_F409024E  // ?
// sdk_F5376485  // ?
// sdk_F7715A5B  // ?
// sdk_F8244C5E  // ?
// sdk_F8D95C49  // cellFreeType2Ex()
// sdk_F9729831  // ?
// sdk_FA304515  // avset_finish 
// sdk_FA45245D  // avset_setroute 
// sdk_FCC91A83  // ?
// sdk_FDC00061  // ?
// sdk_FE9A658C  // ?
// sdk_FF17D731  // avset_addsigctrl (0)

#endif // __SDK_H__ 
