/* f_0x1010acd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1010acd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1010acd0(Guest* g, int32_t param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    CowU8 local_8[8];
    cow_bridge_10109110(g, COW_IMG(COW_ADDR_LIFT_1010ACDF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      iVar1 = (int32_t)rd32((uint32_t)(param_1 + 0x18));
      if (iVar1 == 0) {
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036BF14);
    L_1010ad00:
        cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010AD09), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 0u);
      }
      else {
        if (iVar1 == 1) {
          puVar2 = COW_IMG(COW_ADDR_LIFT_1036BF10);
          goto L_1010ad00;
        }
        if (iVar1 == 2) {
          puVar2 = COW_IMG(COW_ADDR_LIFT_1036BF0C);
          goto L_1010ad00;
        }
      }
      switch(rd32((uint32_t)(param_1 + 0x1c))) {
      case 0:
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036BF08);
        break;
      case 1:
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036BF04);
        break;
      case 2:
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036BF00);
        break;
      case 3:
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036BEFC);
        break;
      case 4:
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036BEF8);
        break;
      case 5:
        puVar2 = COW_IMG(COW_ADDR_LIFT_1036BEF4);
        break;
      default:
        goto switchD_1010ad11_default;
      }
      cow_bridge_101093b0(g, COW_IMG(COW_ADDR_LIFT_1010AD49), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, g->eax, 0u);
    switchD_1010ad11_default:
      cow_bridge_101091b0(g, COW_IMG(COW_ADDR_LIFT_1010AD59), 1u, (const CowU32[]){ local_8 }, param_2, g->edx, g->eax, 0u);
      cow_bridge_101090a0(g, COW_IMG(COW_ADDR_LIFT_1010AD62), 0u, (const CowU32[]){ 0u }, local_8, g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_2); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 8 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1010acd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 0x8u;                      /* 0x1010acd0: 8 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1010acd3: push esi */
    g->esi = g->ecx;   /* 0x1010acd4: the value the entry loaded and the decompiler dropped */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0x4u)); }   /* 0x1010acd6: register ecx, replayed as the entry ran it */
    cow_lift_1010acd0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
