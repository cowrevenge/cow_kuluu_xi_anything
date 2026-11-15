/* f_0x101f0810 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101f0810 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101f0810(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    short sVar1;
    char cVar2;
    CowU16 extraout_var;
    cVar2 = cow_bridge_101cc3e0(g, COW_IMG(COW_ADDR_LIFT_101F0817), 0u, (const CowU32[]){ 0u }, g->ecx, param_1, g->eax, 0u);
      if (cVar2 == '\0') {
        sVar1 = rd16((uint32_t)rd32((uint32_t)(((int)param_2 + 0x14b4))));
        if (((sVar1 == 8) || (sVar1 == 0x16)) || (sVar1 == 0x17)) {
          g->eax = (CowU32)(0x80909040); return;
        }
        cVar2 = cow_bridge_10131f10(g, COW_IMG(COW_ADDR_LIFT_101F085B), 2u, (const CowU32[]){ (((uint32_t)(((CowU32)g->edx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_1 + 2u * (uint32_t)(1)))) & 0xffu)), rd32(COW_IMG(COW_ADDR_LIFT_10663780)) }, rd32(COW_IMG(COW_ADDR_LIFT_105781A8)), g->edx, g->eax, 0u);
        if (cVar2 == '\0') {
          cVar2 = cow_bridge_1015b6c0(g, COW_IMG(COW_ADDR_LIFT_101F0894), 0u, (const CowU32[]){ 0u }, param_2, g->edx, g->eax, 0u);
          g->eax = (CowU32)(-(CowU32)(cVar2 != '\0') & 0x80909040); return;
        }
        if (rd8((uint32_t)rd32((uint32_t)(((int)param_2 + 0x151c)))) != '\0') {
          cVar2 = cow_bridge_100febe0(g, COW_IMG(COW_ADDR_LIFT_101F0877), 2u, (const CowU32[]){ (((uint32_t)(extraout_var) & 0xffffu) << 16 | ((uint32_t)(rd16((uint32_t)param_1)) & 0xffffu)), param_1 + 2u * (uint32_t)(8) }, g->ecx, g->edx, g->eax, 8u);
          g->eax = (CowU32)((-(CowU32)(cVar2 != '\0') & 0x3050) + 0x80404040); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 8.
   Arguments: 1 register argument(s) [edx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101f0810(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101f0810: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101f0811: push edi */
    cow_lift_101f0810(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
