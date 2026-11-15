/* f_0x1001b890 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1001b890 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1001b890(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10, CowU32 param_11, CowU32 param_12)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    wr32((uint32_t)((int)param_1 + 0x14c8), param_10);
      wr8((uint32_t)((int)param_1 + 0x14a4), 0);
      wr32((uint32_t)((int)param_1 + 0x14a0), 0);
      wr32((uint32_t)((int)param_1 + 0x14a8), 0);
      wr32((uint32_t)((int)param_1 + 0x14ac), 0);
      wr32((uint32_t)((int)param_1 + 0x14b0), 0);
      wr32((uint32_t)((int)param_1 + 0x14b4), 0);
      wr32((uint32_t)((int)param_1 + 0x14c4), 0);
      wr32((uint32_t)((int)param_1 + 0x14c0), param_2);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_1001B8E5), 2u, (const CowU32[]){ (int)param_1 + 0x14cc, param_4 }, g->ecx, g->edx, param_10, 0u);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_1001B8F6), 2u, (const CowU32[]){ (int)param_1 + 0x14dc, param_5 }, g->ecx, (g->esi + 5340u), param_10, 0u);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_1001B907), 2u, (const CowU32[]){ (int)param_1 + 0x14ec, param_6 }, (g->esi + 5356u), g->edx, param_10, 0u);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_1001B918), 2u, (const CowU32[]){ (int)param_1 + 0x14fc, param_7 }, g->ecx, g->edx, param_10, 0u);
      wr32((uint32_t)((int)param_1 + 0x150c), param_8);
      wr32((uint32_t)((int)param_1 + 0x1510), param_9);
      wr32((uint32_t)((int)param_1 + 0x1518), 0);
      wr32((uint32_t)((int)param_1 + 0x1514), 0);
      wr32((uint32_t)((int)param_1 + 0x151c), param_11);
      cow_bridge_10026e90(g, COW_IMG(COW_ADDR_LIFT_1001B953), 2u, (const CowU32[]){ (int)param_1 + 0x1520, param_12 }, g->ecx, (g->esi + 5408u), param_10, 0u);
      wr32((uint32_t)((int)param_1 + 0x14b8), 0);
      wr32((uint32_t)((int)param_1 + 0x14bc), param_3);
      piVar1 = rd32((uint32_t)((int)param_1 + 0x14c0));
      if ((piVar1 != (CowU32)0x0) && (rd32((uint32_t)piVar1) != 0)) {
        cow_bridge_10071e90(g, COW_IMG(COW_ADDR_LIFT_1001B97D), 0u, (const CowU32[]){ 0u }, (CowU32)rd32((uint32_t)piVar1), g->edx, param_10, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 12 parameter(s), cleanup 44 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, esi], frame pointer no, 0 locals, pops [esi, ebx], ret 44.
   Arguments: 1 register argument(s) [ecx], 11 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1001b890(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    CowU32 param_11 = rd32((uint32_t)(sp0 + 4u + 0x24u));
    CowU32 param_12 = rd32((uint32_t)(sp0 + 4u + 0x28u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_10;   /* 0x1001b890: the value the entry loaded and the decompiler dropped */
    g->edx = param_4;   /* 0x1001b894: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1001b898: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1001b899: push esi */
    g->esi = g->ecx;   /* 0x1001b89a: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1001b89c: register ecx, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x1001b8a0: the value the entry loaded and the decompiler dropped */
    cow_lift_1001b890(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11, param_12);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 44u);
}
/* COW_ADAPTER END */
