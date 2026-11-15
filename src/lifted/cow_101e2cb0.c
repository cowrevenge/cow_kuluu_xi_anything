/* f_0x101e2cb0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101e2cb0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101e2cb0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this;
    switch(param_2 + -1) {
      case 0:
      case 1:
      case 2:
      case 3:
      case 8:
        wr8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106634C8)) + 0x10), 1);
        g->eax = (CowU32)(1); return;
      case 4:
        cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_101E2CDB), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106634AC)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
        cow_bridge_10037b90(g, COW_IMG(COW_ADDR_LIFT_101E2CE0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((rd32(COW_IMG(COW_ADDR_LIFT_106634AC)) != 0) && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106634AC)) + 8)) != 0)) {
          wr8((uint32_t)((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106634AC)) + 8)) + 99), 1);
          cow_bridge_10118db0(g, COW_IMG(COW_ADDR_LIFT_101E2D0E), 2u, (const CowU32[]){ 9u, 0u }, rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106634AC)) + 8)), g->edx, g->eax, 0u);
          g->eax = (CowU32)(1); return;
        }
        break;
      case 5:
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101E2D24), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1015e910(g, COW_IMG(COW_ADDR_LIFT_101E2D33), 1u, (const CowU32[]){ 272102064u }, 274864184u, g->edx, g->eax, 0u);
        this = rd32(COW_IMG(COW_ADDR_LIFT_10578204));
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101E2D49), 2u, (const CowU32[]){ rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        cow_bridge_1013bf40(g, COW_IMG(COW_ADDR_LIFT_101E2D50), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
        cow_bridge_1015e530(g, COW_IMG(COW_ADDR_LIFT_101E2D64), 1u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106634BC)) + 8)) }, 274864184u, g->edx, g->eax, 0u);
        g->eax = (CowU32)(1); return;
      case 7:
        cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_101E2D8F), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_106634CC)) + 8)), 0 }, COW_IMG(COW_ADDR_LIFT_10621838), g->edx, g->eax, 0u);
        cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_101E2D94), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: stdcall, 2 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101e2cb0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x101e2cb0: register eax, replayed as the entry ran it */
    { { uint32_t a = g->eax; uint32_t r = (uint32_t)(a - 1u); g->eax = (uint32_t)(r); }; }   /* 0x101e2cb5: register eax, replayed as the entry ran it */
    cow_lift_101e2cb0(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
