#include <cstdint>

typedef uint16_t s_FxMask;

                                #ifndef DEF_s_FxMask
                                #define DEF_s_FxMask
inline constexpr s_FxMask s_FxMask_Fx_NotDeadCode = s_FxMask(1u);
inline constexpr s_FxMask s_FxMask_Fx_NonDeterministic = s_FxMask(2u);
inline constexpr s_FxMask s_FxMask_Fx_DontMoveUp = s_FxMask(4u);
inline constexpr s_FxMask s_FxMask_Fx_DontMoveDown = s_FxMask(8u);
inline constexpr s_FxMask s_FxMask_Fx_Input = s_FxMask(16u);
inline constexpr s_FxMask s_FxMask_Fx_Output = s_FxMask(32u);
inline constexpr s_FxMask s_FxMask_Fx_Throws = s_FxMask(64u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes = s_FxMask(128u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Div0 = s_FxMask(256u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_OOB = s_FxMask(512u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Assert = s_FxMask(1024u);
inline constexpr s_FxMask s_FxMask_Fx_Crashes_Exit = s_FxMask(2048u);
inline constexpr s_FxMask s_FxMask_Fx_Syscall = s_FxMask(4096u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks = s_FxMask(8192u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks_Alloc = s_FxMask(16384u);
inline constexpr s_FxMask s_FxMask_Fx_Blocks_Await = s_FxMask(32768u);

inline constexpr s_FxMask MASK_s_FxMask
    = s_FxMask_Fx_NotDeadCode
    | s_FxMask_Fx_NonDeterministic
    | s_FxMask_Fx_DontMoveUp
    | s_FxMask_Fx_DontMoveDown
    | s_FxMask_Fx_Input
    | s_FxMask_Fx_Output
    | s_FxMask_Fx_Throws
    | s_FxMask_Fx_Crashes
    | s_FxMask_Fx_Crashes_Div0
    | s_FxMask_Fx_Crashes_OOB
    | s_FxMask_Fx_Crashes_Assert
    | s_FxMask_Fx_Crashes_Exit
    | s_FxMask_Fx_Syscall
    | s_FxMask_Fx_Blocks
    | s_FxMask_Fx_Blocks_Alloc
    | s_FxMask_Fx_Blocks_Await;
                                #endif

#ifndef fu_NO_fdefs

                                #ifndef DEF_EFFECTS_clock
                                #define DEF_EFFECTS_clock
extern const s_FxMask EFFECTS_clock = s_FxMask((s_FxMask((s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_NonDeterministic)) | s_FxMask_Fx_DontMoveDown)) | s_FxMask_Fx_DontMoveUp));
                                #endif

                                #ifndef DEF_EFFECTS_input
                                #define DEF_EFFECTS_input
extern const s_FxMask EFFECTS_input = s_FxMask((s_FxMask((s_FxMask_Fx_Input | s_FxMask_Fx_NonDeterministic)) | s_FxMask_Fx_Blocks));
                                #endif

                                #ifndef DEF_EFFECTS_output
                                #define DEF_EFFECTS_output
extern const s_FxMask EFFECTS_output = s_FxMask((s_FxMask((s_FxMask((s_FxMask((s_FxMask((EFFECTS_input | s_FxMask_Fx_Output)) | s_FxMask_Fx_NotDeadCode)) | s_FxMask_Fx_DontMoveDown)) | s_FxMask_Fx_DontMoveUp)) | s_FxMask_Fx_Blocks));
                                #endif

#endif
