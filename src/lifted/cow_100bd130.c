/* f_0x100bd130 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100bd130 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100bd130(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    CowU32 puVar3;
    CowU32 uVar4;
    puVar3 = (CowU32)(param_3 + 4);
      uVar4 = 0;
      uVar2 = rd32((uint32_t)puVar3);
      if (uVar2 != 0) {
        do {
          uVar1 = rd16((uint32_t)(param_3 + 8 + uVar2 * 2 + uVar4 * 2));
          puVar3 = (CowU32)(((uint32_t)((short)((CowU32)puVar3 >> 0x10)) & 0xffffu) << 16 | ((uint32_t)(uVar1) & 0xffffu));
          if ((uVar1 == rd32(COW_IMG(COW_ADDR_LIFT_104886DC))) || (uVar1 == 0xfffe)) {
            g->eax = (CowU32)((((uint32_t)(((CowU32)puVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))); return;
          }
          uVar4 = uVar4 + 1;
        } while (uVar4 < uVar2);
      }
      g->eax = (CowU32)((CowU32)puVar3 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100bd130(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->eax = param_3;   /* 0x100bd130: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100bd134: push ebx */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x4u; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x100bd135: register eax, replayed as the entry ran it */
    g->ecx = 0u;   /* 0x100bd138: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100bd13a: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100bd13b: push edi */
    { uint32_t A = (uint32_t)(g->eax); g->edx = (uint32_t)(rd32(A)); }   /* 0x100bd13c: register edx, replayed as the entry ran it */
    cow_lift_100bd130(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
