/* f_0x102bfd6d - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102bfd6d (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102bfd6d(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    CowU8 uVar2;
    CowU32 puVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    int iVar6;
    iVar6 = rd32((uint32_t)param_1);
      if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) == '\x06') {
        if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          puVar3 = (CowU32)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + param_2);
          if (iVar6 != 0) {
            puVar5 = puVar3;
            do {
              uVar1 = rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)));
              puVar4 = puVar3 + -3;
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-2))));
              puVar3 = puVar3 + -4;
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar4));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-3)), rd8((uint32_t)puVar3));
              puVar5 = puVar5 + -4;
              iVar6 = iVar6 + -1;
              wr8((uint32_t)puVar5, uVar1);
            } while (iVar6 != 0);
          }
        }
        else {
          puVar3 = (CowU32)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + param_2);
          if (iVar6 != 0) {
            puVar5 = puVar3;
            do {
              uVar1 = rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)));
              uVar2 = rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-1)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-3))));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-2)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-4))));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-3)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-5))));
              puVar4 = puVar3 + -7;
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-4)), rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-6))));
              puVar3 = puVar3 + -8;
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-5)), rd8((uint32_t)puVar4));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-6)), rd8((uint32_t)puVar3));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-7)), uVar1);
              puVar5 = puVar5 + -8;
              iVar6 = iVar6 + -1;
              wr8((uint32_t)puVar5, uVar2);
            } while (iVar6 != 0);
          }
        }
      }
      else if ((char)rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) == '\x04') {
        if ((int8_t)rd8((uint32_t)((int)param_1 + 9)) == '\b') {
          puVar3 = (CowU32)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + param_2);
          if (iVar6 != 0) {
            puVar5 = puVar3;
            do {
              uVar1 = rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)));
              puVar3 = puVar3 + -2;
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar3));
              puVar5 = puVar5 + -2;
              iVar6 = iVar6 + -1;
              wr8((uint32_t)puVar5, uVar1);
            } while (iVar6 != 0);
          }
        }
        else {
          puVar3 = (CowU32)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) + param_2);
          if (iVar6 != 0) {
            puVar5 = puVar3;
            do {
              uVar1 = rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-1)));
              uVar2 = rd8((uint32_t)(puVar3 + 1u * (uint32_t)(-2)));
              puVar4 = puVar3 + -3;
              puVar3 = puVar3 + -4;
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-1)), rd8((uint32_t)puVar4));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-2)), rd8((uint32_t)puVar3));
              wr8((uint32_t)(puVar5 + 1u * (uint32_t)(-3)), uVar1);
              puVar5 = puVar5 + -4;
              iVar6 = iVar6 + -1;
              wr8((uint32_t)puVar5, uVar2);
            } while (iVar6 != 0);
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebp, ebx, esi], frame pointer no, 0 locals, pops [esi, ebx, ebp], ret 0.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102bfd6d(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102bfd6d: push ebp */
    g->ebp = g->esp;                       /* 0x102bfd6e: mov ebp, esp */
    g->eax = param_2;   /* 0x102bfd70: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102bfd73: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102bfd74: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x8u); g->ecx = (g->ecx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102bfd75: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->eax); g->edx = (uint32_t)(rd32(A)); }   /* 0x102bfd78: register edx, replayed as the entry ran it */
    cow_lift_102bfd6d(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
