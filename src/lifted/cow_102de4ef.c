/* f_0x102de4ef - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102de4ef (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102de4ef(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU16 uVar2;
    CowU32 puVar3;
    int iVar4;
    int iVar5;
    CowU32 puVar6;
    CowU32 puVar7;
    CowU32 puVar8;
    CowU32 puVar9;
    CowU32 puVar10;
    puVar3 = rd16((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x18));
      iVar4 = rd32((uint32_t)param_1);
      iVar5 = (int32_t)rd32((uint32_t)(iVar4 + 0x1050));
      puVar6 = rd16((uint32_t)(iVar4 + 0x18));
      puVar8 = (CowU32)((int32_t)rd32((uint32_t)(iVar4 + 0x105c)) * iVar5 + (int)puVar6);
      for (; puVar6 < puVar8; puVar6 = puVar6 + 2u * (uint32_t)(iVar5)) {
        iVar4 = (int32_t)rd32((uint32_t)(iVar4 + 0x1058));
        puVar9 = (CowU32)(iVar5 + (int)puVar6);
        puVar7 = puVar3;
        for (puVar10 = puVar6; puVar10 < puVar6 + 2u * (uint32_t)(iVar4); puVar10 = puVar10 + 2u * (uint32_t)(2)) {
          puVar1 = puVar9 + 2u * (uint32_t)(1);
          uVar2 = rd16((uint32_t)puVar9);
          puVar9 = puVar9 + 2u * (uint32_t)(2);
          wr16((uint32_t)puVar7, (CowU16)((rd16((uint32_t)(puVar10 + 2u * (uint32_t)(1))) & 0xffff03e0) + 0x40 +
                             (rd16((uint32_t)puVar1) & 0xffff03e0) + (rd16((uint32_t)puVar10) & 0xffff03e0) + (uVar2 & 0xffff03e0) >>
                            2) & 0x3e0 |
                    (CowU16)((rd16((uint32_t)puVar1) & 0x7c1f) + (rd16((uint32_t)puVar10) & 0x7c1f) + (uVar2 & 0x7c1f) + 0x802 +
                             (rd16((uint32_t)(puVar10 + 2u * (uint32_t)(1))) & 0x7c1f) >> 2) & 0x7c1f);
          puVar7 = puVar7 + 2u * (uint32_t)(1);
        }
        puVar3 = (CowU32)((int)puVar3 + (int32_t)rd32((uint32_t)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + 0x1050)));
        iVar4 = rd32((uint32_t)param_1);
        iVar5 = (int32_t)rd32((uint32_t)(iVar4 + 0x1050));
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 32 locals, pops [ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102de4ef(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->esp -= 0x20u;                      /* 0x102de4ef: 32 bytes of locals */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102de4f2: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102de4f5: register eax, replayed as the entry ran it */
    cow_lift_102de4ef(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
