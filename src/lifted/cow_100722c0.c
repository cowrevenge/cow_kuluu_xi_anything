/* f_0x100722c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100722c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100722c0(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, int32_t param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 uVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    uVar2 = rd32((uint32_t)(param_1 + 0x24)) & 0x7f;
      iVar3 = param_1;
      iVar5 = param_1;
      if (uVar2 != 1) {
        iVar3 = cow_bridge_10072270(g, COW_IMG(COW_ADDR_LIFT_100722E1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar5 = iVar3;
      }
      while (iVar3 != 0) {
        if (rd32((uint32_t)(iVar5 + 0x3c)) == (CowU32)0x0) {
          iVar4 = 0;
        }
        else {
          iVar4 = rd32((uint32_t)rd32((uint32_t)((iVar5 + 0x3c))));
        }
        if (iVar3 == iVar4) {
          if (rd32((uint32_t)(iVar5 + 0x28)) == (CowU32)0x0) {
            iVar3 = 0;
          }
          else {
            iVar3 = rd32((uint32_t)rd32((uint32_t)((iVar5 + 0x28))));
          }
          if (iVar3 == iVar5) break;
          iVar5 = iVar3;
        }
        else {
          if ((((CowU8)rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) == 1) && ((int32_t)rd32((uint32_t)(iVar3 + 0x38)) == param_5)
             ) {
            if (rd32((uint32_t)(iVar3 + 0x3c)) == (CowU32)0x0) {
              iVar3 = 0;
            }
            else {
              iVar3 = rd32((uint32_t)rd32((uint32_t)((iVar3 + 0x3c))));
            }
          }
          if (param_3 == 0) {
            if ((int32_t)rd32((uint32_t)(iVar3 + 0x20)) == param_4) {
    L_10072343:
              wr32((uint32_t)param_2, rd32((uint32_t)(iVar3 + 0x14)));
              g->eax = (CowU32)(param_2); return;
            }
          }
          else if ((rd32((uint32_t)(iVar3 + 0x24)) & 0x7f) == param_3) {
            if (param_4 == 0) goto L_10072343;
            if ((int32_t)rd32((uint32_t)(iVar3 + 0x20)) == param_4) {
              wr32((uint32_t)param_2, rd32((uint32_t)(iVar3 + 0x14)));
              g->eax = (CowU32)(param_2); return;
            }
          }
        }
        if (rd32((uint32_t)(iVar3 + 8)) == (CowU32)0x0) {
          iVar3 = 0;
        }
        else {
          iVar3 = rd32((uint32_t)rd32((uint32_t)((iVar3 + 8))));
        }
      }
      if (uVar2 == 1) {
        iVar3 = param_1;
      }
      else {
        iVar3 = cow_bridge_10072270(g, COW_IMG(COW_ADDR_LIFT_1007239F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      piVar1 = rd32((uint32_t)(iVar3 + 0x28));
      wr32((uint32_t)(iVar3 + 0x38), param_5);
      if (piVar1 == (CowU32)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = rd32((uint32_t)piVar1);
      }
      if (iVar3 == iVar5) {
        if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1047D128)) + 0x40008)) == (int32_t)rd32((uint32_t)(param_1 + 0x14))) {
          wr32((uint32_t)param_2, 0);
          g->eax = (CowU32)(param_2); return;
        }
        cow_bridge_100722c0(g, COW_IMG(COW_ADDR_LIFT_100723C6), 4u, (const CowU32[]){ param_2, param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_2); return;
      }
      if (piVar1 == (CowU32)0x0) {
        cow_bridge_100722c0(g, COW_IMG(COW_ADDR_LIFT_100723DF), 4u, (const CowU32[]){ param_2, param_3, param_4, param_5 }, 0u, g->edx, g->eax, 0u);
        g->eax = (CowU32)(param_2); return;
      }
      cow_bridge_100722c0(g, COW_IMG(COW_ADDR_LIFT_1007240A), 4u, (const CowU32[]){ param_2, param_3, param_4, param_5 }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 5 push(es) [ecx, ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx, ecx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100722c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100722c0: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100722c1: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x100722c2: push ebp */
    g->ebp = g->ecx;   /* 0x100722c3: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100722c5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100722c6: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x24u); g->eax = (uint32_t)(rd32(A)); }   /* 0x100722c7: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x7Fu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x100722ca: register eax, replayed as the entry ran it */
    cow_lift_100722c0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */
