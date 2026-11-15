/* f_0x10221680 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10221680 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10221680(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 pcVar4;
    CowU32 pcVar5;
    if ((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_105781FC)) + 0x18)) != '\0') {
        iVar2 = -1;
        pcVar4 = (CowU32)(param_1 + 0x2d5);
        do {
          if (iVar2 == 0) break;
          iVar2 = iVar2 + -1;
          cVar1 = rd8((uint32_t)pcVar4);
          pcVar4 = pcVar4 + 1;
        } while (cVar1 != '\0');
        if (iVar2 != -2) {
          iVar2 = 3;
    L_102216ab:
          wr32((uint32_t)(param_1 + 0x70), iVar2);
          iVar2 = param_1 + iVar2 * 0xcb + 0x74;
          wr32((uint32_t)(param_1 + 0x48), iVar2);
          iVar2 = cow_bridge_1011d010(g, COW_IMG(COW_ADDR_LIFT_102216C7), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_105781FC)), 0u);
          wr32((uint32_t)(param_1 + 0x50), iVar2);
          wr32((uint32_t)(param_1 + 0x4c), 0);
          if (((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x60))) < (int32_t)(iVar2))) {
            wr32((uint32_t)(param_1 + 0x54), 0x3c);
            wr8((uint32_t)(param_1 + 0x3a0), 1);
            return;
          }
          wr8((uint32_t)(param_1 + 0x3a0), 0);
          return;
        }
      }
      iVar2 = 2;
      pcVar4 = (CowU32)(param_1 + 0x20a);
      do {
        iVar3 = -1;
        pcVar5 = pcVar4;
        do {
          if (iVar3 == 0) break;
          iVar3 = iVar3 + -1;
          cVar1 = rd8((uint32_t)pcVar5);
          pcVar5 = pcVar5 + 1;
        } while (cVar1 != '\0');
        if (iVar3 != -2) {
          if (iVar2 < 0) {
            wr32((uint32_t)(param_1 + 0x48), 0);
            wr8((uint32_t)(param_1 + 0x3a0), 0);
            return;
          }
          goto L_102216ab;
        }
        iVar2 = iVar2 + -1;
        pcVar4 = pcVar4 + -0xcb;
        if (iVar2 < 0) {
          wr32((uint32_t)(param_1 + 0x48), 0);
          wr8((uint32_t)(param_1 + 0x3a0), 0);
          return;
        }
      } while( 1 );
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10221680(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_105781FC));   /* 0x10221680: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10221685: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10221686: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10221687: push esi */
    g->esi = g->ecx;   /* 0x10221688: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax + 0x18u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1022168a: register ecx, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x1022168d: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1022168f: push edi */
    cow_lift_10221680(g, param_1);

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
