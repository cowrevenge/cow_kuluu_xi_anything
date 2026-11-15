/* f_0x10187050 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10187050 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10187050(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */

    wr32((uint32_t)((int)param_1 + 4), 0);
      wr32((uint32_t)((int)param_1 + 0x20), 0);
      wr32((uint32_t)((int)param_1 + 0x10), 0);
      wr32((uint32_t)((int)param_1 + 0x14), 0);
      wr32((uint32_t)((int)param_1 + 8), 0);
      wr32((uint32_t)((int)param_1 + 0x18), 0);
      wr8((uint32_t)((int)param_1 + 0xc), 0);
      cow_bridge_10188910(g, COW_IMG(COW_ADDR_LIFT_10187070), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x124), rd32(COW_IMG(COW_ADDR_LIFT_10377894)));
      wr32((uint32_t)((int)param_1 + 0x128), rd32(COW_IMG(COW_ADDR_LIFT_10377898)));
      wr32((uint32_t)((int)param_1 + 300), rd32(COW_IMG(COW_ADDR_LIFT_1037789C)));
      wr32((uint32_t)((int)param_1 + 0x130), rd32(COW_IMG(COW_ADDR_LIFT_103778A0)));
      wr32((uint32_t)((int)param_1 + 0x134), 0);
      wr32((uint32_t)((int)param_1 + 0x138), 4);
      wr32((uint32_t)((int)param_1 + 0x13c), 10);
      wr32((uint32_t)((int)param_1 + 0x140), 0);
      wr32((uint32_t)((int)param_1 + 0x144), 0);
      wr32((uint32_t)((int)param_1 + 0x24), rd32(COW_IMG(COW_ADDR_LIFT_103778A4)));
      wr32((uint32_t)((int)param_1 + 0x28), rd32(COW_IMG(COW_ADDR_LIFT_103778A8)));
      wr32((uint32_t)((int)param_1 + 0x2c), rd32(COW_IMG(COW_ADDR_LIFT_103778AC)));
      wr32((uint32_t)((int)param_1 + 0x30), rd32(COW_IMG(COW_ADDR_LIFT_103778B0)));
      wr32((uint32_t)((int)param_1 + 0x34), rd32(COW_IMG(COW_ADDR_LIFT_103778B4)));
      wr32((uint32_t)((int)param_1 + 0x38), rd32(COW_IMG(COW_ADDR_LIFT_103778B8)));
      wr32((uint32_t)((int)param_1 + 0x3c), rd32(COW_IMG(COW_ADDR_LIFT_103778BC)));
      wr32((uint32_t)((int)param_1 + 0x40), rd32(COW_IMG(COW_ADDR_LIFT_103778C0)));
      wr32((uint32_t)((int)param_1 + 0x44), rd32(COW_IMG(COW_ADDR_LIFT_103778C4)));
      wr32((uint32_t)((int)param_1 + 0x48), rd32(COW_IMG(COW_ADDR_LIFT_103778C8)));
      wr32((uint32_t)((int)param_1 + 0x4c), rd32(COW_IMG(COW_ADDR_LIFT_103778CC)));
      wr32((uint32_t)((int)param_1 + 0x50), rd32(COW_IMG(COW_ADDR_LIFT_103778D0)));
      wr32((uint32_t)((int)param_1 + 0x54), rd32(COW_IMG(COW_ADDR_LIFT_103778D4)));
      wr32((uint32_t)((int)param_1 + 0x58), rd32(COW_IMG(COW_ADDR_LIFT_103778D8)));
      wr32((uint32_t)((int)param_1 + 0x5c), rd32(COW_IMG(COW_ADDR_LIFT_103778DC)));
      wr32((uint32_t)((int)param_1 + 0x60), rd32(COW_IMG(COW_ADDR_LIFT_103778E0)));
      wr32((uint32_t)((int)param_1 + 100), rd32(COW_IMG(COW_ADDR_LIFT_103778E4)));
      wr32((uint32_t)((int)param_1 + 0x68), rd32(COW_IMG(COW_ADDR_LIFT_103778E8)));
      wr32((uint32_t)((int)param_1 + 0x6c), rd32(COW_IMG(COW_ADDR_LIFT_103778EC)));
      wr32((uint32_t)((int)param_1 + 0x70), rd32(COW_IMG(COW_ADDR_LIFT_103778F0)));
      wr32((uint32_t)((int)param_1 + 0x74), rd32(COW_IMG(COW_ADDR_LIFT_103778F4)));
      wr32((uint32_t)((int)param_1 + 0x78), rd32(COW_IMG(COW_ADDR_LIFT_103778F8)));
      wr32((uint32_t)((int)param_1 + 0x7c), rd32(COW_IMG(COW_ADDR_LIFT_103778FC)));
      wr32((uint32_t)((int)param_1 + 0x80), rd32(COW_IMG(COW_ADDR_LIFT_10377900)));
      wr32((uint32_t)((int)param_1 + 0x84), rd32(COW_IMG(COW_ADDR_LIFT_10377904)));
      wr32((uint32_t)((int)param_1 + 0x88), rd32(COW_IMG(COW_ADDR_LIFT_10377908)));
      wr32((uint32_t)((int)param_1 + 0x8c), rd32(COW_IMG(COW_ADDR_LIFT_1037790C)));
      wr32((uint32_t)((int)param_1 + 0x90), rd32(COW_IMG(COW_ADDR_LIFT_10377910)));
      wr32((uint32_t)((int)param_1 + 0x94), rd32(COW_IMG(COW_ADDR_LIFT_10377914)));
      wr32((uint32_t)((int)param_1 + 0x98), rd32(COW_IMG(COW_ADDR_LIFT_10377918)));
      wr32((uint32_t)((int)param_1 + 0x9c), rd32(COW_IMG(COW_ADDR_LIFT_1037791C)));
      wr32((uint32_t)((int)param_1 + 0xa0), rd32(COW_IMG(COW_ADDR_LIFT_10377920)));
      wr32((uint32_t)((int)param_1 + 0xa4), rd32(COW_IMG(COW_ADDR_LIFT_10377924)));
      wr32((uint32_t)((int)param_1 + 0xa8), rd32(COW_IMG(COW_ADDR_LIFT_10377928)));
      wr32((uint32_t)((int)param_1 + 0xac), rd32(COW_IMG(COW_ADDR_LIFT_1037792C)));
      wr32((uint32_t)((int)param_1 + 0xb0), rd32(COW_IMG(COW_ADDR_LIFT_10377930)));
      wr32((uint32_t)((int)param_1 + 0xb4), rd32(COW_IMG(COW_ADDR_LIFT_10377934)));
      wr32((uint32_t)((int)param_1 + 0xb8), rd32(COW_IMG(COW_ADDR_LIFT_10377938)));
      wr32((uint32_t)((int)param_1 + 0xbc), rd32(COW_IMG(COW_ADDR_LIFT_1037793C)));
      wr32((uint32_t)((int)param_1 + 0xc0), rd32(COW_IMG(COW_ADDR_LIFT_10377940)));
      wr32((uint32_t)((int)param_1 + 0xc4), rd32(COW_IMG(COW_ADDR_LIFT_10377944)));
      wr32((uint32_t)((int)param_1 + 200), rd32(COW_IMG(COW_ADDR_LIFT_10377948)));
      wr32((uint32_t)((int)param_1 + 0xcc), rd32(COW_IMG(COW_ADDR_LIFT_1037794C)));
      wr32((uint32_t)((int)param_1 + 0xd0), rd32(COW_IMG(COW_ADDR_LIFT_10377950)));
      wr32((uint32_t)((int)param_1 + 0xd4), rd32(COW_IMG(COW_ADDR_LIFT_10377954)));
      wr32((uint32_t)((int)param_1 + 0xd8), rd32(COW_IMG(COW_ADDR_LIFT_10377958)));
      wr32((uint32_t)((int)param_1 + 0xdc), rd32(COW_IMG(COW_ADDR_LIFT_1037795C)));
      wr32((uint32_t)((int)param_1 + 0xe0), rd32(COW_IMG(COW_ADDR_LIFT_10377960)));
      wr32((uint32_t)((int)param_1 + 0xe4), rd32(COW_IMG(COW_ADDR_LIFT_10377964)));
      wr32((uint32_t)((int)param_1 + 0xe8), rd32(COW_IMG(COW_ADDR_LIFT_10377968)));
      wr32((uint32_t)((int)param_1 + 0xec), rd32(COW_IMG(COW_ADDR_LIFT_1037796C)));
      wr32((uint32_t)((int)param_1 + 0xf0), rd32(COW_IMG(COW_ADDR_LIFT_10377970)));
      wr32((uint32_t)((int)param_1 + 0xf4), rd32(COW_IMG(COW_ADDR_LIFT_10377974)));
      wr32((uint32_t)((int)param_1 + 0xf8), rd32(COW_IMG(COW_ADDR_LIFT_10377978)));
      wr32((uint32_t)((int)param_1 + 0xfc), rd32(COW_IMG(COW_ADDR_LIFT_1037797C)));
      wr32((uint32_t)((int)param_1 + 0x100), rd32(COW_IMG(COW_ADDR_LIFT_10377980)));
      wr32((uint32_t)((int)param_1 + 0x104), rd32(COW_IMG(COW_ADDR_LIFT_10377984)));
      wr32((uint32_t)((int)param_1 + 0x108), rd32(COW_IMG(COW_ADDR_LIFT_10377988)));
      wr32((uint32_t)((int)param_1 + 0x10c), rd32(COW_IMG(COW_ADDR_LIFT_1037798C)));
      wr32((uint32_t)((int)param_1 + 0x110), rd32(COW_IMG(COW_ADDR_LIFT_10377990)));
      wr32((uint32_t)((int)param_1 + 0x114), rd32(COW_IMG(COW_ADDR_LIFT_10377994)));
      wr32((uint32_t)((int)param_1 + 0x118), rd32(COW_IMG(COW_ADDR_LIFT_10377998)));
      wr32((uint32_t)((int)param_1 + 0x11c), rd32(COW_IMG(COW_ADDR_LIFT_1037799C)));
      wr32((uint32_t)((int)param_1 + 0x120), rd32(COW_IMG(COW_ADDR_LIFT_103779A0)));
      wr8((uint32_t)((int)param_1 + 0x148), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10187050(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10187050: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10187051: push esi */
    g->esi = g->ecx;   /* 0x10187052: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x10187054: the value the entry loaded and the decompiler dropped */
    cow_lift_10187050(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
