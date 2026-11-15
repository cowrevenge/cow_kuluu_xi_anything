/* f_0x10109600 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10109600 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10109600(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    int iVar3;
    int iVar4;
    CowU32 pbVar5;
    _Bool bVar6;
      
      iVar3 = (int32_t)rd32((uint32_t)((int)param_1 + 4));
      if (iVar3 == 0) {
        if (param_2 == (CowU32)0x0) {
          g->eax = (CowU32)(1); return;
        }
      }
      else if ((int32_t)rd32((uint32_t)(iVar3 + 4)) == 0) {
        if (param_2 == (CowU32)0x0) {
          g->eax = (CowU32)(0); return;
        }
        if (rd8((uint32_t)param_2) == 0) {
          g->eax = (CowU32)(0); return;
        }
        g->eax = (CowU32)(-1); return;
      }
      if (param_2 == (CowU32)0x0) {
        g->eax = (CowU32)(1); return;
      }
      if (iVar3 == 0) {
        pbVar5 = (CowU32)0x0;
      }
      else {
        pbVar5 = rd8((uint32_t)(iVar3 + 4));
      }
      bVar1 = rd8((uint32_t)pbVar5);
      for (; (bVar1 != 0 && (bVar2 = rd8((uint32_t)param_2), bVar2 != 0)); param_2 = param_2 + 1) {
        if (((char)bVar1 < '\0') && ((char)bVar2 < '\0')) {
          if (bVar1 != bVar2) {
            bVar6 = rd8((uint32_t)param_2) < rd8((uint32_t)pbVar5);
            goto L_101096bf;
          }
          if ((rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1))) != 0) && (rd8((uint32_t)(param_2 + 1u * (uint32_t)(1))) != 0)) {
            pbVar5 = pbVar5 + 1;
            param_2 = param_2 + 1;
          }
        }
        else {
          iVar3 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_1010968D), 1u, (const CowU32[]){ (CowU32)bVar1 }, g->ecx, g->edx, g->eax, 0u);
          iVar4 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_10109699), 1u, (const CowU32[]){ (CowU32)rd8((uint32_t)param_2) }, g->ecx, g->edx, g->eax, 8u);
          if (iVar3 != iVar4) {
            iVar3 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_101096D5), 1u, (const CowU32[]){ (CowU32)rd8((uint32_t)pbVar5) }, g->ecx, g->edx, g->eax, 0u);
            iVar4 = cow_bridge_103145e4(g, COW_IMG(COW_ADDR_LIFT_101096E1), 1u, (const CowU32[]){ (CowU32)rd8((uint32_t)param_2) }, g->ecx, g->edx, g->eax, 8u);
            g->eax = (CowU32)((CowU32)(iVar4 < iVar3) * 2 + -1); return;
          }
        }
        bVar1 = rd8((uint32_t)(pbVar5 + 1u * (uint32_t)(1)));
        pbVar5 = pbVar5 + 1;
      }
      bVar6 = rd8((uint32_t)param_2) < rd8((uint32_t)pbVar5);
      if (rd8((uint32_t)param_2) == rd8((uint32_t)pbVar5)) {
        g->eax = (CowU32)(0); return;
      }
    L_101096bf:
      g->eax = (CowU32)((-(CowU32)bVar6 & 2) - 1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10109600(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10109600: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10109603: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10109604: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x10109605: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_10109600(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
