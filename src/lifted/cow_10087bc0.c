/* f_0x10087bc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10087bc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10087bc0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    int iVar3;
    CowU32 puVar4;
    cVar1 = cow_bridge_10087b20(g, COW_IMG(COW_ADDR_LIFT_10087BC5), 0u, (const CowU32[]){ 0u }, g->ecx, param_1, g->eax, 0u);
      if (cVar1 == '\0') {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      iVar2 = 0;
      iVar3 = 0;
      do {
        if (rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10482FEC) + 4u * (uint32_t)(iVar3))) != '\0') {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x80);
      iVar3 = 0;
      do {
        if (rd8((uint32_t)((int)COW_IMG(COW_ADDR_LIFT_1048306C) + iVar3)) != '\0') {
          iVar2 = iVar2 + 1;
        }
        iVar3 = iVar3 + 1;
      } while (iVar3 < 0x80);
      puVar4 = COW_IMG(COW_ADDR_LIFT_104830F8);
      do {
        iVar3 = 0;
        do {
          if ((rd32((uint32_t)puVar4) & 1 << ((CowU8)iVar3 & 0x1f)) != 0) {
            iVar2 = iVar2 + 1;
          }
          iVar3 = iVar3 + 1;
        } while (iVar3 < 0x20);
        puVar4 = puVar4 + 1;
      } while ((int)puVar4 < 0x10483118);
      g->eax = (CowU32)(iVar2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(edx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10087bc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->edx;   /* edx argument */

    cow_lift_10087bc0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
