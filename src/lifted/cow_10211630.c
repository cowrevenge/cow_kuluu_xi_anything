/* f_0x10211630 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10211630 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10211630(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    iVar4 = 0;
      iVar2 = 0;
      iVar3 = param_3;
      if (0 < (int)param_4) {
        do {
          if (iVar4 < 1) {
            iVar3 = param_3 + 1;
            cVar1 = (int8_t)rd8((uint32_t)(param_3 + (int32_t)rd32((uint32_t)(param_1 + 4))));
            wr8((uint32_t)(iVar2 + param_2), cVar1);
            if (cVar1 == '\0') {
              iVar4 = rd8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 4)) + iVar3)) - 1;
              iVar3 = param_3 + 2;
            }
          }
          else {
            wr8((uint32_t)(iVar2 + param_2), 0);
            iVar4 = iVar4 + -1;
            iVar3 = param_3;
          }
          iVar2 = iVar2 + 1;
          param_3 = iVar3;
        } while (iVar2 < (int)param_4);
      }
      g->eax = (CowU32)((((int32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc))) <= (int32_t)(iVar3))) - 1 & param_4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10211630(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->edx = param_3;   /* 0x10211630: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10211634: push ebp */
    g->ebp = g->ecx;   /* 0x10211635: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x10211637: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1021163b: push esi */
    g->esi = 0u;   /* 0x1021163c: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x1021163e: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10211640: push edi */
    cow_lift_10211630(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
