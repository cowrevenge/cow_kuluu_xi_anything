/* f_0x102a8bb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102a8bb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102a8bb0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    int iVar3;
    iVar2 = rd32((uint32_t)(param_2 + 0x28));
      sVar1 = rd16((uint32_t)(param_1 + 10));
      if (sVar1 == 1) {
        iVar3 = 0;
        if (rd16((uint32_t)(param_1 + 8)) != 0) {
          do {
            cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8BEB), 5u, (const CowU32[]){ param_1, (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 + iVar2, iVar3, 0, 1 }, g->ecx, g->edx, g->eax, 0u);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(CowU32)rd16((uint32_t)(param_1 + 8)));
          return;
        }
      }
      else if (sVar1 == 3) {
        iVar3 = 0;
        if (rd16((uint32_t)(param_1 + 8)) != 0) {
          do {
            cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8C29), 5u, (const CowU32[]){ param_1, iVar2 + (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 3, iVar3, 0, 3 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8C45), 5u, (const CowU32[]){ param_1, (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 3 + 1 + iVar2, iVar3, 1, 3 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8C61), 5u, (const CowU32[]){ param_1, (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 3 + 2 + iVar2, iVar3, 2, 3 }, g->ecx, g->edx, g->eax, 0u);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(CowU32)rd16((uint32_t)(param_1 + 8)));
          return;
        }
      }
      else if (sVar1 == 2) {
        iVar3 = 0;
        if (rd16((uint32_t)(param_1 + 8)) != 0) {
          do {
            cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8C9D), 5u, (const CowU32[]){ param_1, iVar2 + (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 2, iVar3, 0, 2 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8CB6), 5u, (const CowU32[]){ param_1, iVar2 + 1 + (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 2, iVar3, 1, 2 }, g->ecx, g->edx, g->eax, 0u);
            iVar3 = iVar3 + 1;
          } while (iVar3 < (int)(CowU32)rd16((uint32_t)(param_1 + 8)));
          return;
        }
      }
      else if ((sVar1 == 4) && (iVar3 = 0, rd16((uint32_t)(param_1 + 8)) != 0)) {
        do {
          cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8CEE), 5u, (const CowU32[]){ param_1, iVar2 + (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 4, iVar3, 0, 4 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8D07), 5u, (const CowU32[]){ param_1, iVar2 + 1 + (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 4, iVar3, 1, 4 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8D20), 5u, (const CowU32[]){ param_1, iVar2 + 2 + (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 4, iVar3, 2, 4 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_102a8d50(g, COW_IMG(COW_ADDR_LIFT_102A8D39), 5u, (const CowU32[]){ param_1, iVar2 + 3 + (CowU32)rd16((uint32_t)(param_1 + 6)) * iVar3 * 4, iVar3, 3, 4 }, g->ecx, g->edx, g->eax, 0u);
          iVar3 = iVar3 + 1;
        } while (iVar3 < (int)(CowU32)rd16((uint32_t)(param_1 + 8)));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102a8bb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->eax = param_2;   /* 0x102a8bb0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102a8bb4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102a8bb5: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0xCu); g->esi = (uint32_t)(rd32(A)); }   /* 0x102a8bb6: register esi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x28u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102a8bba: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102a8bbd: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0xAu); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x102a8bbe: register eax, replayed as the entry ran it */
    cow_lift_102a8bb0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
