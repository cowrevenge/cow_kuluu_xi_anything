/* f_0x101e0d30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e0d30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e0d30(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 psVar2;
    int iVar3;
    int iVar4;
    iVar3 = (int)rd16((uint32_t)(rd32((uint32_t)(param_1 + 8)) + 0x4c));
      iVar4 = iVar3 + -1;
      if ((-1 < iVar4) && (iVar4 < 10)) {
        iVar1 = 0;
        psVar2 = (CowU32)(param_1 + 0x22);
        do {
          if ((rd16((uint32_t)psVar2) == param_3) && (rd8((uint32_t)(iVar1 + 0x15 + param_1)) == param_2)) {
            wr16((uint32_t)psVar2, 0);
            wr8((uint32_t)(iVar1 + 0x15 + param_1), 0);
            wr8((uint32_t)(iVar1 + 0x36 + param_1), 0);
            if (iVar1 == iVar4) {
              return;
            }
          }
          iVar1 = iVar1 + 1;
          psVar2 = psVar2 + 1;
        } while (iVar1 < 10);
        wr16((uint32_t)(param_1 + 0x22 + iVar4 * 2), param_3);
        wr8((uint32_t)(iVar3 + 0x14 + param_1), param_2);
        wr8((uint32_t)(iVar3 + 0x35 + param_1), param_4);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e0d30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101e0d30: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101e0d33: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101e0d34: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e0d35: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101e0d36: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x4Cu); g->edi = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x101e0d37: register edi, replayed as the entry ran it */
    { { uint32_t a = g->edi; uint32_t r = (uint32_t)(a - 1u); g->edi = (uint32_t)(r); }; }   /* 0x101e0d3b: register edi, replayed as the entry ran it */
    cow_lift_101e0d30(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
