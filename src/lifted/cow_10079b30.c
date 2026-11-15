/* f_0x10079b30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10079b30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10079b30(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    uint64_t uVar6;
    if (rd32(COW_IMG(COW_ADDR_LIFT_1047D490)) == 2) {
        iVar3 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
        uVar4 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) >> 7 & 1;
        iVar5 = iVar3;
        if ((uVar4 != 0) && ((iVar3 == 2 || (iVar3 == 3)))) {
          iVar5 = 1;
        }
        if ((uVar4 != 0) && ((iVar3 == 2 || (iVar3 == 3)))) {
          iVar3 = 1;
        }
      }
      else {
        if (rd32(COW_IMG(COW_ADDR_LIFT_1047D490)) != 3) {
          g->eax = (CowU32)(-param_5); return;
        }
        puVar1 = rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 8));
        if (rd8((uint32_t)(puVar1 + 1u * (uint32_t)(1))) == '\0') {
          iVar5 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
          if (((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) < '\0') && ((iVar5 == 2 || (iVar5 == 3)))) {
            iVar5 = 1;
          }
          iVar3 = cow_bridge_10079c10(g, COW_IMG(COW_ADDR_LIFT_10079B7C), 1u, (const CowU32[]){ (((uint32_t)(((CowU32)rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)puVar1)) & 0xffu)) }, g->ecx, g->edx, g->eax, 4u);
        }
        else {
          uVar6 = cow_bridge_10079c10(g, COW_IMG(COW_ADDR_LIFT_10079B89), 1u, (const CowU32[]){ (((uint32_t)(((CowU32)param_2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)puVar1)) & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
          iVar5 = (int)uVar6;
          iVar3 = cow_bridge_10079c10(g, COW_IMG(COW_ADDR_LIFT_10079B9C), 1u, (const CowU32[]){ (((uint32_t)(((uint64_t)uVar6 >> 0x28)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 8)) + 1))) & 0xffu)) }, g->ecx, g->edx, g->eax, 8u);
        }
      }
      cVar2 = cow_bridge_100ec2a0(g, COW_IMG(COW_ADDR_LIFT_10079BF3), 5u, (const CowU32[]){ iVar5, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_103551E0)) + 4)), iVar3, COW_IMG(COW_ADDR_LIFT_10079D40), 0 }, g->ecx, g->edx, g->eax, 20u);
      if (cVar2 == '\0') {
        param_5 = -param_5;
      }
      g->eax = (CowU32)(param_5); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10079b30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1047D490));   /* 0x10079b30: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10079b35: push esi */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x2u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10079b36: register eax, replayed as the entry ran it */
    cow_lift_10079b30(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
