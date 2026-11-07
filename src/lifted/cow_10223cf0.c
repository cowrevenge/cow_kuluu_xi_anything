/* f_0x10223cf0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10223cf0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10223cf0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    if (param_2 == 5) {
        if (param_3 == 1) {
          iVar1 = rd32((uint32_t)(param_1 + 0x14));
          if (iVar1 == 0) {
            cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10223D29), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667148)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
            wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667148)) + 0x68), 1);
          }
          else {
            if (iVar1 == 1) {
              cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10223D47), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667164)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
              wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667164)) + 0x6c), 1);
              return;
            }
            if (iVar1 == 2) {
              cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10223D65), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667170)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
              wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667170)) + 100), 1);
              return;
            }
          }
        }
      }
      else if ((param_2 == 6) || (param_2 == 8)) {
        iVar1 = rd32((uint32_t)(param_1 + 0x14));
        if (iVar1 == 0) {
          cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10223D98), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667148)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
        }
        else {
          if (iVar1 == 1) {
            cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10223DBD), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667164)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_10223D2E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
          if (iVar1 == 2) {
            cow_bridge_1015db80(g, COW_IMG(COW_ADDR_LIFT_10223DE2), 2u, (const CowU32[]){ rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10667170)) + 8)), 0 }, 274864184u, g->edx, g->eax, 0u);
            cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_10223D4C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            return;
          }
        }
        cow_bridge_10037e90(g, COW_IMG(COW_ADDR_LIFT_10223D6A), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [-], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10223cf0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    { uint32_t A = (uint32_t)(g->esp + 0x4u); g->eax = (uint32_t)((uint32_t)(int32_t)((int16_t)rd16(A))); }   /* 0x10223cf0: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x5u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x10223cf5: register eax, replayed as the entry ran it */
    cow_lift_10223cf0(g, param_1, param_2, param_3);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
