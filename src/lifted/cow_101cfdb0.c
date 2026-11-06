/* f_0x101cfdb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cfdb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cfdb0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    uVar1 = 0;
      iVar4 = 0;
      iVar3 = param_1 * param_5;
      iVar2 = param_4;
      do {
        if ((((-1 < iVar2) && (-1 < param_5)) && (iVar2 < param_1)) && (param_5 < param_2)) {
          uVar1 = rd32((uint32_t)(param_3 + (iVar3 + iVar2) * 4));
        }
        iVar2 = iVar2 + 1;
        wr32((uint32_t)(param_6 + iVar4 * 4), uVar1);
        if (param_4 + 0x10 <= iVar2) {
          param_5 = param_5 + 1;
          iVar3 = iVar3 + param_1;
          iVar2 = param_4;
        }
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x100);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 6 parameter(s), cleanup 24 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 24.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101cfdb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->edx = param_1;   /* 0x101cfdb0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101cfdb4: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x101cfdb5: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101cfdb9: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101cfdba: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101cfdbb: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->edi = (uint32_t)(rd32(A)); }   /* 0x101cfdbc: register edi, replayed as the entry ran it */
    g->eax = 0u;   /* 0x101cfdc0: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x101cfdc2: the value the entry loaded and the decompiler dropped */
    g->ecx = g->ebx;   /* 0x101cfdc4: the value the entry loaded and the decompiler dropped */
    cow_lift_101cfdb0(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 24u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
