/* f_0x101a0730 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a0730 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a0730(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10, CowU32 param_11, CowU32 param_12, CowU32 param_13, CowU32 param_14, CowU32 param_15, CowU32 param_16, CowU32 param_17, CowU32 param_18, CowU32 param_19, CowU32 param_20, CowU32 param_21, CowU32 param_22, CowU32 param_23, CowU32 param_24, CowU32 param_25, CowU32 param_26, CowU32 param_27, CowU32 param_28, CowU32 param_29, CowU32 param_30, CowU32 param_31, CowU32 param_32, CowU32 param_33, CowU32 param_34, CowU32 param_35, CowU32 param_36, CowU32 param_37, CowU32 param_38, CowU32 param_39, CowU32 param_40, CowU32 param_41, CowU32 param_42, CowU32 param_43, CowU32 param_44, CowU32 param_45, CowU32 param_46, CowU32 param_47, CowU32 param_48, CowU32 param_49, CowU32 param_50, CowU32 param_51, CowU32 param_52, CowU32 param_53, CowU32 param_54, CowU32 param_55, CowU32 param_56, CowU32 param_57, CowU32 param_58, CowU32 param_59, CowU32 param_60, CowU32 param_61, CowU32 param_62, CowU32 param_63, CowU32 param_64, CowU32 param_65, CowU32 param_66, CowU32 param_67, CowU32 param_68)
{
    CowU32 in_stack_00000110;
    cow_bridge_101be6c0(g, COW_IMG(COW_ADDR_LIFT_101A0747), 2u, (const CowU32[]){ &param_3, in_stack_00000110 }, 0u, 0u, param_68, 0u);
      return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 68 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 68 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a0730(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x24u));
    CowU32 param_11 = rd32((uint32_t)(sp0 + 4u + 0x28u));
    CowU32 param_12 = rd32((uint32_t)(sp0 + 4u + 0x2cu));
    CowU32 param_13 = rd32((uint32_t)(sp0 + 4u + 0x30u));
    CowU32 param_14 = rd32((uint32_t)(sp0 + 4u + 0x34u));
    CowU32 param_15 = rd32((uint32_t)(sp0 + 4u + 0x38u));
    CowU32 param_16 = rd32((uint32_t)(sp0 + 4u + 0x3cu));
    CowU32 param_17 = rd32((uint32_t)(sp0 + 4u + 0x40u));
    CowU32 param_18 = rd32((uint32_t)(sp0 + 4u + 0x44u));
    CowU32 param_19 = rd32((uint32_t)(sp0 + 4u + 0x48u));
    CowU32 param_20 = rd32((uint32_t)(sp0 + 4u + 0x4cu));
    CowU32 param_21 = rd32((uint32_t)(sp0 + 4u + 0x50u));
    CowU32 param_22 = rd32((uint32_t)(sp0 + 4u + 0x54u));
    CowU32 param_23 = rd32((uint32_t)(sp0 + 4u + 0x58u));
    CowU32 param_24 = rd32((uint32_t)(sp0 + 4u + 0x5cu));
    CowU32 param_25 = rd32((uint32_t)(sp0 + 4u + 0x60u));
    CowU32 param_26 = rd32((uint32_t)(sp0 + 4u + 0x64u));
    CowU32 param_27 = rd32((uint32_t)(sp0 + 4u + 0x68u));
    CowU32 param_28 = rd32((uint32_t)(sp0 + 4u + 0x6cu));
    CowU32 param_29 = rd32((uint32_t)(sp0 + 4u + 0x70u));
    CowU32 param_30 = rd32((uint32_t)(sp0 + 4u + 0x74u));
    CowU32 param_31 = rd32((uint32_t)(sp0 + 4u + 0x78u));
    CowU32 param_32 = rd32((uint32_t)(sp0 + 4u + 0x7cu));
    CowU32 param_33 = rd32((uint32_t)(sp0 + 4u + 0x80u));
    CowU32 param_34 = rd32((uint32_t)(sp0 + 4u + 0x84u));
    CowU32 param_35 = rd32((uint32_t)(sp0 + 4u + 0x88u));
    CowU32 param_36 = rd32((uint32_t)(sp0 + 4u + 0x8cu));
    CowU32 param_37 = rd32((uint32_t)(sp0 + 4u + 0x90u));
    CowU32 param_38 = rd32((uint32_t)(sp0 + 4u + 0x94u));
    CowU32 param_39 = rd32((uint32_t)(sp0 + 4u + 0x98u));
    CowU32 param_40 = rd32((uint32_t)(sp0 + 4u + 0x9cu));
    CowU32 param_41 = rd32((uint32_t)(sp0 + 4u + 0xa0u));
    CowU32 param_42 = rd32((uint32_t)(sp0 + 4u + 0xa4u));
    CowU32 param_43 = rd32((uint32_t)(sp0 + 4u + 0xa8u));
    CowU32 param_44 = rd32((uint32_t)(sp0 + 4u + 0xacu));
    CowU32 param_45 = rd32((uint32_t)(sp0 + 4u + 0xb0u));
    CowU32 param_46 = rd32((uint32_t)(sp0 + 4u + 0xb4u));
    CowU32 param_47 = rd32((uint32_t)(sp0 + 4u + 0xb8u));
    CowU32 param_48 = rd32((uint32_t)(sp0 + 4u + 0xbcu));
    CowU32 param_49 = rd32((uint32_t)(sp0 + 4u + 0xc0u));
    CowU32 param_50 = rd32((uint32_t)(sp0 + 4u + 0xc4u));
    CowU32 param_51 = rd32((uint32_t)(sp0 + 4u + 0xc8u));
    CowU32 param_52 = rd32((uint32_t)(sp0 + 4u + 0xccu));
    CowU32 param_53 = rd32((uint32_t)(sp0 + 4u + 0xd0u));
    CowU32 param_54 = rd32((uint32_t)(sp0 + 4u + 0xd4u));
    CowU32 param_55 = rd32((uint32_t)(sp0 + 4u + 0xd8u));
    CowU32 param_56 = rd32((uint32_t)(sp0 + 4u + 0xdcu));
    CowU32 param_57 = rd32((uint32_t)(sp0 + 4u + 0xe0u));
    CowU32 param_58 = rd32((uint32_t)(sp0 + 4u + 0xe4u));
    CowU32 param_59 = rd32((uint32_t)(sp0 + 4u + 0xe8u));
    CowU32 param_60 = rd32((uint32_t)(sp0 + 4u + 0xecu));
    CowU32 param_61 = rd32((uint32_t)(sp0 + 4u + 0xf0u));
    CowU32 param_62 = rd32((uint32_t)(sp0 + 4u + 0xf4u));
    CowU32 param_63 = rd32((uint32_t)(sp0 + 4u + 0xf8u));
    CowU32 param_64 = rd32((uint32_t)(sp0 + 4u + 0xfcu));
    CowU32 param_65 = rd32((uint32_t)(sp0 + 4u + 0x100u));
    CowU32 param_66 = rd32((uint32_t)(sp0 + 4u + 0x104u));
    CowU32 param_67 = rd32((uint32_t)(sp0 + 4u + 0x108u));
    CowU32 param_68 = rd32((uint32_t)(sp0 + 4u + 0x10cu));
    g->eax = param_68;   /* 0x101a0730: the value the entry loaded and the decompiler dropped */
    cow_lift_101a0730(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12, param_13, param_14, param_15, param_16, param_17, param_18, param_19, param_20, param_21, param_22, param_23, param_24, param_25, param_26, param_27, param_28, param_29, param_30, param_31, param_32, param_33, param_34, param_35, param_36, param_37, param_38, param_39, param_40, param_41, param_42, param_43, param_44, param_45, param_46, param_47, param_48, param_49, param_50, param_51, param_52, param_53, param_54, param_55, param_56, param_57, param_58, param_59, param_60, param_61, param_62, param_63, param_64, param_65, param_66, param_67, param_68);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
