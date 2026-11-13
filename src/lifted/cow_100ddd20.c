/* f_0x100ddd20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ddd20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ddd20(Guest* g, CowU32 param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    uVar2 = param_3 + param_2;
      uVar3 = uVar2 & 0x80000003;
      if ((int)uVar3 < 0) {
        uVar3 = (uVar3 - 1 | 0xfffffffc) + 1;
      }
      uVar2 = ((CowU32)(uVar3 != 0) + ((int)(uVar2 + ((int)uVar2 >> 0x1f & 3U)) >> 2)) * 0x200 ^
              rd16((uint32_t)param_1) & 0x1ff;
      wr16((uint32_t)param_1, (CowU16)uVar2);
      if (((uVar2 & 0xfe00) == 0) || (0x104 < ((uVar2 & 0xffff) >> 9) * 4)) {
        wr16((uint32_t)(param_1 + 2u * (uint32_t)(1)), 0);
        wr16((uint32_t)param_1, (CowU16)uVar2 & 0x1ff);
        return;
      }
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 2u * (uint32_t)(0x86)));
      wr16((uint32_t)(param_1 + 2u * (uint32_t)(1)), 0);
      if ((int16_t)rd16((uint32_t)(iVar1 + 0x2c)) == 0) {
        wr32((uint32_t)(iVar1 + 0x10), (int32_t)rd32((uint32_t)(iVar1 + 0x10)) + -1);
      }
      wr16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 2u * (uint32_t)(0x86))) + 0x2c), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ddd20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_3;   /* 0x100ddd20: the value the entry loaded and the decompiler dropped */
    g->ecx = param_2;   /* 0x100ddd24: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->ecx; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x100ddd28: register eax, replayed as the entry ran it */
    g->ecx = g->eax;   /* 0x100ddd2a: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x80000003u; uint32_t r = (uint32_t)(a & b); g->ecx = (uint32_t)(r); }   /* 0x100ddd2c: register ecx, replayed as the entry ran it */
    cow_lift_100ddd20(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
