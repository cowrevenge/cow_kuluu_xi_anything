/* f_0x100e08d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e08d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e08d0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 psVar1;
    CowU8 bVar2;
    CowU32 pbVar3;
    int iVar4;
    int iVar5;
    CowU32 pbVar6;
    CowU8 local_20[16];
    CowU8 local_10[16];
    _Bool bVar7;
      
      if (((int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a0)) != -1) &&
         (iVar5 = (int)(int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a0)),
         (int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a8 + iVar5 * 0x1c)) != -1)) {
        while (iVar5 != -1) {
          psVar1 = (CowU32)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x1a6a4 + iVar5 * 0x1c);
          cow_bridge_100e09a0(g, COW_IMG(COW_ADDR_LIFT_100E0931), 2u, (const CowU32[]){ local_10, param_1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 0u);
          cow_bridge_100e09a0(g, COW_IMG(COW_ADDR_LIFT_100E093F), 2u, (const CowU32[]){ local_20, psVar1 + 2u * (uint32_t)(6) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)), 16u);
          pbVar6 = local_20;
          pbVar3 = local_10;
          do {
            bVar2 = rd8((uint32_t)pbVar3);
            bVar7 = bVar2 < rd8((uint32_t)pbVar6);
            if (bVar2 != rd8((uint32_t)pbVar6)) {
    L_100e096e:
              iVar4 = (1 - (CowU32)bVar7) - (CowU32)(bVar7 != 0);
              goto L_100e0973;
            }
            if (bVar2 == 0) break;
            bVar2 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)));
            bVar7 = bVar2 < rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
            if (bVar2 != rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)))) goto L_100e096e;
            pbVar3 = pbVar3 + 2;
            pbVar6 = pbVar6 + 2;
          } while (bVar2 != 0);
          iVar4 = 0;
    L_100e0973:
          if (iVar4 == 0) {
            g->eax = (CowU32)(iVar5); return;
          }
          iVar5 = (int)rd16((uint32_t)psVar1);
        }
      }
      g->eax = (CowU32)(-1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 32 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e08d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x100e08d0: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x20u;                      /* 0x100e08d5: 32 bytes of locals */
    { uint32_t A = (uint32_t)(g->eax + 0x1A6A0u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100e08d8: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100e08df: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100e08e0: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100e08e1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_100e08d0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
