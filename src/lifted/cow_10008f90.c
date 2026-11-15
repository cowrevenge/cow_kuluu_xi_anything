/* f_0x10008f90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10008f90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10008f90(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 this_00;
    wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_103299F0));
      cow_bridge_1000d040(g, COW_IMG(COW_ADDR_LIFT_10008FA6), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 400), g->edx, g->eax, 0u);
      this_00 = (CowU32)((int)param_1 + 0x1ac);
      iVar1 = 3;
      do {
        cow_bridge_1000cfb0(g, COW_IMG(COW_ADDR_LIFT_10008FB8), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        this_00 = (CowU32)((int)this_00 + 0x10);
        iVar1 = iVar1 + -1;
      } while (iVar1 != 0);
      cow_bridge_1000cfb0(g, COW_IMG(COW_ADDR_LIFT_10008FC9), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x1dc), g->edx, g->eax, 0u);
      cow_bridge_10017030(g, COW_IMG(COW_ADDR_LIFT_10008FD4), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 500), g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 8), param_2);
      wr32((uint32_t)((int)param_1 + 0xc), param_3);
      wr8((uint32_t)((int)param_1 + 0x158), 0);
      wr8((uint32_t)((int)param_1 + 0x908), 0);
      wr8((uint32_t)((int)param_1 + 0x909), 0);
      wr8((uint32_t)((int)param_1 + 0x90a), 0);
      wr16((uint32_t)((int)param_1 + 0x90c), 0);
      wr16((uint32_t)((int)param_1 + 0x90e), 0);
      wr8((uint32_t)((int)param_1 + 0x910), 0);
      wr8((uint32_t)((int)param_1 + 0x911), 0);
      wr8((uint32_t)((int)param_1 + 0x912), 0);
      wr8((uint32_t)((int)param_1 + 0x913), 0);
      wr8((uint32_t)((int)param_1 + 0x914), 0);
      wr8((uint32_t)((int)param_1 + 0x915), 0);
      wr8((uint32_t)((int)param_1 + 0x916), 0);
      wr32((uint32_t)((int)param_1 + 0x918), 0);
      wr32((uint32_t)((int)param_1 + 0x91c), 0);
      wr8((uint32_t)((int)param_1 + 0x920), 0);
      wr8((uint32_t)((int)param_1 + 0x921), 0);
      wr8((uint32_t)((int)param_1 + 0x92c), 0);
      wr8((uint32_t)((int)param_1 + 0x92d), 0);
      wr8((uint32_t)((int)param_1 + 0x92e), 0);
      wr8((uint32_t)((int)param_1 + 0x92f), 0);
      wr8((uint32_t)((int)param_1 + 0x930), 0);
      wr8((uint32_t)((int)param_1 + 0x931), 0);
      wr32((uint32_t)((int)param_1 + 0x934), 0);
      wr32((uint32_t)((int)param_1 + 0x938), 0);
      wr32((uint32_t)((int)param_1 + 0x1ec), 0);
      wr32((uint32_t)((int)param_1 + 0x1f0), 0);
      wr32((uint32_t)((int)param_1 + 0x810), 0);
      wr32((uint32_t)((int)param_1 + 0x814), 0);
      wr32((uint32_t)((int)param_1 + 0x818), 0);
      wr32((uint32_t)((int)param_1 + 0x81c), 0);
      wr32((uint32_t)((int)param_1 + 0x820), 0);
      wr32((uint32_t)((int)param_1 + 0x824), 0);
      wr8((uint32_t)((int)param_1 + 0x828), 0);
      wr32((uint32_t)((int)param_1 + 0x82c), 0);
      wr32((uint32_t)((int)param_1 + 0x9fc), 0);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_103299D4));
      wr32((uint32_t)((int)param_1 + 0x174), 0x43000000);
      wr32((uint32_t)((int)param_1 + 0x178), 0x43000000);
      wr32((uint32_t)((int)param_1 + 0x17c), 0x43000000);
      wr32((uint32_t)((int)param_1 + 0x180), 0x43000000);
      wr32((uint32_t)((int)param_1 + 0x184), 0x43000000);
      wr32((uint32_t)((int)param_1 + 0x188), 0x43000000);
      wr32((uint32_t)((int)param_1 + 0x18c), 0x80808080);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10008f90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10008f90: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10008f91: push esi */
    g->esi = g->ecx;   /* 0x10008f92: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10008f94: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esi + 0x190u)); }   /* 0x10008f95: register ecx, replayed as the entry ran it */
    cow_lift_10008f90(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ecx = (CowU32)(1124073472u);   /* the entry left ecx here on its way to the ret */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
