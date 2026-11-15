/* f_0x1010c440 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010c440 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010c440(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    puVar1 = (CowU32)cow_bridge_1010c7c0(g, COW_IMG(COW_ADDR_LIFT_1010C453), 2u, (const CowU32[]){ 0, 8 }, param_2, g->edx, g->eax, 0u);
      if (puVar1 != (CowU32)0x0) {
        if ((int32_t)rd32((uint32_t)((int)param_2 + 8)) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = (int)puVar1 - (int32_t)rd32((uint32_t)((int)param_2 + 8));
        }
        wr32((uint32_t)puVar1, 0xff000201);
        iVar2 = cow_bridge_1010c7c0(g, COW_IMG(COW_ADDR_LIFT_1010C479), 2u, (const CowU32[]){ 0, 8 }, param_2, g->edx, g->eax, 0u);
        if (iVar2 != 0) {
          wr16((uint32_t)(iVar2 + 2), rd16((uint32_t)(param_1 + 4)));
          uVar3 = cow_bridge_1010bda0(g, COW_IMG(COW_ADDR_LIFT_1010C49B), 2u, (const CowU32[]){ param_3, param_1 + 0xc }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(iVar2 + 4), uVar3);
        }
        puVar1 = (CowU32)cow_bridge_1010c7c0(g, COW_IMG(COW_ADDR_LIFT_1010C4A9), 2u, (const CowU32[]){ 0u, 4u }, param_2, g->edx, g->eax, 0u);
        if (puVar1 != (CowU32)0x0) {
          wr32((uint32_t)puVar1, 0xff00ff00);
        }
        wr32((uint32_t)((int32_t)rd32((uint32_t)((int)param_2 + 8)) + 4 + iVar4), (int32_t)rd32((uint32_t)((int)param_2 + 4)) - iVar4);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [ebx, edi, ebp], ret 12.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010c440(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1010c440: push ebp */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1010c441: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1010c442: register edi, replayed as the entry ran it */
    g->ebp = g->ecx;   /* 0x1010c446: the value the entry loaded and the decompiler dropped */
    cow_lift_1010c440(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
