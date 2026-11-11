/* f_0x100ec4f0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ec4f0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ec4f0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    puVar2 = (CowU32)
               (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x9868 +
               ((CowU32)rd8((uint32_t)(param_3 + 8)) * 0x51 + (CowU32)rd8((uint32_t)(param_3 + 9))) * 0x2c);
      iVar1 = rd32((uint32_t)(param_3 + 4));
      wr32((uint32_t)(puVar2 + 4u * (uint32_t)(1)), iVar1);
      wr8((uint32_t)(puVar2 + 2), rd8((uint32_t)(param_3 + 10)));
      if (iVar1 == 0) {
        for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
          wr32((uint32_t)puVar2, 0);
          puVar2 = puVar2 + 1;
        }
      }
      cow_bridge_100fc2b0(g, COW_IMG(COW_ADDR_LIFT_100EC53D), 1u, (const CowU32[]){ 2048u }, g->ecx, g->edx, g->eax, 4u);
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [edi], frame pointer no, 0 locals, pops [edi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ec4f0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->ecx = param_3;   /* 0x100ec4f0: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x100ec4f4: the value the entry loaded and the decompiler dropped */
    g->edx = 0u;   /* 0x100ec4f6: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100ec4f8: push edi */
    { uint32_t A = (uint32_t)(g->ecx + 0x8u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100ec4f9: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x9u); g->edx = (g->edx & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100ec4fc: register edx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 8)); }   /* 0x100ec4ff: register eax, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->eax * 8)); }   /* 0x100ec502: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)g->edx; uint32_t r = (uint32_t)(a + b); g->eax = (uint32_t)(r); }   /* 0x100ec505: register eax, replayed as the entry ran it */
    { g->edx = (uint32_t)((uint32_t)(g->eax + g->eax * 4)); }   /* 0x100ec507: register edx, replayed as the entry ran it */
    { g->eax = (uint32_t)((uint32_t)(g->eax + g->edx * 2)); }   /* 0x100ec50a: register eax, replayed as the entry ran it */
    g->edx = rd32(COW_IMG(COW_ADDR_LIFT_104DFD98));   /* 0x100ec50d: the value the entry loaded and the decompiler dropped */
    { g->edi = (uint32_t)((uint32_t)(g->edx + g->eax * 4 + 0x9868u)); }   /* 0x100ec513: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ecx + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x100ec51a: register eax, replayed as the entry ran it */
    cow_lift_100ec4f0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
