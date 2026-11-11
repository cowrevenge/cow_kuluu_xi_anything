/* f_0x101316a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101316a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101316a0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    CowU16 uVar2;
    int iVar3;
    int iVar4;
    wr16((uint32_t)(param_1 + 0x20), 0);
      if (((param_2 != 0) && (param_3 != 0)) &&
         (rd16((uint32_t)(param_3 + 0x14d4)) != (CowU32)0x0)) {
        wr16((uint32_t)(param_1 + 0x20), rd16((uint32_t)rd32((uint32_t)((param_3 + 0x14d4)))));
        uVar2 = 0;
        do {
          if ((rd8((uint32_t)(uVar2 + 0x22 + param_1)) == rd8((uint32_t)(param_2 + 2))) &&
             (rd32((uint32_t)(param_1 + 0x34 + (CowU32)uVar2 * 4)) == param_4)) {
            wr16((uint32_t)(param_1 + 0x20), (short)(1 << ((CowU8)uVar2 & 0x1f)));
            break;
          }
          uVar2 = uVar2 + 1;
        } while (uVar2 < 0x10);
        uVar2 = rd16((uint32_t)(param_1 + 0x20));
        if (uVar2 != 0) {
          iVar4 = 0;
          iVar3 = (int)rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x58));
          if (-1 < iVar3) {
            while ((sVar1 = cow_bridge_10131680(g, COW_IMG(COW_ADDR_LIFT_1013172F), 1u, (const CowU32[]){ rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1036F744) + 4u * (uint32_t)(iVar4))) }, g->ecx, g->edx, g->eax, 0u), sVar1 < 0 ||
                   (((CowU32)uVar2 & 1 << ((CowU8)sVar1 & 0x1f)) == 0))) {
              iVar4 = iVar4 + 1;
              if (iVar3 < iVar4) {
                return;
              }
            }
            cow_bridge_10131810(g, COW_IMG(COW_ADDR_LIFT_10131766), 2u, (const CowU32[]){ rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1036F744) + 4u * (uint32_t)(iVar4))), 0 }, g->ecx, g->edx, g->eax, 0u);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101316a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->edx = param_2;   /* 0x101316a0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101316a4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101316a5: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101316a6: push esi */
    g->esi = g->ecx;   /* 0x101316a7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101316a9: push edi */
    cow_lift_101316a0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
