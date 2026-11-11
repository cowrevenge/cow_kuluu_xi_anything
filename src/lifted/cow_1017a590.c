/* f_0x1017a590 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1017a590 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1017a590(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 piVar2;
    int iVar3;
    int iVar4;
    piVar2 = (CowU32)(param_1 + 0x84);
      iVar4 = 2;
      do {
        if (rd32((uint32_t)(piVar2 + 4u * (uint32_t)(-9))) != 0) {
          iVar3 = 0;
          if (0 < rd32((uint32_t)piVar2)) {
            puVar1 = (CowU32)(rd32((uint32_t)(piVar2 + 4u * (uint32_t)(1))) + 8);
            do {
              if (rd32((uint32_t)(puVar1 + 0xbc)) == 999) {
                wr8((uint32_t)puVar1, param_2);
              }
              iVar3 = iVar3 + 1;
              puVar1 = puVar1 + 0x16c;
            } while (iVar3 < rd32((uint32_t)piVar2));
          }
        }
        piVar2 = piVar2 + 0x1e;
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1017a590(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x1017a590: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1017a594: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1017a595: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1017a596: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1017a597: push edi */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0x84u; uint32_t r = (uint32_t)(a + b); g->ecx = (uint32_t)(r); }   /* 0x1017a598: register ecx, replayed as the entry ran it */
    g->edi = 2u;   /* 0x1017a59e: the value the entry loaded and the decompiler dropped */
    cow_lift_1017a590(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
