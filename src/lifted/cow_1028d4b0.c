/* f_0x1028d4b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028d4b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028d4b0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 piVar2;
    int iVar3;
    CowU32 uVar4;
    int iVar5;
    iVar1 = param_2;
      if ((rd8((uint32_t)(rd32((uint32_t)(param_1 + 0x54)) + param_2 * 4)) & 0x20) == 0) {
        cow_bridge_102798f0(g, COW_IMG(COW_ADDR_LIFT_1028D4CC), 2u, (const CowU32[]){ param_1, param_2 }, 0u, 0u, g->eax, 0u);
        param_2 = 0;
        if (0 < rd32((uint32_t)(param_1 + 0x44))) {
          do {
            piVar2 = (CowU32)cow_bridge_10279890(g, COW_IMG(COW_ADDR_LIFT_1028D4E3), 2u, (const CowU32[]){ param_1, param_2 }, 0u, 0u, g->eax, 0u);
            if ((rd32((uint32_t)piVar2) == 0xb0001) && (iVar5 = 0, 0 < rd32((uint32_t)(piVar2 + 4u * (uint32_t)(10))))) {
              do {
                iVar3 = cow_bridge_1027c9a0(g, COW_IMG(COW_ADDR_LIFT_1028D500), 2u, (const CowU32[]){ piVar2, iVar5 }, 0u, 0u, g->eax, 0u);
                if (iVar3 + 0x24 == rd32((uint32_t)(rd32((uint32_t)(param_1 + 0x50)) + iVar1 * 4))) {
                  wr32((uint32_t)param_3, iVar5);
                  uVar4 = cow_bridge_10279b80(g, COW_IMG(COW_ADDR_LIFT_1028D53E), 2u, (const CowU32[]){ param_1, param_2 }, 0u, 0u, g->eax, 8u);
                  g->eax = (CowU32)(uVar4); return;
                }
                iVar5 = iVar5 + 1;
              } while (iVar5 < rd32((uint32_t)(piVar2 + 4u * (uint32_t)(10))));
            }
            param_2 = param_2 + 1;
          } while (param_2 < rd32((uint32_t)(param_1 + 0x44)));
        }
      }
      g->eax = (CowU32)(uVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028d4b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028d4b0: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x8u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x1028d4b1: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1028d4b5: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1028d4b6: register ebp, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->ebx + 0x54u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1028d4ba: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1028d4bd: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1028d4be: push edi */
    cow_lift_1028d4b0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
