/* f_0x10320451 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10320451 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10320451(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6, CowU32 param_7, CowU32 param_8, CowU32 param_9, CowU32 param_10, CowU32 param_11)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    if (param_2 == 1) {
        if ((param_3 & 3) == 0) {
          iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103D37A4) + param_4 * 4));
        }
        else {
          iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103D37D8) + param_4 * 4));
        }
        iVar2 = (int)(param_3 * 0x16d + -0x63db + iVar1 + 1 + ((int)(param_3 - 1) >> 2)) % 7;
        if (param_6 < iVar2) {
          iVar1 = iVar1 + 1 + (param_5 * 7 - iVar2) + param_6;
        }
        else {
          iVar1 = iVar1 + -6 + (param_5 * 7 - iVar2) + param_6;
        }
        if (param_5 == 5) {
          if ((param_3 & 3) == 0) {
            iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103D37A8) + param_4 * 4));
          }
          else {
            iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103D37DC) + param_4 * 4));
          }
          if (iVar2 < iVar1) {
            iVar1 = iVar1 + -7;
          }
        }
      }
      else {
        if ((param_3 & 3) == 0) {
          iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103D37A4) + param_4 * 4));
        }
        else {
          iVar1 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103D37D8) + param_4 * 4));
        }
        iVar1 = iVar1 + param_7;
      }
      if (param_1 == 1) {
        wr32(COW_IMG(COW_ADDR_LIFT_103D2DE8), param_3);
        wr32(COW_IMG(COW_ADDR_LIFT_103D2DEC), iVar1);
        wr32(COW_IMG(COW_ADDR_LIFT_103D2DF0), ((param_8 * 0x3c + param_9) * 0x3c + param_10) * 1000 + param_11);
        return;
      }
      wr32(COW_IMG(COW_ADDR_LIFT_103D2E00), ((param_8 * 0x3c + param_9) * 0x3c + rd32(COW_IMG(COW_ADDR_LIFT_103D2D58)) + param_10) * 1000 + param_11);
      if (rd32(COW_IMG(COW_ADDR_LIFT_103D2E00)) < 0) {
        wr32(COW_IMG(COW_ADDR_LIFT_103D2E00), rd32(COW_IMG(COW_ADDR_LIFT_103D2E00)) + 86400000);
        wr32(COW_IMG(COW_ADDR_LIFT_103D2DFC), iVar1 + -1);
      }
      else {
        if (rd32(COW_IMG(COW_ADDR_LIFT_103D2E00)) < 86400000) {
          wr32(COW_IMG(COW_ADDR_LIFT_103D2DF8), param_3);
          wr32(COW_IMG(COW_ADDR_LIFT_103D2DFC), iVar1);
          return;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_103D2E00), rd32(COW_IMG(COW_ADDR_LIFT_103D2E00)) + -86400000);
        wr32(COW_IMG(COW_ADDR_LIFT_103D2DFC), iVar1 + 1);
      }
      wr32(COW_IMG(COW_ADDR_LIFT_103D2DF8), param_3);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 11 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx, ebp], ret 0.
   Arguments: 0 register argument(s) [-], 11 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10320451(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x1cu));
    CowU32 param_9 = rd32((uint32_t)(sp0 + 4u + 0x20u));
    CowU32 param_10 = rd32((uint32_t)(sp0 + 4u + 0x24u));
    CowU32 param_11 = rd32((uint32_t)(sp0 + 4u + 0x28u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10320451: push ebp */
    g->ebp = g->esp;                       /* 0x10320452: mov ebp, esp */
    cow_lift_10320451(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8, param_9, param_10, param_11);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
