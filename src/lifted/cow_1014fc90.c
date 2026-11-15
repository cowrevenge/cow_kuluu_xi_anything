/* f_0x1014fc90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1014fc90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1014fc90(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU16 extraout_var;
    CowU16 uVar2;
    int iVar3;
    CowU16 uVar4;
    CowU32 local_4;
    iVar1 = cow_bridge_101cc510(g, COW_IMG(COW_ADDR_LIFT_1014FC9A), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      if (iVar1 != 0) {
        uVar2 = 0;
        if ((int32_t)rd32((uint32_t)(iVar1 + 0xa0)) != 0) {
          iVar3 = (int32_t)rd32((uint32_t)(iVar1 + 0x78));
          local_4 = (((uint32_t)(((CowU32)param_1 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(iVar1 + 0xec))) & 0xffu));
          if ((int32_t)rd32((uint32_t)((int)param_1 + 0x34)) != iVar3) {
            wr8((uint32_t)((int)param_1 + 0x30), rd8((uint32_t)(iVar1 + 0xec)));
            iVar3 = (int32_t)rd32((uint32_t)(iVar1 + 0x78));
            wr32((uint32_t)((int)param_1 + 0x34), iVar3);
          }
          cow_bridge_101cb090(g, COW_IMG(COW_ADDR_LIFT_1014FCEB), 4u, (const CowU32[]){ (((uint32_t)((short)((CowU32)((int)param_1 + 0x30) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x14)) + 0x1c) & 0xffffu)), (((uint32_t)((short)((CowU32)iVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x16)) + 0x11) & 0xffffu)), local_4, (int)param_1 + 0x30 }, g->ecx, g->edx, g->eax, 16u);
          uVar2 = extraout_var;
        }
        iVar3 = iVar1 + 0x214;
        if ((int16_t)rd16((uint32_t)(iVar1 + 0x210)) == 0) {
          iVar3 = iVar1 + 0x7c;
        }
        uVar4 = (CowU16)((CowU32)iVar3 >> 0x10);
        cow_bridge_101c9d50(g, COW_IMG(COW_ADDR_LIFT_1014FD2A), 5u, (const CowU32[]){ (((uint32_t)(uVar4) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x18)) - (int16_t)rd16((uint32_t)((int)param_1 + 0x14))) & 0xffffu)) + -0xd, (((uint32_t)(uVar2) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x14))) & 0xffffu)) + 5, (((uint32_t)(uVar4) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)((int)param_1 + 0x16)) + 3) & 0xffffu)), iVar3, rd32(COW_IMG(COW_ADDR_LIFT_104E1B9C)) }, g->ecx, g->edx, g->eax, 20u);
      }
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
void cow_adapter_1014fc90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x1014fc90: push ecx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1014fc91: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1014fc92: push edi */
    g->edi = g->ecx;   /* 0x1014fc93: the value the entry loaded and the decompiler dropped */
    cow_lift_1014fc90(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
