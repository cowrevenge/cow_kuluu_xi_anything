/* f_0x102e232a - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102e232a (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102e232a(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 piVar2;
    CowU8 local_28[8];
    int local_20;
    int local_1c;
    int local_18;
    int local_14;
    int local_10;
    int local_c;
    int local_8;
    local_10 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x416)));
      local_14 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x419)));
      local_18 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(6)));
      local_1c = rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)));
      local_20 = rd32((uint32_t)(param_1 + 4u * (uint32_t)(4)));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x419)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x41a))));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x416)), 1);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), (int)local_28);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), (int)COW_IMG(COW_ADDR_LIFT_103CCB50));
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), 0);
      if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) != 1) {
        piVar1 = param_1 + 4u * (uint32_t)(0x412);
        local_8 = rd32((uint32_t)piVar1);
        piVar2 = param_1 + 4u * (uint32_t)(0x413);
        local_c = rd32((uint32_t)piVar2);
        wr32((uint32_t)piVar1, 1);
        wr32((uint32_t)piVar2, (int)(param_1 + 4u * (uint32_t)(7)));
        cow_bridge_102e17b2(g, COW_IMG(COW_ADDR_LIFT_102E23AA), 1u, (const CowU32[]){ (g->esi + 28u) }, g->esi, g->edx, (g->esi + 28u), 0u);
        wr32((uint32_t)piVar1, local_8);
        wr32((uint32_t)piVar2, local_c);
      }
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x8u))), COW_IMG(COW_ADDR_LIFT_102E23C3), 3u, (const CowU32[]){ 0, 0, param_1 + 4u * (uint32_t)(7) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_indirect(g, rd32((uint32_t)((rd32((uint32_t)(param_1)) + 0x4u))), COW_IMG(COW_ADDR_LIFT_102E23CD), 3u, (const CowU32[]){ 0, 0, param_1 + 4u * (uint32_t)(7) }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x416)), local_10);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x419)), local_14);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), local_18);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), local_1c);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(4)), local_20);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102e232a(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102e232a: push ebp */
    g->ebp = g->esp;                       /* 0x102e232b: mov ebp, esp */
    g->esp -= 0x24u;                      /* 0x102e232d: 36 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102e2330: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102e2331: push esi */
    g->esi = g->ecx;   /* 0x102e2332: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x1058u); g->eax = (uint32_t)(rd32(A)); }   /* 0x102e2334: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x1068u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x102e233a: register ecx, replayed as the entry ran it */
    cow_lift_102e232a(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
