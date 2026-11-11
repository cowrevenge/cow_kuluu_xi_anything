/* f_0x102114d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102114d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102114d0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    char cVar3;
    int iVar4;
    iVar1 = 0;
      iVar2 = 0;
      iVar4 = 0;
      cVar3 = '\x01';
      if (0 < param_2) {
        do {
          if (rd8((uint32_t)(iVar4 + param_1)) == '\0') {
            if (cVar3 == '\0') {
              if (iVar2 == 0xff) {
                iVar1 = iVar1 + 2;
                iVar2 = 0;
              }
              iVar2 = iVar2 + 1;
            }
            else {
              iVar1 = iVar1 + 1;
              iVar2 = 1;
              cVar3 = '\0';
            }
          }
          else {
            if (iVar2 != 0) {
              iVar1 = iVar1 + 1;
              iVar2 = 0;
            }
            iVar1 = iVar1 + 1;
            cVar3 = rd8((uint32_t)(iVar4 + param_1));
          }
          iVar4 = iVar4 + 1;
        } while (iVar4 < param_2);
        if (iVar2 != 0) {
          iVar1 = iVar1 + 1;
        }
      }
      g->eax = (CowU32)(iVar1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebp, ebx], ret 8.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102114d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102114d0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102114d1: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x102114d2: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102114d6: push esi */
    g->eax = 0u;   /* 0x102114d7: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x102114d9: the value the entry loaded and the decompiler dropped */
    g->esi = 0u;   /* 0x102114db: the value the entry loaded and the decompiler dropped */
    { g->ebx = (g->ebx & 0xFFFFFF00u) | (uint8_t)(0x1u); }   /* 0x102114dd: register ebx, replayed as the entry ran it */
    cow_lift_102114d0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
