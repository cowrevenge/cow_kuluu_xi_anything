/* f_0x102589b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102589b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102589b0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pcVar2;
    CowU32 pcVar3;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10389EC0)) != '\0') {
        pcVar2 = COW_IMG(COW_ADDR_LIFT_10389EC0);
        pcVar3 = COW_IMG(COW_ADDR_LIFT_10389EC1);
        do {
          iVar1 = cow_bridge_1011da80(g, COW_IMG(COW_ADDR_LIFT_102589D0), 1u, (const CowU32[]){ pcVar2 }, g->ecx, g->edx, g->eax, 4u);
          if (iVar1 == 1) {
            if (rd8((uint32_t)param_1) == rd8((uint32_t)pcVar2)) {
              g->eax = (CowU32)(1); return;
            }
            pcVar3 = pcVar3 + 1;
            pcVar2 = pcVar2 + 1;
          }
          else {
            if ((rd8((uint32_t)param_1) == rd8((uint32_t)pcVar2)) && (rd8((uint32_t)(param_1 + 1u * (uint32_t)(1))) == rd8((uint32_t)pcVar3))) {
              g->eax = (CowU32)(1); return;
            }
            pcVar3 = pcVar3 + 2;
            pcVar2 = pcVar2 + 2;
          }
        } while (rd8((uint32_t)pcVar2) != '\0');
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102589b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(COW_IMG(COW_ADDR_LIFT_10389EC0) + RD); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x102589b0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102589b5: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102589b6: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102589b7: push edi */
    cow_lift_102589b0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
