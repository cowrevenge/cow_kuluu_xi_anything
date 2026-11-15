/* f_0x1018ee40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018ee40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018ee40(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    cow_bridge_10126320(g, COW_IMG(COW_ADDR_LIFT_1018EE4C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10333360));
      wr16((uint32_t)((int)param_1 + 0xe), 0xffff);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr8((uint32_t)((int)param_1 + 0xc), 1);
      cow_bridge_101b4710(g, COW_IMG(COW_ADDR_LIFT_1018EE69), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x18), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x14), param_2);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_103368F0));
      wr32((uint32_t)((int)param_1 + 0x2208), 0xf);
      wr32((uint32_t)((int)param_1 + 0x220c), 0x114);
      wr32((uint32_t)((int)param_1 + 0x2214), 0);
      wr32((uint32_t)((int)param_1 + 0x221c), param_3);
      wr16((uint32_t)((int)param_1 + 0x2220), 0x46);
      wr32((uint32_t)((int)param_1 + 0x21fc), 0);
      wr8((uint32_t)((int)param_1 + 0x2200), 0);
      wr8((uint32_t)((int)param_1 + 0x2201), 0);
      wr16((uint32_t)((int)param_1 + 0x2202), 0);
      wr32((uint32_t)((int)param_1 + 0x2204), 0);
      wr32((uint32_t)((int)param_1 + 0x2210), 0);
      wr32((uint32_t)((int)param_1 + 0x2218), 0);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018ee40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1018ee40: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018ee41: push esi */
    g->esi = g->ecx;   /* 0x1018ee42: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x1018ee44: register ecx, replayed as the entry ran it */
    cow_lift_1018ee40(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
