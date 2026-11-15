/* f_0x101139c0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101139c0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101139c0(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    CowU32 uVar2;
    CowU32 piVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    CowU32 local_14;
    CowU8 local_10[8];
    CowU32 local_8;
    wr32((uint32_t)(param_3 + 4u * (uint32_t)(1)), rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0x80c)) + 4)));
      cow_bridge_1010f570(g, COW_IMG(COW_ADDR_LIFT_101139FE), 2u, (const CowU32[]){ local_10, rd32((uint32_t)(param_1 + 0x8f0)) }, g->ecx, g->edx, g->eax, 0u);
      uVar2 = (int)(param_3 + 4u * (uint32_t)(2)) + (4 - param_2);
      piVar3 = local_8;
      puVar4 = param_3 + 4u * (uint32_t)(2);
      while (((rd32((uint32_t)(piVar3 + 4u * (uint32_t)(1))) != 0 && (rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2))) != 0)) && (uVar2 < 0x104))) {
        puVar5 = puVar4 + 4u * (uint32_t)(1);
        uVar2 = uVar2 + 4;
        wr32((uint32_t)puVar4, rd32((uint32_t)((int32_t)rd32((uint32_t)(rd32((uint32_t)piVar3) + 4)) + 4)));
        piVar1 = (CowU32)rd32((uint32_t)(piVar3 + 4u * (uint32_t)(2)));
        puVar4 = puVar5;
        if (piVar1 != (CowU32)0x0) {
          piVar3 = piVar1;
          local_8 = piVar1;
        }
      }
      local_14 = (CowU32)(((uint32_t)((char)puVar4 - (char)param_3) & 0xffu) << 8 | ((uint32_t)(1) & 0xffu));
      wr32((uint32_t)param_3, local_14);
      cow_bridge_1010f560(g, COW_IMG(COW_ADDR_LIFT_10113A5D), 0u, (const CowU32[]){ 0u }, local_10, g->edx, g->eax, 0u);
      g->eax = (CowU32)(puVar4); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 20 locals, pops [ebx], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101139c0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    g->esp -= 0x14u;                      /* 0x101139c0: 20 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->eax = (uint32_t)(rd32(A)); }   /* 0x101139c3: register eax, replayed as the entry ran it */
    cow_lift_101139c0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
