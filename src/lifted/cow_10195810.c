/* f_0x10195810 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10195810 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10195810(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 pcVar2;
    CowU32 pcVar3;
    _Bool bVar4;
      
      iVar1 = 9;
      bVar4 = 1;
      pcVar2 = param_1;
      pcVar3 = COW_IMG(COW_ADDR_LIFT_1037997C);
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)pcVar2) == rd8((uint32_t)pcVar3);
        pcVar2 = pcVar2 + 1;
        pcVar3 = pcVar3 + 1;
      } while (bVar4);
      if (bVar4) {
        iVar1 = cow_bridge_10310b70(g, COW_IMG(COW_ADDR_LIFT_1019582E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 0u, 0u);
        if (iVar1 == 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_106626C4), 0);
        }
        else if (iVar1 == 1) {
          wr32(COW_IMG(COW_ADDR_LIFT_106626C4), 1);
        }
        else {
          if (iVar1 != 2) {
            g->eax = (CowU32)((CowU32)0x0); return;
          }
          wr32(COW_IMG(COW_ADDR_LIFT_106626C4), 2);
        }
      }
      iVar1 = 9;
      bVar4 = 1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_10379970);
      do {
        if (iVar1 == 0) break;
        iVar1 = iVar1 + -1;
        bVar4 = rd8((uint32_t)param_1) == rd8((uint32_t)pcVar2);
        param_1 = param_1 + 1;
        pcVar2 = pcVar2 + 1;
      } while (bVar4);
      if (bVar4) {
        iVar1 = cow_bridge_10310b7b(g, COW_IMG(COW_ADDR_LIFT_1019587A), 0u, (const CowU32[]){ 0u }, 9u, 0u, 0u, 0u);
        if (iVar1 != 0) {
          if (iVar1 == 1) {
            wr32(COW_IMG(COW_ADDR_LIFT_106626C4), 1);
            g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_106626AC)); return;
          }
          g->eax = (CowU32)((CowU32)0x0); return;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_106626C4), 0);
      }
      g->eax = (CowU32)(COW_IMG(COW_ADDR_LIFT_106626AC)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebx], frame pointer no, 0 locals, pops [ebx], ret 4.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10195810(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10195810: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x10195811: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10195815: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10195816: push edi */
    g->edi = COW_IMG(COW_ADDR_LIFT_1037997C);   /* 0x10195817: the value the entry loaded and the decompiler dropped */
    g->esi = g->ebx;   /* 0x1019581c: the value the entry loaded and the decompiler dropped */
    g->ecx = 9u;   /* 0x1019581e: the value the entry loaded and the decompiler dropped */
    g->eax = 0u;   /* 0x10195823: the value the entry loaded and the decompiler dropped */
    cow_lift_10195810(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
