/* f_0x101f8e30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f8e30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f8e30(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU8 uVar2;
    iVar1 = param_1 + (param_3 + param_2 * 10) * 0x16;
      wr32((uint32_t)(iVar1 + 0x6d8), 0);
      wr32((uint32_t)(iVar1 + 0x6dc), 0);
      wr32((uint32_t)(iVar1 + 0x6e0), 0);
      wr16((uint32_t)(iVar1 + 0x6e4), 0);
      wr8((uint32_t)(iVar1 + 0x6e6), 0);
      wr32((uint32_t)(iVar1 + 0x6d8), rd32((uint32_t)param_4));
      wr32((uint32_t)(iVar1 + 0x6dc), rd32((uint32_t)(param_4 + 4u * (uint32_t)(1))));
      wr32((uint32_t)(iVar1 + 0x6e0), rd32((uint32_t)(param_4 + 4u * (uint32_t)(2))));
      wr16((uint32_t)(iVar1 + 0x6e4), rd16((uint32_t)(uint32_t)(param_4 + 4u * (uint32_t)(3))));
      uVar2 = rd8((uint32_t)((int)param_4 + 0xe));
      wr8((uint32_t)(iVar1 + 0x6e7), 0);
      wr8((uint32_t)(iVar1 + 0x6e6), uVar2);
      wr8((uint32_t)(param_1 + 0xa44), 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 4 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 12.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f8e30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_2;   /* 0x101f8e30: the value the entry loaded and the decompiler dropped */
    g->edx = param_3;   /* 0x101f8e34: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f8e38: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101f8e39: push edi */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x101f8e3a: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->edx + g->eax * 2)); }   /* 0x101f8e3d: register eax, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x101f8e40: register edx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->edx * 2)); }   /* 0x101f8e43: register eax, replayed as the entry ran it */
    g->edx = 0u;   /* 0x101f8e46: the value the entry loaded and the decompiler dropped */
    { g->esi = (uint32_t)((uint32_t)(g->ecx + g->eax * 2)); }   /* 0x101f8e48: register esi, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->esi + 0x6D8u)); }   /* 0x101f8e4b: register eax, replayed as the entry ran it */
    g->edi = g->eax;   /* 0x101f8e51: the value the entry loaded and the decompiler dropped */
    cow_lift_101f8e30(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
