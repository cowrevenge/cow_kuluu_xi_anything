/* f_0x1009e700 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009e700 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009e700(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    param_1 = param_1 & 0xffff;
      if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) != 0) {
        param_2 = param_2 & 0xffff;
        if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_2))) == 0) {
          g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10359B30) + 4u * (uint32_t)(param_3)))); return;
        }
        if (param_2 == (int)rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))) {
          g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10358730) + 4u * (uint32_t)(param_3)))); return;
        }
        if (param_1 == (int)rd32(COW_IMG(COW_ADDR_LIFT_10485F7A))) {
          g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10358330) + 4u * (uint32_t)(param_3)))); return;
        }
        iVar1 = cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_1009E781), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_1009E78A), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
        while (iVar2 != 0) {
          if (((int32_t)rd32((uint32_t)(iVar1 + 0x78)) != (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0x78))) &&
             ((int32_t)rd32((uint32_t)(iVar2 + 0x14)) == (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0x78)))) {
            g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10358B30) + 4u * (uint32_t)(param_3)))); return;
          }
          iVar2 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_1009E7B3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar2 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_1009E7BE), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 4u);
        while (iVar2 != 0) {
          if (((int32_t)rd32((uint32_t)(iVar1 + 0x78)) != (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_2))) + 0x78))) &&
             ((int32_t)rd32((uint32_t)(iVar2 + 0x14)) == (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_2))) + 0x78)))) {
            g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10358F30) + 4u * (uint32_t)(param_3)))); return;
          }
          iVar2 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_1009E7E7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar2 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_1009E81A), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 4u);
        while (iVar2 != 0) {
          if (((int32_t)rd32((uint32_t)(iVar1 + 0x78)) != (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0x78))) &&
             ((int32_t)rd32((uint32_t)(iVar2 + 0x14)) == (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_1))) + 0x78)))) {
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10359330) + 4u * (uint32_t)(param_3)))) & 0xffu)); return;
          }
          iVar2 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_1009E843), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        iVar2 = cow_bridge_100e8b80(g, COW_IMG(COW_ADDR_LIFT_1009E84E), 1u, (const CowU32[]){ 5u }, g->ecx, g->edx, g->eax, 4u);
        if (iVar2 != 0) {
          while (((int32_t)rd32((uint32_t)(iVar1 + 0x78)) == (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_2))) + 0x78)) ||
                 ((int32_t)rd32((uint32_t)(iVar2 + 0x14)) != (int32_t)rd32((uint32_t)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(param_2))) + 0x78))))) {
            iVar2 = cow_bridge_100e8c70(g, COW_IMG(COW_ADDR_LIFT_1009E877), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (iVar2 == 0) {
              g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10359B30) + 4u * (uint32_t)(param_3)))); return;
            }
          }
          g->eax = (CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10359730) + 4u * (uint32_t)(param_3)))); return;
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10359B30) + 4u * (uint32_t)(param_3)))) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009e700(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x8u;                      /* 0x1009e700: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1009e703: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1009e704: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1009e705: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->edi = (uint32_t)(rd32(A)); }   /* 0x1009e706: register edi, replayed as the entry ran it */
    { uint32_t a = g->edi; uint32_t b = (uint32_t)0xFFFFu; uint32_t r = (uint32_t)(a & b); g->edi = (uint32_t)(r); }   /* 0x1009e70a: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi * 4 + COW_IMG(COW_ADDR_LIFT_10480AF0) + RD); g->eax = (uint32_t)(rd32(A)); }   /* 0x1009e710: register eax, replayed as the entry ran it */
    cow_lift_1009e700(g, param_1, param_2, param_3);

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
