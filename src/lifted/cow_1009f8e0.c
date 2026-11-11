/* f_0x1009f8e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009f8e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009f8e0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    short sVar3;
    CowU32 psVar4;
    CowU32 uVar5;
    uVar2 = 0;
      uVar5 = 0;
      psVar4 = (CowU32)(param_1 + 0x20);
      do {
        uVar1 = rd16((uint32_t)(psVar4 + 2u * (uint32_t)(-8)));
        sVar3 = rd16((uint32_t)psVar4);
        if ((uVar1 == 0) || (sVar3 == 0)) break;
        if (sVar3 != 0) {
          do {
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1048890C) + 4u * (uint32_t)(uVar2)), (CowU32)uVar1);
            wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1048892C) + 4u * (uint32_t)(uVar2)), 1);
            uVar2 = uVar2 + 1;
            if (7 < uVar2) {
              return;
            }
            sVar3 = sVar3 + -1;
          } while (sVar3 != 0);
        }
        if (7 < uVar2) {
          return;
        }
        uVar5 = uVar5 + 1;
        psVar4 = psVar4 + 1;
      } while (uVar5 < 8);
      for (; uVar2 < 8; uVar2 = uVar2 + 1) {
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1048890C) + 4u * (uint32_t)(uVar2)), 0);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1048892C) + 4u * (uint32_t)(uVar2)), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009f8e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = param_2;   /* 0x1009f8e0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1009f8e4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1009f8e5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1009f8e6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1009f8e7: push edi */
    g->ebx = 0u;   /* 0x1009f8e8: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x1009f8ea: the value the entry loaded and the decompiler dropped */
    g->edi = 0u;   /* 0x1009f8ec: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->ecx + 0x20u)); }   /* 0x1009f8ee: register esi, replayed as the entry ran it */
    cow_lift_1009f8e0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
