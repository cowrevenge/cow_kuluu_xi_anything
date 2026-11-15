/* f_0x101380e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101380e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101380e0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    short sVar2;
    short sVar3;
    int iVar4;
    _Bool bVar5;
      
      bVar5 = 1;
      if ((int32_t)rd32((uint32_t)(param_1 + 0x20)) < (int)(int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578158)) + 0x1a)) - (int32_t)rd32((uint32_t)(param_1 + 0x58))) {
        wr32((uint32_t)(param_1 + 0x20), (int32_t)rd32((uint32_t)(param_1 + 0x20)) + 1);
      }
      else if (((int32_t)rd32((uint32_t)(param_1 + 0x54)) == 0) || ((int32_t)rd32((uint32_t)(param_1 + 0x54)) == 8)) {
        sVar2 = cow_bridge_10129c60(g, COW_IMG(COW_ADDR_LIFT_10138118), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cVar1 = cow_bridge_1012a650(g, COW_IMG(COW_ADDR_LIFT_1013812C), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 0x54)), 0 }, g->ecx, g->edx, g->eax, 0u);
        bVar5 = cVar1 != '\0';
        if (bVar5) {
          wr32((uint32_t)(param_1 + 0x20), (int32_t)rd32((uint32_t)(param_1 + 0x20)) + 1);
        }
        sVar3 = cow_bridge_10129c60(g, COW_IMG(COW_ADDR_LIFT_10138142), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x20), (int32_t)rd32((uint32_t)(param_1 + 0x20)) + ((int)sVar3 - (int)sVar2));
      }
      else {
        bVar5 = 0;
      }
      iVar4 = (int32_t)rd32((uint32_t)(param_1 + 0x20));
      if (iVar4 < 0) {
        iVar4 = iVar4 + 100;
      }
      else {
        if (iVar4 < 100) goto L_10138166;
        iVar4 = iVar4 + -100;
      }
      wr32((uint32_t)(param_1 + 0x20), iVar4);
    L_10138166:
      if (bVar5) {
        wr8((uint32_t)(param_1 + 0x24), 0);
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)(((CowU32)iVar4 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(bVar5) & 0xffu))) & 0xffu)); return;
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
void cow_adapter_101380e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101380e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101380e1: push esi */
    g->esi = g->ecx;   /* 0x101380e2: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10578158));   /* 0x101380e4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101380ea: push edi */
    { g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x101380eb: register ebx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x1Au); g->edx = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x101380ed: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x58u); g->edi = (uint32_t)(rd32(A)); }   /* 0x101380f1: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x20u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101380f4: register eax, replayed as the entry ran it */
    { uint32_t a = g->edx; uint32_t b = (uint32_t)g->edi; uint32_t r = (uint32_t)(a - b); g->edx = (uint32_t)(r); }   /* 0x101380f7: register edx, replayed as the entry ran it */
    cow_lift_101380e0(g, param_1);

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
