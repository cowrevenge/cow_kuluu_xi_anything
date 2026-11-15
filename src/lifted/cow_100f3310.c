/* f_0x100f3310 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100f3310 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100f3310(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    wr32((uint32_t)param_1, param_2);
      wr32((uint32_t)((int)param_1 + 0x104c), 0);
      wr32((uint32_t)((int)param_1 + 0x1050), 0);
      wr32((uint32_t)((int)param_1 + 0x1048), 0);
      wr8((uint32_t)((int)param_1 + 0xc5), 1);
      wr8((uint32_t)((int)param_1 + 0xc6), 0);
      iVar1 = cow_bridge_100f31c0(g, COW_IMG(COW_ADDR_LIFT_100F3347), 1u, (const CowU32[]){ param_4 }, param_1, param_2, param_3, 0u);
      if (iVar1 == 0) {
        g->eax = (CowU32)(0x10); return;
      }
      wr8((uint32_t)((int)param_1 + 0x88), 0);
      iVar1 = cow_bridge_100f32b0(g, COW_IMG(COW_ADDR_LIFT_100F3367), 1u, (const CowU32[]){ 271983324u }, param_1, g->edx, param_3, 0u);
      if (iVar1 == 0) {
        wr16((uint32_t)((int)param_1 + 0x1058), (CowU16)param_3);
      }
      g->eax = (CowU32)(iVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 12.
   Arguments: 2 register argument(s) [ecx, edx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100f3310(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_3;   /* 0x100f3310: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100f3314: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100f3315: push esi */
    g->esi = g->ecx;   /* 0x100f3316: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100f3318: register ecx, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x100f331c: the value the entry loaded and the decompiler dropped */
    g->ecx = g->esi;   /* 0x100f331f: the value the entry loaded and the decompiler dropped */
    cow_lift_100f3310(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
