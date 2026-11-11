/* f_0x10135c40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10135c40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10135c40(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    if (rd32((uint32_t)(param_1 + 0x1c)) == 2) {
        cow_bridge_10131840(g, COW_IMG(COW_ADDR_LIFT_10135C58), 1u, (const CowU32[]){ param_2 }, param_1, g->edx, g->eax, 0u);
        return;
      }
      if (rd32((uint32_t)(param_1 + 0x1c)) != 1) {
        return;
      }
      if (rd16((uint32_t)(param_1 + 0x20)) == 0) {
        cow_bridge_10131840(g, COW_IMG(COW_ADDR_LIFT_10135C7D), 1u, (const CowU32[]){ param_2 }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      iVar2 = 0;
      iVar3 = (int)rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x58));
      if (-1 < iVar3) {
        do {
          if ((CowU16)(CowU8)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1036F744) + 4u * (uint32_t)(iVar2))) == rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x4c))) break;
          iVar2 = iVar2 + 1;
        } while (iVar2 <= iVar3);
      }
      if ((short)param_2 == 4) {
        iVar4 = iVar2 + -1 + iVar3;
        if (iVar4 <= iVar2) {
          return;
        }
        while ((sVar1 = cow_bridge_10131680(g, COW_IMG(COW_ADDR_LIFT_10135CD4), 1u, (const CowU32[]){ (((uint32_t)((short)((CowU32)(iVar4 / iVar3) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((CowU16)(CowU8)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1036F744) + 4u * (uint32_t)(iVar4 % iVar3)))) & 0xffffu)) }, g->ecx, g->edx, g->eax, 0u), sVar1 < 0
               || (((CowU32)rd16((uint32_t)(param_1 + 0x20)) & 1 << ((CowU8)sVar1 & 0x1f)) == 0))) {
          iVar4 = iVar4 + -1;
          if (iVar4 <= iVar2) {
            return;
          }
        }
      }
      else {
        if ((short)param_2 != 3) {
          return;
        }
        iVar4 = iVar2 + 1;
        if (iVar2 + iVar3 <= iVar4) {
          return;
        }
        while ((sVar1 = cow_bridge_10131680(g, COW_IMG(COW_ADDR_LIFT_10135D1F), 1u, (const CowU32[]){ rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1036F744) + 4u * (uint32_t)(iVar4 % iVar3))) }, g->ecx, g->edx, g->eax, 0u), sVar1 < 0 ||
               (((CowU32)rd16((uint32_t)(param_1 + 0x20)) & 1 << ((CowU8)sVar1 & 0x1f)) == 0))) {
          iVar4 = iVar4 + 1;
          if (iVar2 + iVar3 <= iVar4) {
            return;
          }
        }
      }
      cow_bridge_10131810(g, COW_IMG(COW_ADDR_LIFT_10135D5D), 2u, (const CowU32[]){ (((uint32_t)((short)((CowU32)(iVar4 / iVar3) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((CowU16)(CowU8)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1036F744) + 4u * (uint32_t)(iVar4 % iVar3)))) & 0xffffu)), 1 }, g->ecx, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10135c40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10135c40: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10135c41: push ebp */
    g->ebp = g->ecx;   /* 0x10135c42: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10135c44: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10135c45: push edi */
    { uint32_t A = (uint32_t)(g->ebp + 0x1Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x10135c46: register eax, replayed as the entry ran it */
    cow_lift_10135c40(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
