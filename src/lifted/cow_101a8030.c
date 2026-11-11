/* f_0x101a8030 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a8030 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a8030(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    char cVar2;
    cVar1 = cow_bridge_10097d50(g, COW_IMG(COW_ADDR_LIFT_101A8036), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (cVar1 != '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)('\0') & 0xffu)); return;
      }
      cVar1 = (char)param_1;
      if ((cVar1 != '\x02') && (param_2 == '\0')) {
        cVar2 = cow_bridge_101a7d00(g, COW_IMG(COW_ADDR_LIFT_101A8054), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (cVar2 == '\0') {
          cow_bridge_10129d90(g, COW_IMG(COW_ADDR_LIFT_101A8065), 1u, (const CowU32[]){ 34u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)('\x01') & 0xffu)); return;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_106627E4), cow_bridge_100dc120(g, COW_IMG(COW_ADDR_LIFT_101A806E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u));
      }
      cVar2 = cow_bridge_100e5520(g, COW_IMG(COW_ADDR_LIFT_101A807E), 2u, (const CowU32[]){ param_1, param_3 }, g->ecx, g->edx, g->eax, 8u);
      if (cVar2 != '\0') {
        if (cVar1 == '\0') {
          cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101A8099), 2u, (const CowU32[]){ 191u, 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(cVar2) & 0xffu)); return;
        }
        if (((cVar1 == '\x01') || (cVar1 == '\x03')) || (cVar1 == '\x04')) {
          cow_bridge_10193830(g, COW_IMG(COW_ADDR_LIFT_101A80BD), 2u, (const CowU32[]){ 191u, 1u }, g->ecx, g->edx, g->eax, 8u);
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(cVar2) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a8030(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101a8030: push ebx */
    cow_lift_101a8030(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
