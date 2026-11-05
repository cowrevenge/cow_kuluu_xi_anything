/* f_0x10319c9b - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10319c9b (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10319c9b(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7)
{
    int iVar1;
    CowU32 uVar2;
    CowU8 local_28[8];
    int local_20;
    int local_18;
    CowU32 local_14;
    int local_c;
    uVar2 = param_1 - 0x76c;
      if (((int)uVar2 < 0x46) || (0x8a < (int)uVar2)) {
        g->eax = (CowU32)(-1); return;
      }
      param_3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103D37D8) + param_2 * 4)) + param_3;
      if (((uVar2 & 3) == 0) && (2 < param_2)) {
        param_3 = param_3 + 1;
      }
      cow_bridge_1031ffb9(g, COW_IMG(COW_ADDR_LIFT_10319CDF), 0u, (const CowU32[]){ 0u }, 0u, 0u, g->eax, 0u);
      local_20 = param_4;
      local_18 = param_2 + -1;
      param_6 = ((param_4 + (uVar2 * 0x16d + param_3 + (param_1 + -0x76d >> 2)) * 0x18) * 0x3c + param_5
                ) * 0x3c + rd32(COW_IMG(COW_ADDR_LIFT_103D2D50)) + 0x7c558180 + param_6;
      if ((param_7 == 1) ||
         (((param_7 == -1 && (rd32(COW_IMG(COW_ADDR_LIFT_103D2D54)) != 0)) &&
          (local_14 = uVar2, local_c = param_3, iVar1 = cow_bridge_10320284(g, COW_IMG(COW_ADDR_LIFT_10319D45), 1u, (const CowU32[]){ local_28 }, 0u, 0u, g->eax, 0u), iVar1 != 0)))) {
        param_6 = param_6 + rd32(COW_IMG(COW_ADDR_LIFT_103D2D58));
      }
      g->eax = (CowU32)(-1); return;
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 7 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 7 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10319c9b(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10319c9b: push ebp */
    g->ebp = g->esp;                       /* 0x10319c9c: mov ebp, esp */
    g->esp -= 0x24u;                      /* 0x10319c9e: 36 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10319ca1: push ebx */
    g->ebx = param_1;   /* 0x10319ca2: the value the entry loaded and the decompiler dropped */
    cow_lift_10319c9b(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
