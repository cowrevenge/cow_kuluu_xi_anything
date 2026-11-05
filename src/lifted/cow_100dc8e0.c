/* f_0x100dc8e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100dc8e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100dc8e0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    uVar3 = rd32((uint32_t)param_2);
      iVar2 = 0;
      uVar4 = rd32((uint32_t)param_3);
      do {
        uVar1 = uVar3 ^ rd32((uint32_t)(param_1 + iVar2 * 4));
        uVar3 = (rd32((uint32_t)(param_1 + 0xc48 + (uVar1 >> 0x18) * 4)) & 1 ^ 0x20) +
                (rd32((uint32_t)(param_1 + 0x448 + (uVar1 >> 8 & 0xff) * 4)) & 1 ^ 0x20) +
                rd32((uint32_t)(param_1 + 0x848 + (uVar1 >> 0x10 & 0xff) * 4)) +
                rd32((uint32_t)(param_1 + 0x48 + (uVar1 & 0xff) * 4)) ^ uVar4;
        iVar2 = iVar2 + 1;
        uVar4 = uVar1;
      } while (iVar2 < 0x10);
      uVar4 = rd32((uint32_t)(param_1 + 0x40));
      wr32((uint32_t)param_2, rd32((uint32_t)(param_1 + 0x44)) ^ uVar1);
      wr32((uint32_t)param_3, uVar4 ^ uVar3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100dc8e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = param_4;   /* 0x100dc8e0: the value the entry loaded and the decompiler dropped */
    g->eax = param_3;   /* 0x100dc8e4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100dc8e8: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100dc8e9: push ebp */
    cow_lift_100dc8e0(g, param_1, param_2, param_3, param_4);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
