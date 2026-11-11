/* f_0x101040e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101040e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101040e0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    uVar1 = 0;
      if (rd16((uint32_t)(param_1 + 2)) != 0) {
        do {
          if (param_2 == rd32((uint32_t)(param_1 + 8 + (CowU32)uVar1 * 8))) {
            g->eax = (CowU32)(0); return;
          }
          uVar1 = uVar1 + 1;
        } while (uVar1 < rd16((uint32_t)(param_1 + 2)));
        if (0x13 < uVar1) {
          g->eax = (CowU32)(0); return;
        }
      }
      uVar2 = (CowU32)uVar1;
      wr32((uint32_t)(param_1 + 8 + uVar2 * 8), param_2);
      uVar3 = rd32((uint32_t)(param_1 + 0xc + uVar2 * 8)) | 1;
      wr32((uint32_t)(param_1 + 0xc + uVar2 * 8), (param_3 & 0x7fff) << 2 ^ (((CowU32)(param_5 == -1) * 2 ^ uVar3) & 2 ^ uVar3) & 3 ^
           param_4 << 0x11);
      wr16((uint32_t)(param_1 + 2), rd16((uint32_t)(param_1 + 2)) + 1);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101040e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->eax = param_1;   /* 0x101040e0: the value the entry loaded and the decompiler dropped */
    g->edx = param_2;   /* 0x101040e4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101040e8: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101040e9: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x2u); g->esi = (g->esi & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x101040ea: register esi, replayed as the entry ran it */
    g->ecx = 0u;   /* 0x101040ee: the value the entry loaded and the decompiler dropped */
    cow_lift_101040e0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
