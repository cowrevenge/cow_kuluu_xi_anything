/* f_0x102a2e50 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a2e50 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a2e50(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iStack_8;
    int iStack_4;
    iVar1 = param_1;
      if (rd32(COW_IMG(COW_ADDR_LIFT_103BD524)) != -1) {
        cow_bridge_10281a90(g, COW_IMG(COW_ADDR_LIFT_102A2E69), 1u, (const CowU32[]){ g->eax }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103BD524)), 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_103BD524), -1);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_103BD52C)) != -1) {
        cow_bridge_10281a90(g, COW_IMG(COW_ADDR_LIFT_102A2E81), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_103BD52C)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103BD524)), 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_103BD52C), -1);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_103BD528)) != -1) {
        cow_bridge_10281a90(g, COW_IMG(COW_ADDR_LIFT_102A2E99), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_103BD528)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103BD524)), 4u);
        wr32(COW_IMG(COW_ADDR_LIFT_103BD528), -1);
      }
      iVar3 = 0;
      iStack_4 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44))))) {
        do {
          iVar4 = (int32_t)rd32((uint32_t)(iVar1 + 0x48));
          param_1 = 0;
          if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iVar3 + 4 + iVar4))))) {
            iStack_8 = 0;
            do {
              iVar4 = (int32_t)rd32((uint32_t)(iVar3 + 0x28 + iVar4));
              iVar2 = 0;
              if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iStack_8 + 0x44 + iVar4))))) {
                iVar5 = iStack_8 + 0x68;
                do {
                  if ((int32_t)rd32((uint32_t)(iVar5 + iVar4)) != -1) {
                    cow_bridge_10281a90(g, COW_IMG(COW_ADDR_LIFT_102A2EE7), 1u, (const CowU32[]){ (int32_t)rd32((uint32_t)(iVar5 + iVar4)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103BD524)), 0u);
                    wr32((uint32_t)(iVar5 + (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x48)) + 0x28 + iVar3))), 0xffffffff);
                  }
                  iVar2 = iVar2 + 1;
                  iVar5 = iVar5 + 4;
                  iVar4 = (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x48)) + 0x28 + iVar3));
                } while (((int32_t)(iVar2) < (int32_t)((int32_t)rd32((uint32_t)(iStack_8 + 0x44 + iVar4)))));
              }
              iVar4 = (int32_t)rd32((uint32_t)(iVar1 + 0x48));
              param_1 = param_1 + 1;
              iStack_8 = iStack_8 + 0x90;
            } while (((int32_t)(param_1) < (int32_t)((int32_t)rd32((uint32_t)(iVar3 + 4 + iVar4)))));
          }
          iStack_4 = iStack_4 + 1;
          iVar3 = iVar3 + 0x2c;
        } while (((int32_t)(iStack_4) < (int32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x44)))));
      }
      iVar3 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x34))))) {
        iVar4 = 0;
        do {
          iVar5 = (int32_t)rd32((uint32_t)(iVar1 + 0x40)) + iVar4;
          iVar2 = (int32_t)rd32((uint32_t)(iVar5 + 0xc));
          if (iVar2 != -1) {
            iVar5 = (int32_t)rd32((uint32_t)(iVar5 + 0x28));
            if (iVar5 == 1) {
              cow_bridge_10281b00(g, COW_IMG(COW_ADDR_LIFT_102A2F6A), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103BD524)), 0u);
            }
            else if (iVar5 == 0) {
              cow_bridge_10281a90(g, COW_IMG(COW_ADDR_LIFT_102A2F76), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_103BD524)), 4u);
            }
            wr32((uint32_t)(iVar4 + 0xc + (int32_t)rd32((uint32_t)(iVar1 + 0x40))), 0xffffffff);
          }
          iVar3 = iVar3 + 1;
          iVar4 = iVar4 + 0x30;
        } while (((int32_t)(iVar3) < (int32_t)((int32_t)rd32((uint32_t)(iVar1 + 0x34)))));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a2e50(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_103BD524));   /* 0x102a2e50: the value the entry loaded and the decompiler dropped */
    g->esp -= 0x8u;                      /* 0x102a2e55: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a2e58: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102a2e59: push ebp */
    { uint32_t a = g->ebp; uint32_t b = (uint32_t)0xFFFFFFFFu; uint32_t r = (uint32_t)(a | b); g->ebp = (uint32_t)(r); }   /* 0x102a2e5a: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a2e5d: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* push edi (from the epilogue's pops) */
    cow_lift_102a2e50(g, param_1);

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
