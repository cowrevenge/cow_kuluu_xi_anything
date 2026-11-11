/* f_0x10103ca0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10103ca0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10103ca0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    int iVar3;
    CowU32 piVar4;
    int iVar5;
    CowU32 uVar6;
    int iVar7;
    _Bool bVar8;
      
      uVar6 = 0x7b2;
      for (; param_4 != 0; param_4 = param_4 - rd32((uint32_t)(iVar3 * 4 + 0x10364878))) {
        uVar2 = uVar6 & 0x80000003;
        bVar8 = uVar2 == 0;
        if ((int)uVar2 < 0) {
          bVar8 = (uVar2 - 1 | 0xfffffffc) == 0xffffffff;
        }
        if (((bVar8) && ((int)uVar6 % 100 != 0)) || ((int)uVar6 % 400 == 0)) {
          iVar3 = 1;
        }
        else {
          iVar3 = 0;
        }
        uVar6 = uVar6 + 1;
      }
      uVar6 = uVar6 - 1;
      uVar2 = uVar6 & 0x80000003;
      wr16((uint32_t)param_1, (short)uVar6);
      if ((int)uVar2 < 0) {
        uVar2 = (uVar2 - 1 | 0xfffffffc) + 1;
      }
      if (((uVar2 == 0) && ((int)uVar6 % 100 != 0)) || ((int)uVar6 % 400 == 0)) {
        iVar3 = 1;
      }
      else {
        iVar3 = 0;
      }
      iVar3 = rd32((uint32_t)(iVar3 * 4 + 0x10364878));
      if (((uVar2 == 0) && ((int)uVar6 % 100 != 0)) || ((int)uVar6 % 400 == 0)) {
        iVar7 = 1;
      }
      else {
        iVar7 = 0;
      }
      iVar5 = 0;
      if (iVar3 != 0) {
        piVar4 = (CowU32)(iVar7 * 0x30 + 0x10364818);
        do {
          iVar1 = rd32((uint32_t)piVar4);
          piVar4 = piVar4 + 1;
          iVar3 = iVar3 - iVar1;
          iVar5 = iVar5 + 1;
        } while (iVar3 != 0);
      }
      wr8((uint32_t)param_2, (char)(iVar5 + -1));
      wr8((uint32_t)param_3, (char)(rd32((uint32_t)((iVar5 + -1 + iVar7 * 0xc) * 4 + 0x10364818)) / 0x15180));
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10103ca0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->ecx = param_4;   /* 0x10103ca0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10103ca4: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10103ca5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10103ca6: push edi */
    cow_lift_10103ca0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
