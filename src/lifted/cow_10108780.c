/* f_0x10108780 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10108780 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10108780(Guest* g, int32_t param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    if (rd16((uint32_t)(param_2 + 8)) == 0) {
        iVar2 = 0;
      }
      else {
        iVar2 = (CowU32)rd16((uint32_t)(param_2 + 8)) + param_1;
      }
      if (((rd16((uint32_t)(param_2 + 10)) == 0) ||
          (iVar1 = (CowU32)rd16((uint32_t)(param_2 + 10)) + param_1, iVar1 == 0)) ||
         (rd16((uint32_t)(param_2 + 6)) <= rd16((uint32_t)(iVar1 + 6)))) {
        if ((iVar2 != 0) && (rd16((uint32_t)(param_2 + 6)) < rd16((uint32_t)(iVar2 + 6)))) {
          do {
            if ((rd16((uint32_t)(iVar2 + 8)) == 0) || ((CowU32)rd16((uint32_t)(iVar2 + 8)) + param_1 == 0)) {
              wr32((uint32_t)(param_1 + 0x10), param_2);
            }
            cow_bridge_10108d80(g, COW_IMG(COW_ADDR_LIFT_101087C6), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_10108f40(g, COW_IMG(COW_ADDR_LIFT_10108825), 2u, (const CowU32[]){ param_2, iVar2 }, g->ecx, g->edx, g->eax, 0u);
          } while (((rd16((uint32_t)(param_2 + 8)) != 0) &&
                   (iVar2 = (CowU32)rd16((uint32_t)(param_2 + 8)) + param_1, iVar2 != 0)) &&
                  (rd16((uint32_t)(param_2 + 6)) < rd16((uint32_t)(iVar2 + 6))));
        }
      }
      else {
        do {
          cow_bridge_10108d80(g, COW_IMG(COW_ADDR_LIFT_1010881C), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10108e80(g, COW_IMG(COW_ADDR_LIFT_101087CF), 2u, (const CowU32[]){ param_2, iVar1 }, g->ecx, g->edx, g->eax, 0u);
          if ((rd16((uint32_t)(param_2 + 10)) == 0) ||
             (iVar1 = (CowU32)rd16((uint32_t)(param_2 + 10)) + param_1, iVar1 == 0)) break;
        } while (rd16((uint32_t)(iVar1 + 6)) < rd16((uint32_t)(param_2 + 6)));
      }
      if ((rd16((uint32_t)(param_2 + 10)) == 0) || ((CowU32)rd16((uint32_t)(param_2 + 10)) + param_1 == 0)) {
        wr16((uint32_t)(param_1 + 8), rd16((uint32_t)(param_2 + 6)));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10108780(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10108780: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10108781: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10108782: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10108783: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10108784: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x10108788: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->edi + 0x8u); g->ebp = (g->ebp & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1010878a: register ebp, replayed as the entry ran it */
    cow_lift_10108780(g, param_1, param_2);

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
