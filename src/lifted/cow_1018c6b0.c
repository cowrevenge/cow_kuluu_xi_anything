/* f_0x1018c6b0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1018c6b0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1018c6b0(Guest* g, int32_t param_1, int32_t param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0xc));
      if (iVar1 != 0) {
        cow_bridge_1018d100(g, COW_IMG(COW_ADDR_LIFT_1018C6C2), 0u, (const CowU32[]){ 0u }, g->edi, g->edx, g->eax, 0u);
        cow_bridge_1002c8b0(g, COW_IMG(COW_ADDR_LIFT_1018C6C8), 1u, (const CowU32[]){ g->edi }, g->ecx, g->edx, g->eax, 4u);
        wr32((uint32_t)(param_1 + 0xc), 0);
      }
      iVar1 = cow_bridge_1002c890(g, COW_IMG(COW_ADDR_LIFT_1018C6D9), 1u, (const CowU32[]){ 104u }, g->ecx, g->edx, g->eax, 4u);
      if (iVar1 == 0) {
        uVar2 = 0;
      }
      else {
        uVar2 = cow_bridge_1018d0d0(g, COW_IMG(COW_ADDR_LIFT_1018C6E7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)(param_1 + 0xc), uVar2);
      cow_bridge_1018d130(g, COW_IMG(COW_ADDR_LIFT_1018C6F7), 1u, (const CowU32[]){ 64u }, g->ecx, g->edx, g->eax, 0u);
      if ((int32_t)rd32((uint32_t)(param_2 + 0x70)) != 0) {
        wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 8), rd32((uint32_t)((int32_t)rd32((uint32_t)(param_2 + 0x70)) + 0x78)));
        uVar2 = cow_bridge_1018c760(g, COW_IMG(COW_ADDR_LIFT_1018C717), 1u, (const CowU32[]){ rd32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 8)) }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 4), uVar2);
      }
      wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0xc), param_3);
      wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x10), param_4);
      wr32((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x18), 0);
      wr16((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 0xc)) + 0x1e), param_5);
      wr8((uint32_t)(param_1 + 2), rd8((uint32_t)(param_1 + 2)) | 1);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 20 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 20.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1018c6b0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1018c6b0: push esi */
    g->esi = g->ecx;   /* 0x1018c6b1: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1018c6b3: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0xCu); g->edi = (uint32_t)(rd32(A)); }   /* 0x1018c6b4: register edi, replayed as the entry ran it */
    cow_lift_1018c6b0(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 20u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
