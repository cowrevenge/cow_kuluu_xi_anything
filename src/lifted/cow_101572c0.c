/* f_0x101572c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101572c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101572c0(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 puVar3;
    puVar3 = (CowU32)(rd32((uint32_t)(param_1 + 0x40c)) * 0x40 + 0x410 + param_1);
      for (iVar1 = 0x10; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar3, rd32((uint32_t)param_2));
        param_2 = param_2 + 1;
        puVar3 = puVar3 + 1;
      }
      iVar1 = rd32((uint32_t)(param_1 + 0x40c));
      iVar2 = iVar1 + 1;
      wr32((uint32_t)(param_1 + 0x40c), iVar2);
      if (0xf < iVar2) {
        wr32((uint32_t)(param_1 + 0x40c), 0);
      }
      g->eax = (CowU32)(iVar1 * 0x40 + 0x410 + param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 0 locals, pops [edi, esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101572c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = g->ecx;   /* 0x101572c0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101572c2: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->esi = (uint32_t)(rd32(A)); }   /* 0x101572c3: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101572c7: push edi */
    { uint32_t A = (uint32_t)(g->edx + 0x40Cu); g->eax = (uint32_t)(rd32(A)); }   /* 0x101572c8: register eax, replayed as the entry ran it */
    g->ecx = 16u;   /* 0x101572ce: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x6u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->eax = (uint32_t)(r); } }; }   /* 0x101572d3: register eax, replayed as the entry ran it */
    { g->edi = (uint32_t)((uint32_t)(g->eax + g->edx + 0x410u)); }   /* 0x101572d6: register edi, replayed as the entry ran it */
    cow_lift_101572c0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
