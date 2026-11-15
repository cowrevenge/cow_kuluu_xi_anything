/* f_0x1014fd40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014fd40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014fd40(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU16 extraout_var;
    CowU16 uVar3;
    int iVar4;
    CowU16 uVar5;
    CowU32 local_4;
    iVar2 = cow_bridge_101cc510(g, COW_IMG(COW_ADDR_LIFT_1014FD4A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (iVar2 != 0) {
        cVar1 = cow_bridge_1015ed10(g, COW_IMG(COW_ADDR_LIFT_1014FD6B), 3u, (const CowU32[]){ 0x80, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578474)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          uVar3 = 0;
          if ((int32_t)rd32((uint32_t)(iVar2 + 0xa0)) != 0) {
            iVar4 = (int32_t)rd32((uint32_t)(iVar2 + 0x78));
            local_4 = (((uint32_t)(((CowU32)param_1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(iVar2 + 0xec))) & 0xffu));
            if ((int32_t)rd32((uint32_t)((int)param_1 + 0x34)) != iVar4) {
              wr8((uint32_t)((int)param_1 + 0x30), rd8((uint32_t)(iVar2 + 0xec)));
              iVar4 = (int32_t)rd32((uint32_t)(iVar2 + 0x78));
              wr32((uint32_t)((int)param_1 + 0x34), iVar4);
            }
            cow_bridge_101cb090(g, COW_IMG(COW_ADDR_LIFT_1014FDCA), 4u, (const CowU32[]){ (((uint32_t)((short)((CowU32)((int)param_1 + 0x30) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x14)) + 0x1c) & 0xffffu)), (((uint32_t)((short)((CowU32)iVar4 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x16)) + 0x1d) & 0xffffu)), local_4, (int)param_1 + 0x30 }, g->ecx, g->edx, g->eax, 16u);
            uVar3 = extraout_var;
          }
          iVar4 = iVar2 + 0x214;
          if ((int16_t)rd16((uint32_t)(iVar2 + 0x210)) == 0) {
            iVar4 = iVar2 + 0x7c;
          }
          uVar5 = (CowU16)((CowU32)iVar4 >> 0x10);
          cow_bridge_101c9fa0(g, COW_IMG(COW_ADDR_LIFT_1014FE0D), 7u, (const CowU32[]){ (((uint32_t)(uVar5) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x18)) - (int16_t)rd16((uint32_t)((int)param_1 + 0x14))) & 0xffffu)) +
                       -0xd, (((uint32_t)(uVar3) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x14))) & 0xffffu)) + 5, (((uint32_t)(uVar5) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x16)) + 6) & 0xffffu)), iVar4, rd32(COW_IMG(COW_ADDR_LIFT_104E1B9C)), 1, 0 }, g->ecx, g->edx, g->eax, 28u);
          return;
        }
      }
      cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1014FD7F), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ecx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1014fd40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1014fd40: push ecx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014fd41: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014fd42: push edi */
    g->esi = g->ecx;   /* 0x1014fd43: the value the entry loaded and the decompiler dropped */
    cow_lift_1014fd40(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
