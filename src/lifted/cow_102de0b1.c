/* f_0x102de0b1 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102de0b1 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102de0b1(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 puVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 puVar6;
    int local_14;
    CowU32 local_8;
    uVar5 = param_4 * param_5 + param_2;
      if (param_2 < uVar5) {
        param_4 = param_2 + param_3 * 4;
        do {
          local_8 = param_1;
          if (param_2 < param_4) {
            local_14 = ((param_4 - param_2) - 1 >> 3) + 1;
            puVar6 = (CowU32)(param_2 + 4);
            do {
              puVar2 = (CowU32)((int)puVar6 + param_5);
              uVar3 = rd32((uint32_t)puVar6);
              uVar4 = rd32((uint32_t)(param_5 + -4 + (int)puVar6));
              puVar1 = puVar6 + -1;
              puVar6 = puVar6 + 2;
              local_14 = local_14 + -1;
              wr32((uint32_t)local_8, ((rd32((uint32_t)puVar1) & 0xff00ff) + (uVar4 & 0xff00ff) + (rd32((uint32_t)puVar2) & 0xff00ff) + 0x20002 +
                          (uVar3 & 0xff00ff) & 0x3fc03fc |
                         (rd32((uint32_t)puVar1) & 0xff00) + (uVar4 & 0xff00) + (rd32((uint32_t)puVar2) & 0xff00) + 0x200 +
                         (uVar3 & 0xff00) & 0x3fc00) >> 2);
              local_8 = local_8 + 1;
            } while (local_14 != 0);
          }
          param_1 = (CowU32)((int)param_1 + param_6);
          param_4 = param_4 + param_5 * 2;
          param_2 = param_2 + param_5 * 2;
        } while (param_2 < uVar5);
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102de0b1(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102de0b1: push ebp */
    g->ebp = g->esp;                       /* 0x102de0b2: mov ebp, esp */
    g->esp -= 0x18u;                      /* 0x102de0b4: 24 bytes of locals */
    g->ecx = param_4;   /* 0x102de0b7: the value the entry loaded and the decompiler dropped */
    g->eax = param_5;   /* 0x102de0ba: the value the entry loaded and the decompiler dropped */
    cow_lift_102de0b1(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
