/* f_0x1024c6a0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1024c6a0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1024c6a0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 piVar1;
    int iVar2;
    piVar1 = rd32((uint32_t)(param_1 + 0x74));
      if (((piVar1 != (CowU32)0x0) && (rd32((uint32_t)piVar1) != 0)) && (piVar1 != (CowU32)0x0)) {
        cow_bridge_10071ec0(g, COW_IMG(COW_ADDR_LIFT_1024C6BB), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        cow_bridge_10071050(g, COW_IMG(COW_ADDR_LIFT_1024C6C2), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0x74), 0);
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_105783EC)) != 0) {
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1024C6E1), 1u, (const CowU32[]){ 272046296u }, 274864184u, g->edx, g->eax, 0u);
      }
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106643A8)) + 0x40), 0);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1024C6F9), 1u, (const CowU32[]){ 272141512u }, 274864184u, g->edx, g->eax, 0u);
      iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10578478));
      wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10578478)) + 0x65), 0);
      wr32((uint32_t)(iVar2 + 0x68), 0x80808080);
      cow_bridge_10210fc0(g, COW_IMG(COW_ADDR_LIFT_1024C716), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_1024C725), 1u, (const CowU32[]){ 272045560u }, 274864184u, g->edx, g->eax, 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1024c6a0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    { uint32_t A = (uint32_t)(g->ecx + 0x74u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1024c6a0: register eax, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1024c6a3: push esi */
    { g->esi = (uint32_t)((uint32_t)(g->ecx + 0x74u)); }   /* 0x1024c6a4: register esi, replayed as the entry ran it */
    cow_lift_1024c6a0(g, param_1);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
