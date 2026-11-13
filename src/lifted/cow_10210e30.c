/* f_0x10210e30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10210e30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10210e30(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, int32_t param_6, CowU32 param_7, int32_t param_8)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if ((int32_t)rd32((uint32_t)(param_1 + 0x14)) != 0) {
        g->eax = (CowU32)(0); return;
      }
      if ((int16_t)rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x68)) != 0) {
        wr16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x68), 0);
      }
      wr32((uint32_t)(param_1 + 0x18), param_3);
      wr32((uint32_t)(param_1 + 0x14), param_2);
      wr32((uint32_t)(param_1 + 0x1c), param_4);
      wr32((uint32_t)(param_1 + 0x34), param_6);
      wr8((uint32_t)(param_1 + 0x3c), 0);
      if (param_7 == '\0') {
        wr8((uint32_t)(param_1 + 0x39), 0);
      }
      else {
        wr8((uint32_t)(param_1 + 0x39), rd8((uint32_t)(param_1 + 0x38)));
      }
      wr8((uint32_t)(param_1 + 0x3a), 0);
      if ((param_6 != 0) && (rd32(COW_IMG(COW_ADDR_LIFT_1057847C)) != 0)) {
        cow_bridge_10150cc0(g, COW_IMG(COW_ADDR_LIFT_10210EA0), 2u, (const CowU32[]){ param_6, 2 }, g->ecx, g->edx, g->eax, 0u);
      }
      iVar1 = cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_10210EB2), 3u, (const CowU32[]){ param_1 + 0x20, 1, 0 }, 274864184u, g->edx, g->eax, 0u);
      if (iVar1 == 0) {
        wr32((uint32_t)(param_1 + 0x14), 0);
        g->eax = (CowU32)(0); return;
      }
      if (param_5 == '\0') {
        cow_bridge_10118e90(g, COW_IMG(COW_ADDR_LIFT_10210ED2), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
      }
      wr32((uint32_t)(param_1 + 0x40), param_8);
      if (param_8 == 0) {
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x86), 1);
      }
      else {
        wr8((uint32_t)((int32_t)rd32((uint32_t)(param_1 + 8)) + 0x86), 0);
      }
      cow_bridge_102112b0(g, COW_IMG(COW_ADDR_LIFT_10210F02), 1u, (const CowU32[]){ 2 - (CowU32)(param_5 != '\0') }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 8 parameter(s), cleanup 28 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 28.
   Arguments: 1 register argument(s) [ecx], 7 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10210e30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_7 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    CowU32 param_8 = rd32((uint32_t)(sp0 + 4u + 0x18u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10210e30: push esi */
    g->esi = g->ecx;   /* 0x10210e31: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x14u); g->eax = (uint32_t)(rd32(A)); }   /* 0x10210e33: register eax, replayed as the entry ran it */
    cow_lift_10210e30(g, param_1, param_2, param_3, param_4, param_5, param_6, param_7, param_8);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 28u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
