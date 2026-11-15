/* f_0x10109430 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10109430 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10109430(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    CowU32 pcVar3;
    CowU8 local_8[8];
    cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_1010943F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((((int32_t)rd32((uint32_t)(g->edx + 4)) != 0) &&
          (pcVar3 = rd8((uint32_t)((int32_t)rd32((uint32_t)(g->edx + 4)) + 4)), pcVar3 != (CowU32)0x0)) &&
         ((short)param_3 != 0)) {
        uVar1 = 0;
        if ((CowU16)param_2 != 0) {
          do {
            if (rd8((uint32_t)pcVar3) == '\0') break;
            pcVar3 = pcVar3 + 1;
            uVar1 = uVar1 + 1;
          } while (uVar1 < (CowU16)param_2);
        }
        if ((short)param_3 < 1) {
          cow_bridge_101092c0(g, COW_IMG(COW_ADDR_LIFT_101094A1), 1u, (const CowU32[]){ pcVar3 }, local_8, g->edx, g->eax, 0u);
        }
        else {
          iVar2 = 0;
          if (0 < (short)param_3) {
            do {
              if (rd8((uint32_t)(pcVar3 + 1u * (uint32_t)((short)iVar2))) == '\0') break;
              iVar2 = iVar2 + 1;
            } while ((short)iVar2 < (short)param_3);
          }
          cow_bridge_10109340(g, COW_IMG(COW_ADDR_LIFT_10109495), 2u, (const CowU32[]){ pcVar3, iVar2 }, local_8, g->edx, g->eax, 0u);
        }
      }
      cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_101094B1), 1u, (const CowU32[]){ local_8 }, param_1, g->edx, g->eax, 0u);
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_101094BA), 0u, (const CowU32[]){ 0u }, local_8, g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 8 locals, pops [esi], ret 12.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10109430(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 0x8u;                      /* 0x10109430: 8 bytes of locals */
    g->edx = g->ecx;   /* 0x10109433: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esp)); }   /* 0x10109435: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10109439: push esi */
    cow_lift_10109430(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */
