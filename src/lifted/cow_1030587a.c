/* f_0x1030587a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1030587a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1030587a(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    CowU32 pbVar4;
    CowU32 puVar5;
    CowU32 pbVar6;
    int local_14;
    int local_c;
    int local_8;
    iVar1 = rd32((uint32_t)param_4);
      local_8 = 0;
      if (0 < rd32((uint32_t)(param_1 + 0x110))) {
        do {
          param_4 = (CowU32)0x0;
          do {
            pbVar4 = (CowU32)rd32((uint32_t)param_3);
            if (param_4 == (CowU32)0x0) {
              pbVar6 = (CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(-1)));
            }
            else {
              pbVar6 = (CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(1)));
            }
            puVar5 = rd8((uint32_t)(iVar1 + local_8 * 4));
            local_8 = local_8 + 1;
            local_c = (CowU32)rd8((uint32_t)pbVar4) * 3 + (CowU32)rd8((uint32_t)pbVar6);
            iVar2 = (CowU32)rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1))) * 3 + (CowU32)rd8((uint32_t)(pbVar6 + 1u * (uint32_t)(1)));
            wr8((uint32_t)puVar5, (char)(local_c * 4 + 8 >> 4));
            pbVar6 = pbVar6 + 2;
            pbVar4 = pbVar4 + 2;
            wr8((uint32_t)(puVar5 + 1u * (uint32_t)(1)), (char)(local_c * 3 + 7 + iVar2 >> 4));
            puVar5 = puVar5 + 2;
            local_14 = rd32((uint32_t)(param_2 + 0x28)) + -2;
            if (local_14 != 0) {
              iVar3 = local_c;
              do {
                local_c = iVar2;
                iVar2 = (CowU32)rd8((uint32_t)pbVar4) * 3 + (CowU32)rd8((uint32_t)pbVar6);
                wr8((uint32_t)puVar5, (char)(local_c * 3 + 8 + iVar3 >> 4));
                pbVar6 = pbVar6 + 1;
                pbVar4 = pbVar4 + 1;
                wr8((uint32_t)(puVar5 + 1u * (uint32_t)(1)), (char)(local_c * 3 + 7 + iVar2 >> 4));
                puVar5 = puVar5 + 2;
                local_14 = local_14 + -1;
                iVar3 = local_c;
              } while (local_14 != 0);
            }
            param_4 = (CowU32)((int)param_4 + 1);
            wr8((uint32_t)puVar5, (char)(iVar2 * 3 + 8 + local_c >> 4));
            wr8((uint32_t)(puVar5 + 1u * (uint32_t)(1)), (char)(iVar2 * 4 + 7 >> 4));
          } while ((int)param_4 < 2);
          param_3 = param_3 + 1;
        } while (local_8 < rd32((uint32_t)(param_1 + 0x110)));
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1030587a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1030587a: push ebp */
    g->ebp = g->esp;                       /* 0x1030587b: mov ebp, esp */
    g->esp -= 0x14u;                      /* 0x1030587d: 20 bytes of locals */
    g->eax = param_4;   /* 0x10305880: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->eax); g->eax = (uint32_t)(rd32(A)); }   /* 0x10305883: register eax, replayed as the entry ran it */
    cow_lift_1030587a(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
