/* f_0x10127320 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10127320 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10127320(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    short sVar4;
    int iVar5;
    CowU32 puVar6;
    iVar5 = rd16((uint32_t)(param_1 + 0x16)) + -1;
      if (iVar5 < 0) {
        iVar5 = 99;
      }
      iVar1 = iVar5 * 0x800 + 0x20 + param_1;
      if ((rd16((uint32_t)(param_1 + 0x14)) == iVar5) && (((int16_t)(0x32) < (int16_t)(rd16((uint32_t)(param_1 + 0x1a)))))) {
        iVar2 = iVar1;
        iVar3 = iVar5;
        if (rd32((uint32_t)(iVar1 + 0xc)) == rd32((uint32_t)(iVar1 + 0xc))) {
          do {
            wr16((uint32_t)(param_1 + 0x1a), rd16((uint32_t)(param_1 + 0x1a)) + -1);
            iVar3 = iVar3 + -1;
            if (iVar3 < 0) {
              iVar3 = 99;
            }
            iVar2 = iVar3 * 0x800 + 0x20 + param_1;
          } while (rd32((uint32_t)(iVar1 + 0xc)) == rd32((uint32_t)(iVar3 * 0x800 + 0x2c + param_1)));
        }
        wr16((uint32_t)(param_1 + 0x14), (short)iVar3);
        wr32((uint32_t)(param_1 + 4), rd32((uint32_t)(iVar2 + 0xc)));
      }
      sVar4 = (short)iVar5;
      wr16((uint32_t)(param_1 + 0x16), sVar4);
      if (rd16((uint32_t)(param_1 + 0x1a)) == 0) {
        wr16((uint32_t)(param_1 + 0x14), sVar4);
      }
      wr16((uint32_t)(param_1 + 0x1a), rd16((uint32_t)(param_1 + 0x1a)) + 1);
      puVar6 = (CowU32)(sVar4 * 0x800 + 0x20 + param_1);
      for (iVar5 = 0x200; iVar5 != 0; iVar5 = iVar5 + -1) {
        wr32((uint32_t)puVar6, 0);
        puVar6 = puVar6 + 1;
      }
      g->eax = (CowU32)(rd16((uint32_t)(param_1 + 0x16)) * 0x800 + 0x20 + param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10127320(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->edx = g->ecx;   /* 0x10127320: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10127322: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10127323: push edi */
    { uint32_t A = (uint32_t)(g->edx + 0x16u); g->esi = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10127324: register esi, replayed as the entry ran it */
    { { uint32_t a = g->esi; uint32_t r = (uint32_t)(a - 1u); g->esi = (uint32_t)(r); }; }   /* 0x10127328: register esi, replayed as the entry ran it */
    cow_lift_10127320(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
