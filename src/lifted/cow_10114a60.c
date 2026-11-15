/* f_0x10114a60 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10114a60 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10114a60(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3, int32_t param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU8 local_20[32];
    cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_10114A79), 3u, (const CowU32[]){ g->eax, 272023684u, g->esi }, g->ecx, g->edx, g->eax, 12u);
      if (-1 < param_1) {
        cVar1 = cow_bridge_101c4c70(g, COW_IMG(COW_ADDR_LIFT_10114A90), 1u, (const CowU32[]){ local_20 }, g->ecx, g->edx, g->eax, 0u);
        if (cVar1 != '\0') {
          uVar2 = cow_bridge_101c4b40(g, COW_IMG(COW_ADDR_LIFT_10114AAE), 1u, (const CowU32[]){ local_20 }, g->ecx, g->edx, g->eax, 0u);
          if (param_4 + 0x48U <= uVar2) {
            uVar3 = uVar2 - param_4;
            if ((CowU32)(param_3 * 0x48) < uVar2 - param_4) {
              uVar3 = param_3 * 0x48;
            }
            uVar2 = cow_bridge_101c47b0(g, COW_IMG(COW_ADDR_LIFT_10114AE0), 4u, (const CowU32[]){ local_20, param_2, uVar3, param_4 * 0x48 }, g->ecx, g->edx, g->eax, 0u);
            if (0x47 < uVar2) {
              g->eax = (CowU32)(uVar2 / 0x48); return;
            }
          }
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 32 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10114a60(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    g->esp -= 0x20u;                      /* 0x10114a60: 32 bytes of locals */
    { g->eax = (uint32_t)((uint32_t)(g->esp)); }   /* 0x10114a63: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10114a67: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x28u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10114a68: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10114a6c: push edi */
    cow_lift_10114a60(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
