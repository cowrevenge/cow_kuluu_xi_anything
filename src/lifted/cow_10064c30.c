/* f_0x10064c30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10064c30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10064c30(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    CowU32 pcVar2;
    int iVar3;
    CowU32 pcVar4;
    CowU8 local_100[256];
    _Bool bVar5;
      
      cow_bridge_1006b4e0(g, COW_IMG(COW_ADDR_LIFT_10064C45), 0u, (const CowU32[]){ 0u }, local_100, g->edx, g->eax, 0u);
      cow_bridge_1006b520(g, COW_IMG(COW_ADDR_LIFT_10064C56), 1u, (const CowU32[]){ param_1 }, local_100, g->edx, g->eax, 0u);
      pcVar2 = (CowU32)cow_bridge_1006b5f0(g, COW_IMG(COW_ADDR_LIFT_10064C66), 1u, (const CowU32[]){ 0u }, local_100, g->edx, g->eax, 0u);
      iVar3 = 2;
      bVar5 = 1;
      pcVar4 = COW_IMG(COW_ADDR_LIFT_10353B6C);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        bVar5 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar4);
        pcVar2 = pcVar2 + 1;
        pcVar4 = pcVar4 + 1;
      } while (bVar5);
      if (bVar5) {
        uVar1 = cow_bridge_10064cd0(g, COW_IMG(COW_ADDR_LIFT_10064C7B), 1u, (const CowU32[]){ param_1 }, g->ebx, g->edx, 0u, 0u);
        cow_bridge_1006b4f0(g, COW_IMG(COW_ADDR_LIFT_10064C86), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(uVar1) & 0xffu)); return;
      }
      cow_bridge_1006b4f0(g, COW_IMG(COW_ADDR_LIFT_10064C9E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 256 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10064c30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x100u;                      /* 0x10064c30: 256 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10064c36: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10064c37: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10064c38: push esi */
    g->ebx = g->ecx;   /* 0x10064c39: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10064c3b: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0x10u)); }   /* 0x10064c3c: register ecx, replayed as the entry ran it */
    cow_lift_10064c30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
