/* f_0x100e4240 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100e4240 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100e4240(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    CowU16 uVar2;
    CowU16 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    CowU16 uVar7;
    uVar4 = (CowU32)rd8((uint32_t)(param_1 + 9));
      while (uVar4 = uVar4 - 1, 0 < (int)uVar4) {
        uVar2 = rd16((uint32_t)(param_1 + 10 + uVar4 * 2));
        uVar5 = 0;
        uVar6 = uVar4;
        uVar7 = uVar2;
        if (0 < (int)uVar4) {
          do {
            uVar3 = rd16((uint32_t)(param_1 + 10 + uVar5 * 2));
            if (uVar7 < uVar3) {
              uVar6 = uVar5;
              uVar7 = uVar3;
            }
            uVar5 = uVar5 + 1;
          } while ((int)uVar5 < (int)uVar4);
          if (uVar6 != uVar4) {
            wr16((uint32_t)(param_1 + 10 + uVar6 * 2), uVar2);
            wr16((uint32_t)(param_1 + 10 + uVar4 * 2), uVar7);
            uVar1 = rd8((uint32_t)(param_1 + 0x1a + uVar6));
            wr8((uint32_t)(param_1 + 0x1a + uVar6), rd8((uint32_t)(param_1 + 0x1a + uVar4)));
            wr8((uint32_t)(param_1 + 0x1a + uVar4), uVar1);
          }
        }
      }
      uVar2 = rd16((uint32_t)(param_1 + 6));
      if ((uVar2 < 0x196a) || (0x1971 < uVar2)) {
        if ((uVar2 < 0x108e) || (0x1095 < uVar2)) {
          uVar4 = (CowU32)uVar2;
        }
        else {
          uVar4 = uVar2 - 0x8e;
        }
      }
      else {
        uVar4 = uVar2 - 0x96a;
      }
      uVar4 = (rd8((uint32_t)(param_1 + 9)) + 5) * (rd16((uint32_t)(param_1 + 10)) + 7) * (uVar4 + 3);
      wr8((uint32_t)(param_1 + 4), (char)(uVar4 % 0x7f));
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)((((uint32_t)((uVar4 / 0x7f >> 8)) & 0xffffffu) << 8 | ((uint32_t)(1) & 0xffu))) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100e4240(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->ecx = param_1;   /* 0x100e4240: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100e4244: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100e4246: push esi */
    { uint32_t A = (uint32_t)(g->ecx + 0x9u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100e4247: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x100e424a: register eax, replayed as the entry ran it */
    cow_lift_100e4240(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
