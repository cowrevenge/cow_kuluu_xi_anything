/* f_0x102305e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102305e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102305e0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 puVar2;
    CowU16 uVar3;
    int iVar4;
    int iVar5;
    CowU32 uVar6;
    CowU32 puVar7;
    if ((((rd8((uint32_t)((int)param_1 + 0x1b)) != 0) && ((int32_t)rd32((uint32_t)((int)param_1 + 4)) != 0)) &&
          (uVar1 = rd16((uint32_t)((int)param_1 + (CowU32)rd8((uint32_t)((int)param_1 + 0x1b)) * 2 + 10)), uVar1 != 0)) &&
         ((iVar4 = cow_bridge_1015b9e0(g, COW_IMG(COW_ADDR_LIFT_10230620), 1u, (const CowU32[]){ (CowU32)uVar1 }, rd32(COW_IMG(COW_ADDR_LIFT_10621808)), g->edx, g->eax, 0u), iVar4 != 0 &&
          (puVar2 = rd16((uint32_t)(iVar4 + 0x1578)), puVar2 != (CowU32)0x0)))) {
        if (rd16((uint32_t)puVar2) < 2) {
          wr16((uint32_t)((int)param_1 + 8), 0);
          wr16((uint32_t)((int)param_1 + 10), 0);
          return;
        }
        iVar5 = 0;
        uVar6 = (CowU32)rd16((uint32_t)puVar2);
        iVar4 = 0;
        if (uVar6 != 0) {
          puVar7 = puVar2 + 2u * (uint32_t)(2);
          do {
            iVar4 = iVar5;
            if (rd16((uint32_t)puVar7) == rd16((uint32_t)((int)param_1 + (CowU32)rd8((uint32_t)((int)param_1 + 0x1b)) * 2 + 0xc))) break;
            iVar5 = iVar5 + 1;
            puVar7 = puVar7 + 2u * (uint32_t)(10);
            iVar4 = 0;
          } while (iVar5 < (int)uVar6);
        }
        if ((int)uVar6 <= iVar4) {
          wr16((uint32_t)((int)param_1 + 8), 0);
          wr16((uint32_t)((int)param_1 + 10), 0);
          return;
        }
        uVar3 = cow_bridge_10230510(g, COW_IMG(COW_ADDR_LIFT_10230689), 2u, (const CowU32[]){ puVar2, iVar4 }, g->ecx, g->edx, g->eax, 0u);
        wr16((uint32_t)((int)param_1 + 8), uVar3);
        uVar3 = cow_bridge_10230580(g, COW_IMG(COW_ADDR_LIFT_10230694), 2u, (const CowU32[]){ puVar2, iVar4 }, g->ecx, g->edx, g->eax, 16u);
        wr16((uint32_t)((int)param_1 + 10), uVar3);
      }
      return;
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
void cow_adapter_102305e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102305e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102305e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102305e2: push esi */
    g->esi = g->ecx;   /* 0x102305e3: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x102305e5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102305e7: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x1Bu); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102305e8: register eax, replayed as the entry ran it */
    cow_lift_102305e0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
