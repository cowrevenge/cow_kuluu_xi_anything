/* f_0x100a2fd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a2fd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a2fd0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    if (param_1 != (CowU32)0x0) {
        wr8((uint32_t)param_1, param_2);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(2)), param_3);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(3)), param_4);
        wr8((uint32_t)(param_1 + 1u * (uint32_t)(1)), 0);
        wr32((uint32_t)(param_1 + 4), 0);
        wr32((uint32_t)(param_1 + 8), 0);
        wr32((uint32_t)(param_1 + 0x18), 0);
        puVar3 = (CowU32)(param_1 + 0x1c);
        for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
          wr32((uint32_t)puVar3, 0);
          puVar3 = puVar3 + 1;
        }
        wr32((uint32_t)(param_1 + 0xc), 0);
        if ((param_5 != (CowU32)0x0) && (0 < (int)param_6)) {
          wr32((uint32_t)(param_1 + 0x10), param_6);
          wr32((uint32_t)(param_1 + 0x14), param_5);
          for (uVar2 = param_6 >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
            wr32((uint32_t)param_5, 0);
            param_5 = param_5 + 1;
          }
          for (param_6 = param_6 & 3; param_6 != 0; param_6 = param_6 - 1) {
            wr8((uint32_t)param_5, 0);
            param_5 = (CowU32)((int)param_5 + 1);
          }
          return;
        }
        wr32((uint32_t)(param_1 + 0x10), 0);
        wr32((uint32_t)(param_1 + 0x14), 0);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebx, edi], frame pointer no, 0 locals, pops [edi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a2fd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->edx = param_2;   /* 0x100a2fd0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100a2fd4: push ebx */
    g->ebx = 0u;   /* 0x100a2fd5: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100a2fd7: push edi */
    cow_lift_100a2fd0(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
