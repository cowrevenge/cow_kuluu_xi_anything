/* f_0x10127280 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10127280 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10127280(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    short sVar3;
    int iVar4;
    CowU32 puVar5;
    iVar4 = rd16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(5))) + 1;
      if (99 < iVar4) {
        iVar4 = 0;
      }
      puVar5 = param_1 + iVar4 * 0x200 + 8;
      if ((rd16((uint32_t)((int)param_1 + 0x16)) == iVar4) && (0x32 < rd16((uint32_t)((int)param_1 + 0x1a)))) {
        iVar1 = iVar4;
        puVar2 = puVar5;
        if (rd32((uint32_t)(puVar5 + 4u * (uint32_t)(3))) == rd32((uint32_t)(puVar5 + 4u * (uint32_t)(3)))) {
          do {
            wr16((uint32_t)((int)param_1 + 0x1a), rd16((uint32_t)((int)param_1 + 0x1a)) + -1);
            iVar1 = iVar1 + 1;
            if (99 < iVar1) {
              iVar1 = 0;
            }
            puVar2 = param_1 + iVar1 * 0x200 + 8;
          } while (rd32((uint32_t)(puVar5 + 4u * (uint32_t)(3))) == rd32((uint32_t)(param_1 + 4u * (uint32_t)(iVar1 * 0x200 + 0xb))));
        }
        wr16((uint32_t)((int)param_1 + 0x16), (short)iVar1);
        wr32((uint32_t)param_1, rd32((uint32_t)(puVar2 + 4u * (uint32_t)(3))));
      }
      sVar3 = (short)iVar4;
      wr16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(5)), sVar3);
      if (rd16((uint32_t)((int)param_1 + 0x1a)) == 0) {
        wr16((uint32_t)((int)param_1 + 0x16), sVar3);
      }
      wr16((uint32_t)((int)param_1 + 0x1a), rd16((uint32_t)((int)param_1 + 0x1a)) + 1);
      puVar5 = param_1 + sVar3 * 0x200 + 8;
      for (iVar4 = 0x200; iVar4 != 0; iVar4 = iVar4 + -1) {
        wr32((uint32_t)puVar5, 0);
        puVar5 = puVar5 + 1;
      }
      g->eax = (CowU32)(param_1 + rd16((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(5))) * 0x200 + 8); return;
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
void cow_adapter_10127280(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->edx = g->ecx;   /* 0x10127280: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10127282: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10127283: push edi */
    { uint32_t A = (uint32_t)(g->edx + 0x14u); g->esi = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10127284: register esi, replayed as the entry ran it */
    { { uint32_t a = g->esi; uint32_t r = (uint32_t)(a + 1u); g->esi = (uint32_t)(r); }; }   /* 0x10127288: register esi, replayed as the entry ran it */
    cow_lift_10127280(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
