/* f_0x102ddf3a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102ddf3a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102ddf3a(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4, int32_t param_5, int32_t param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    int local_18;
    CowU32 local_14;
    CowU32 local_c;
    uVar5 = param_4 * param_5 + param_2;
      if (param_2 < uVar5) {
        param_4 = param_2 + param_3 * 4;
        do {
          local_c = param_1;
          if (param_2 < param_4) {
            local_14 = (CowU32)(param_2 + 4);
            local_18 = ((param_4 - param_2) - 1 >> 3) + 1;
            do {
              uVar1 = rd32((uint32_t)((int)local_14 + param_5));
              uVar2 = rd32((uint32_t)(param_5 + -4 + (int)local_14));
              uVar3 = rd32((uint32_t)local_14);
              uVar4 = rd32((uint32_t)(local_14 + 4u * (uint32_t)(-1)));
              wr32((uint32_t)local_c, ((uVar4 >> 2 & 0xffc03fc0) + (uVar2 >> 2 & 0xffc03fc0) +
                          (uVar1 >> 2 & 0xffc03fc0) + -0x7fff80 + (uVar3 >> 2 & 0xffc03fc0) ^
                         (uVar4 & 0xff00ff) + (uVar2 & 0xff00ff) + (uVar1 & 0xff00ff) + 0x20002 +
                         (uVar3 & 0xff00ff) >> 2) & 0xff00ff ^
                         (uVar4 >> 2 & 0x3fc03fc0) + (uVar2 >> 2 & 0x3fc03fc0) +
                         (uVar1 >> 2 & 0x3fc03fc0) + 0x800080 + (uVar3 >> 2 & 0x3fc03fc0));
              local_14 = local_14 + 4u * (uint32_t)(2);
              local_18 = local_18 + -1;
              local_c = local_c + 4u * (uint32_t)(1);
            } while (local_18 != 0);
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
void cow_adapter_102ddf3a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102ddf3a: push ebp */
    g->ebp = g->esp;                       /* 0x102ddf3b: mov ebp, esp */
    g->esp -= 0x18u;                      /* 0x102ddf3d: 24 bytes of locals */
    g->eax = param_4;   /* 0x102ddf40: the value the entry loaded and the decompiler dropped */
    g->edx = param_2;   /* 0x102ddf43: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102ddf46: push edi */
    g->edi = param_5;   /* 0x102ddf47: the value the entry loaded and the decompiler dropped */
    cow_lift_102ddf3a(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
