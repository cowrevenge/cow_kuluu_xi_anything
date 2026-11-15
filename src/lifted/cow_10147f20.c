/* f_0x10147f20 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10147f20 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10147f20(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 puVar5;
    int iVar6;
    iVar2 = cow_bridge_100f0fa0(g, COW_IMG(COW_ADDR_LIFT_10147F33), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
      if (iVar2 != 0) {
        puVar5 = (CowU32)(param_1 + 0x20);
        iVar6 = 0;
        wr32((uint32_t)(param_1 + 0x80), rd32((uint32_t)(iVar2 + 8)) & 0xfffffffe);
        do {
          uVar3 = cow_bridge_100f0fb0(g, COW_IMG(COW_ADDR_LIFT_10147F53), 1u, (const CowU32[]){ iVar6 }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)puVar5, uVar3 & 0xff);
          iVar6 = iVar6 + 1;
          puVar5 = puVar5 + 4u * (uint32_t)(1);
        } while (iVar6 < 0x18);
        cVar1 = cow_bridge_10146310(g, COW_IMG(COW_ADDR_LIFT_10147F6B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          wr32((uint32_t)(param_1 + 0x20 + (rd32(COW_IMG(COW_ADDR_LIFT_10485640)) & 0xff) * 4), rd32(COW_IMG(COW_ADDR_LIFT_10485640)) >> 8 & 0xff);
        }
      }
      iVar6 = 0;
      if ((int8_t)rd8((uint32_t)(param_1 + 0x18)) == '\0') {
        cVar1 = cow_bridge_10146310(g, COW_IMG(COW_ADDR_LIFT_10147F95), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 == '\0') {
          if (iVar2 != 0) {
            wr8((uint32_t)(param_1 + 0x15), rd8((uint32_t)(iVar2 + 4)));
            wr8((uint32_t)(param_1 + 0x16), rd8((uint32_t)(iVar2 + 7)));
          }
        }
        else {
          wr8((uint32_t)(param_1 + 0x15), rd32(COW_IMG(COW_ADDR_LIFT_10485640)));
          wr8((uint32_t)(param_1 + 0x16), rd32(COW_IMG(COW_ADDR_LIFT_10485642)));
        }
      }
      if ((int8_t)rd8((uint32_t)(param_1 + 0x14)) == '\0') {
        iVar2 = 1;
        do {
          if ((iVar2 != 0x17) && ((rd32((uint32_t)(param_1 + 0x80)) & 1 << ((CowU8)iVar2 & 0x1f)) != 0)) {
            iVar6 = iVar6 + 1;
          }
          iVar2 = iVar2 + 1;
        } while (iVar2 < 0x18);
        iVar4 = (iVar6 + 1) / 2;
        iVar6 = iVar4 * 0xe + 0x16;
        cow_bridge_1011a5a0(g, COW_IMG(COW_ADDR_LIFT_10148024), 7u, (const CowU32[]){ (((uint32_t)((short)((CowU32)iVar2 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)(param_1 + 0x84))) & 0xffffu)), (((uint32_t)((short)((CowU32)iVar6 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)(param_1 + 0x86))) & 0xffffu)), (((uint32_t)((short)((CowU32)(iVar4 * 7) >> 0x10)) & 0xffffu) << 16 | ((uint32_t)((int16_t)rd16((uint32_t)(param_1 + 0x88)) - (int16_t)rd16((uint32_t)(param_1 + 0x84))) & 0xffffu)), iVar6, 0, 0, 0 }, rd32((uint32_t)(param_1 + 8)), g->edx, g->eax, 0u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 8 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10147f20(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 0x8u;                      /* 0x10147f20: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10147f23: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10147f24: push esi */
    g->ebx = 0u;   /* 0x10147f25: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10147f27: push edi */
    g->esi = g->ecx;   /* 0x10147f28: the value the entry loaded and the decompiler dropped */
    cow_lift_10147f20(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
