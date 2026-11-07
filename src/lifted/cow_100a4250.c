/* f_0x100a4250 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100a4250 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100a4250(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU16 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU16 uVar5;
    iVar3 = rd32((uint32_t)param_1);
      if (iVar3 != 0) {
        uVar2 = rd16((uint32_t)(iVar3 + 4));
        if (1 < uVar2) {
          uVar5 = 1;
          iVar1 = uVar2 - 1;
          if (1 < iVar1) {
            uVar4 = 1;
            do {
              if (rd32((uint32_t)(uVar4 * 0x10 + 0x2c8 + iVar3)) != rd32((uint32_t)(iVar3 + 0x2c8))) break;
              uVar5 = uVar5 + 1;
              uVar4 = (CowU32)uVar5;
            } while ((int)uVar4 < iVar1);
          }
          cow_bridge_10314a10(g, COW_IMG(COW_ADDR_LIFT_100A42B9), 3u, (const CowU32[]){ iVar3 + 0x2c8, (CowU32)uVar5 * 0x10 + 0x2c8 + iVar3, ((CowU32)uVar2 - (CowU32)uVar5) * 0x10 }, g->ecx, g->edx, g->eax, 12u);
          wr16((uint32_t)(iVar3 + 4), rd16((uint32_t)(iVar3 + 4)) - uVar5);
        }
        if (rd16((uint32_t)(iVar3 + 4)) != 0) {
          g->eax = (CowU32)(rd32((uint32_t)(iVar3 + 0x2c8))); return;
        }
      }
      g->eax = (CowU32)(0); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100a4250(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100a4250: push esi */
    { uint32_t A = (uint32_t)(g->ecx); g->esi = (uint32_t)(rd32(A)); }   /* 0x100a4251: register esi, replayed as the entry ran it */
    cow_lift_100a4250(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
