/* f_0x101583f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101583f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101583f0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    CowU32 this_00;
    int iVar3;
    CowU32 uVar4;
    CowU32 this_01;
    char extraout_DL;
    this_00 = (CowU32)cow_bridge_101cc4f0(g, COW_IMG(COW_ADDR_LIFT_101583FC), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
      if (this_00 == (CowU32)0x0) {
        return;
      }
      bVar1 = cow_bridge_101578d0(g, COW_IMG(COW_ADDR_LIFT_10158409), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      bVar2 = cow_bridge_101578e0(g, COW_IMG(COW_ADDR_LIFT_10158414), 0u, (const CowU32[]){ 0u }, this_01, g->edx, g->eax, 0u);
      if (((((int32_t)rd32((uint32_t)((int)param_1 + 0xd0)) == 0) || ((int8_t)rd8((uint32_t)((int)param_1 + 0x22)) == '\0')) ||
          (extraout_DL == '\0')) || (iVar3 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10158437), 1u, (const CowU32[]){ 192u }, g->ecx, g->edx, g->eax, 4u), iVar3 != 1)) {
        uVar4 = 0;
      }
      else {
        uVar4 = 1;
      }
      cow_bridge_1009af60(g, COW_IMG(COW_ADDR_LIFT_10158461), 3u, (const CowU32[]){ uVar4, (CowU32)bVar1, (CowU32)bVar2 }, this_00, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 8 locals, pops [edi, esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101583f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 0x8u;                      /* 0x101583f0: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101583f3: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101583f4: push edi */
    g->esi = g->ecx;   /* 0x101583f5: the value the entry loaded and the decompiler dropped */
    cow_lift_101583f0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
