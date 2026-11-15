/* f_0x10063b80 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10063b80 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10063b80(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 pvVar1;
    CowU32 puVar2;
    int iVar3;
    CowU32 this;
    CowU32 this_00;
    CowU32 puVar4;
    CowU32 puVar5;
    int iVar6;
    CowU32 local_4;
    if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) == 0) {
        pvVar1 = (CowU32)cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_10063B96), 1u, (const CowU32[]){ 40u }, param_1, g->edx, g->eax, 4u);
        if (pvVar1 == (CowU32)0x0) {
          pvVar1 = (CowU32)0x0;
        }
        else {
          pvVar1 = (CowU32)cow_bridge_10063460(g, COW_IMG(COW_ADDR_LIFT_10063BA4), 0u, (const CowU32[]){ 0u }, pvVar1, g->edx, g->eax, 0u);
        }
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), (int)pvVar1);
        cow_bridge_100634b0(g, COW_IMG(COW_ADDR_LIFT_10063BBE), 4u, (const CowU32[]){ rd32((uint32_t)param_1), 7, 0, 0 }, pvVar1, g->edx, g->eax, 0u);
        iVar3 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)));
        iVar6 = 0;
        puVar4 = rd32((uint32_t)(iVar3 + 0xc));
        puVar5 = rd32((uint32_t)(iVar3 + 0x10));
        local_4 = rd32((uint32_t)(iVar3 + 0x14));
        if (0 < rd32((uint32_t)param_1)) {
          do {
            local_4 = local_4 + 4u * (uint32_t)(1);
            puVar5 = puVar5 + 4u * (uint32_t)(1);
            puVar4 = puVar4 + 4u * (uint32_t)(1);
            puVar2 = (CowU32)cow_bridge_10063b50(g, COW_IMG(COW_ADDR_LIFT_10063BE7), 1u, (const CowU32[]){ iVar6 }, param_1, g->edx, g->eax, 0u);
            wr32((uint32_t)puVar4, rd32((uint32_t)puVar2));
            iVar3 = cow_bridge_10063b50(g, COW_IMG(COW_ADDR_LIFT_10063BF1), 1u, (const CowU32[]){ iVar6 }, this, g->edx, g->eax, 0u);
            wr32((uint32_t)puVar5, rd32((uint32_t)(iVar3 + 4)));
            iVar3 = cow_bridge_10063b50(g, COW_IMG(COW_ADDR_LIFT_10063BFD), 1u, (const CowU32[]){ iVar6 }, this_00, g->edx, g->eax, 0u);
            wr32((uint32_t)local_4, rd32((uint32_t)(iVar3 + 8)));
            iVar6 = iVar6 + 1;
          } while (iVar6 < rd32((uint32_t)param_1));
        }
        cow_bridge_100635b0(g, COW_IMG(COW_ADDR_LIFT_10063C22), 0u, (const CowU32[]){ 0u }, (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))), g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(rd32((uint32_t)(param_1 + 4u * (uint32_t)(1)))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10063b80(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10063b80: push ecx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10063b81: push esi */
    g->esi = g->ecx;   /* 0x10063b82: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x4u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10063b84: register eax, replayed as the entry ran it */
    cow_lift_10063b80(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
