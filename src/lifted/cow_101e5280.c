/* f_0x101e5280 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e5280 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e5280(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    if ((((int32_t)(1) < (int32_t)(rd32((uint32_t)(param_1 + 0x14))))) && (((int32_t)(rd32((uint32_t)(param_1 + 0x14))) < (int32_t)(5)))) {
        cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101E529D), 4u, (const CowU32[]){ 0x3e, 3, 0, 0xffffffff }, param_1, param_2, g->eax, 16u);
        if (cVar1 == '\0') {
          cVar1 = cow_bridge_10123a70(g, COW_IMG(COW_ADDR_LIFT_101E52D6), 4u, (const CowU32[]){ 0x3e, 2, 0, 0xffffffff }, g->ecx, g->edx, g->eax, 16u);
          if (cVar1 != '\0') {
            wr8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14))), rd8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14)))) + '\x01');
            if ('\x0f' < rd8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14))))) {
              wr8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14))), 0xf);
            }
          }
        }
        else {
          wr8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14))), rd8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14)))) + -1);
          if (rd8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14)))) < '\0') {
            wr8((uint32_t)(param_1 + 0x2e + rd32((uint32_t)(param_1 + 0x14))), 0);
            return;
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e5280(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101e5280: push esi */
    g->esi = g->ecx;   /* 0x101e5281: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x14u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101e5283: register eax, replayed as the entry ran it */
    cow_lift_101e5280(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
