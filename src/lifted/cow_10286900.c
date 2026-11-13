/* f_0x10286900 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10286900 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10286900(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    CowU32 piVar5;
    iVar4 = 0;
      if (((int32_t)(0) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44))))) {
        piVar5 = rd32((uint32_t)(param_1 + 0x3c));
        do {
          piVar1 = (CowU32)rd32((uint32_t)piVar5);
          if ((piVar1 != (CowU32)0x0) && (rd32((uint32_t)piVar1) == 0xb0001)) {
            iVar3 = 0;
            if (0 < rd32((uint32_t)(piVar1 + 4u * (uint32_t)(10)))) {
              iVar2 = rd32((uint32_t)(piVar1 + 4u * (uint32_t)(8))) + 0x24;
              do {
                if (iVar2 == (int32_t)rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x50)) + param_2 * 4))) {
                  wr32((uint32_t)param_3, iVar4);
                  wr32((uint32_t)param_4, iVar3);
                  g->eax = (CowU32)(0); return;
                }
                iVar3 = iVar3 + 1;
                iVar2 = iVar2 + 0xf8;
              } while (iVar3 < rd32((uint32_t)(piVar1 + 4u * (uint32_t)(10))));
            }
          }
          iVar4 = iVar4 + 1;
          piVar5 = piVar5 + 4u * (uint32_t)(1);
        } while (((int32_t)(iVar4) < (int32_t)((int32_t)rd32((uint32_t)(param_1 + 0x44)))));
      }
      g->eax = (CowU32)(0xffffffff); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10286900(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->eax = param_1;   /* 0x10286900: the value the entry loaded and the decompiler dropped */
    g->edx = param_2;   /* 0x10286904: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10286908: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10286909: push ebp */
    { uint32_t A = (uint32_t)(g->eax + 0x50u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1028690a: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax + 0x44u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1028690d: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10286910: push esi */
    g->esi = 0u;   /* 0x10286911: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->ecx + g->edx * 4); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10286913: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10286916: push edi */
    cow_lift_10286900(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
