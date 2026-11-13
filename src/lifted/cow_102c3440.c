/* f_0x102c3440 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102c3440 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102c3440(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 uVar2;
    int iVar3;
    bVar1 = rd8((uint32_t)(param_1 + 4u * (uint32_t)(2)));
      if ((bVar1 & 2) != 0) {
        iVar3 = rd32((uint32_t)param_1);
        if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          if (bVar1 == 2) {
            if (iVar3 != 0) {
              do {
                uVar2 = rd8((uint32_t)param_2);
                wr8((uint32_t)param_2, rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(2)), uVar2);
                param_2 = param_2 + 3;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          else if ((bVar1 == 6) && (iVar3 != 0)) {
            do {
              uVar2 = rd8((uint32_t)param_2);
              wr8((uint32_t)param_2, rd8((uint32_t)(param_2 + 1u * (uint32_t)(2))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(2)), uVar2);
              param_2 = param_2 + 4;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
        else if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\x10') {
          if (bVar1 == 2) {
            if (iVar3 != 0) {
              param_2 = param_2 + 1;
              do {
                uVar2 = rd8((uint32_t)(param_2 + 1u * (uint32_t)(-1)));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(-1)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(3))));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(3)), uVar2);
                uVar2 = rd8((uint32_t)param_2);
                wr8((uint32_t)param_2, rd8((uint32_t)(param_2 + 1u * (uint32_t)(4))));
                wr8((uint32_t)(param_2 + 1u * (uint32_t)(4)), uVar2);
                param_2 = param_2 + 6;
                iVar3 = iVar3 + -1;
              } while (iVar3 != 0);
            }
          }
          else if ((bVar1 == 6) && (iVar3 != 0)) {
            param_2 = param_2 + 1;
            do {
              uVar2 = rd8((uint32_t)(param_2 + 1u * (uint32_t)(-1)));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(-1)), rd8((uint32_t)(param_2 + 1u * (uint32_t)(3))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(3)), uVar2);
              uVar2 = rd8((uint32_t)param_2);
              wr8((uint32_t)param_2, rd8((uint32_t)(param_2 + 1u * (uint32_t)(4))));
              wr8((uint32_t)(param_2 + 1u * (uint32_t)(4)), uVar2);
              param_2 = param_2 + 8;
              iVar3 = iVar3 + -1;
            } while (iVar3 != 0);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [ebp, esi], frame pointer no, 0 locals, pops [esi, ebp], ret 0.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102c3440(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102c3440: push ebp */
    g->ebp = g->esp;                       /* 0x102c3441: mov ebp, esp */
    g->eax = param_2;   /* 0x102c3443: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102c3446: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102c3447: register edx, replayed as the entry ran it */
    cow_lift_102c3440(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
