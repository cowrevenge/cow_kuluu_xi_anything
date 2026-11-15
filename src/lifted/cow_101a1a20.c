/* f_0x101a1a20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a1a20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a1a20(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    CowU32 this_00;
    iVar2 = 0x14;
      this_00 = (CowU32)((int)param_1 + 4);
      do {
        cow_bridge_101a16e0(g, COW_IMG(COW_ADDR_LIFT_101A1A34), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        this_00 = (CowU32)((int)this_00 + 0x17c);
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      cow_bridge_101a16e0(g, COW_IMG(COW_ADDR_LIFT_101A1A48), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x2048), g->edx, g->eax, 0u);
      cow_bridge_101a16e0(g, COW_IMG(COW_ADDR_LIFT_101A1A53), 0u, (const CowU32[]){ 0u }, (CowU32)((int)param_1 + 0x21d0), g->edx, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_103372F4));
      wr32((uint32_t)((int)param_1 + 0x1db4), 0);
      wr32((uint32_t)((int)param_1 + 0x1db8), 0);
      wr32((uint32_t)((int)param_1 + 0x1dbc), 0);
      wr32((uint32_t)((int)param_1 + 0x1dc0), 0);
      wr8((uint32_t)((int)param_1 + 0x1dc4), 0);
      wr8((uint32_t)((int)param_1 + 0x1dc5), 0);
      wr8((uint32_t)((int)param_1 + 0x235c), 0);
      wr8((uint32_t)((int)param_1 + 0x235d), 0);
      wr8((uint32_t)((int)param_1 + 0x235e), 0);
      wr8((uint32_t)((int)param_1 + 0x235f), 0);
      iVar2 = 0x28;
      puVar1 = (CowU32)((int)param_1 + 0x1dc6);
      do {
        wr8((uint32_t)puVar1, 0);
        puVar1 = puVar1 + 0x10;
        iVar2 = iVar2 + -1;
      } while (iVar2 != 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_10662DB0)) != 0) {
        cow_bridge_101b9f20(g, COW_IMG(COW_ADDR_LIFT_101A1AD0), 8u, (const CowU32[]){ 1, 0, COW_IMG(COW_ADDR_LIFT_1037AA40), (CowU32)((int)param_1 + 0x1dbc), 4, COW_IMG(COW_ADDR_LIFT_101A23D0), param_1, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101b9f20(g, COW_IMG(COW_ADDR_LIFT_101A1AF1), 8u, (const CowU32[]){ 1, 0, COW_IMG(COW_ADDR_LIFT_1037AA38), (CowU32)((int)param_1 + 0x1dc6), 0x140, COW_IMG(COW_ADDR_LIFT_101A2410), param_1, 1 }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_101b9f20(g, COW_IMG(COW_ADDR_LIFT_101A1B18), 8u, (const CowU32[]){ 1, 0, COW_IMG(COW_ADDR_LIFT_1037AA2C), (int)param_1 + 0x1f06, 0x140, COW_IMG(COW_ADDR_LIFT_101A2440), param_1, 1 }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)((int)param_1 + 0x21c4), 0xffffffff);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a1a20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101a1a20: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a1a21: push esi */
    g->esi = g->ecx;   /* 0x101a1a22: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101a1a24: push edi */
    g->ebx = 20u;   /* 0x101a1a25: the value the entry loaded and the decompiler dropped */
    cow_lift_101a1a20(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
