/* f_0x1012ada0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1012ada0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1012ada0(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 uVar3;
    iVar2 = cow_bridge_10081550(g, COW_IMG(COW_ADDR_LIFT_1012ADAF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if ((iVar2 == 0) || (rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) == 0)) {
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1012AE5F), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      iVar2 = 0;
      if (rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)) != 0) {
        iVar2 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)))));
      }
      cVar1 = cow_bridge_10087070(g, COW_IMG(COW_ADDR_LIFT_1012ADE3), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 4u);
      if ((cVar1 != '\0') ||
         ((iVar2 != 0 && (((int32_t)rd32((uint32_t)(iVar2 + 0x170)) == 2 || ((int32_t)rd32((uint32_t)(iVar2 + 0x170)) == 3)))))) {
        cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_1012AE73), 2u, (const CowU32[]){ rd32((uint32_t)((int)param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        return;
      }
      uVar3 = cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_1012AE05), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x14), uVar3);
      uVar3 = cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_1012AE0F), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 8u);
      wr32((uint32_t)((int)param_1 + 0x18), uVar3);
      iVar2 = 1;
      do {
        cow_bridge_101192b0(g, COW_IMG(COW_ADDR_LIFT_1012AE24), 2u, (const CowU32[]){ iVar2, 0 }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = iVar2 + 1;
      } while (iVar2 < 0xe);
      wr16((uint32_t)((int)param_1 + 0x50), 0);
      wr8((uint32_t)((int)param_1 + 0x52), 1);
      wr32((uint32_t)((int)param_1 + 0x60), 0x42700000);
      wr32(COW_IMG(COW_ADDR_LIFT_10578174), 0);
      wr8((uint32_t)((int32_t)rd32((uint32_t)((int)param_1 + 8)) + 0x84), 0);
      wr8((uint32_t)((int)param_1 + 0x53), 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1012ada0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1012ada0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1012ada1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1012ada2: push edi */
    g->edi = g->ecx;   /* 0x1012ada3: the value the entry loaded and the decompiler dropped */
    g->ecx = COW_IMG(COW_ADDR_LIFT_1047D600);   /* 0x1012ada5: the value the entry loaded and the decompiler dropped */
    cow_lift_1012ada0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
