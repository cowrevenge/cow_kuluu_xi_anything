/* f_0x10275530 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10275530 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10275530(Guest* g)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    CowU8 local_80[128];
    iVar1 = rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8));
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275554), 1u, (const CowU32[]){ 272312696u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
      uVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF4C) + 4u * (uint32_t)(iVar1 * 0x18)));
      iVar4 = 0;
      if (uVar3 < (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF50) + 4u * (uint32_t)(iVar1 * 0x18)))) {
        do {
          iVar2 = cow_bridge_10275310(g, COW_IMG(COW_ADDR_LIFT_1027556C), 1u, (const CowU32[]){ uVar3 + 0x10 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 4u);
          if ((iVar2 == 2) || (iVar2 == 3)) {
            cow_bridge_102756c0(g, COW_IMG(COW_ADDR_LIFT_10275586), 3u, (const CowU32[]){ g->ecx, local_80, 0 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
            cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_10275595), 2u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_10361DC0), local_80 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 20u);
            iVar4 = iVar4 + 1;
          }
          uVar3 = cow_bridge_10275340(g, COW_IMG(COW_ADDR_LIFT_1027559F), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 0u);
        } while (uVar3 < (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099CF50) + 4u * (uint32_t)(iVar1 * 0x18))));
        if (iVar4 != 0) goto L_102755bc;
      }
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102755B9), 1u, (const CowU32[]){ 272312668u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 4u);
    L_102755bc:
      cow_bridge_102858b0(g, COW_IMG(COW_ADDR_LIFT_102755C6), 1u, (const CowU32[]){ 272312656u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8)), 4u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 0 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 128 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10275530(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */

    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099D1F8));   /* 0x10275530: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x80u;                      /* 0x10275535: 128 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1027553b: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1027553c: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1027553d: push edi */
    { g->edi = (uint32_t)((uint32_t)(g->eax + g->eax * 2)); }   /* 0x1027553e: register edi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x5u) & 31u; if (c) { uint32_t a = g->edi; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->edi = (uint32_t)(r); } }; }   /* 0x10275541: register edi, replayed as the entry ran it */
    cow_lift_10275530(g);

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
