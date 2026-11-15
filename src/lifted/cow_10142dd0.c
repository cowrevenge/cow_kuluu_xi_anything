/* f_0x10142dd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10142dd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10142dd0(Guest* g, CowU32 param_1, int32_t param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    iVar2 = cow_bridge_101f7100(g, COW_IMG(COW_ADDR_LIFT_10142DE0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (iVar2 == 0) {
        uVar3 = 0x2c3;
      }
      else if (iVar2 == 1) {
        uVar3 = 0x328;
      }
      else {
        uVar3 = 0x2be;
      }
      uVar3 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10142E05), 2u, (const CowU32[]){ 0xe, uVar3 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_1013a320(g, COW_IMG(COW_ADDR_LIFT_10142E16), 2u, (const CowU32[]){ uVar3, 1 }, g->ecx, g->edx, g->eax, 0u);
      if ((char)param_3 != '\0') {
        if ((((int32_t)rd32((uint32_t)(param_2 + 0x38)) != 0) && (((int16_t)(iVar2) < (int16_t)((int16_t)rd16((uint32_t)(param_2 + 0x20)))))) &&
           (iVar1 = (int32_t)rd32((uint32_t)(param_2 + 0x38)) + iVar2 * 0x54, iVar1 != 0)) {
          iVar1 = (int32_t)rd32((uint32_t)(iVar1 + 0x48));
          if (iVar1 < 0x7400) {
            cow_bridge_1013e2f0(g, COW_IMG(COW_ADDR_LIFT_10142E75), 2u, (const CowU32[]){ 0u, 0u }, rd32(COW_IMG(COW_ADDR_LIFT_10578204)), g->edx, g->eax, 0u);
          }
          else if ((int32_t)rd32((uint32_t)((int)rd32(COW_IMG(COW_ADDR_LIFT_10578204)) + 8)) != 0) {
            cow_bridge_1013e260(g, COW_IMG(COW_ADDR_LIFT_10142E63), 4u, (const CowU32[]){ iVar1, 0, 0, 0 }, rd32(COW_IMG(COW_ADDR_LIFT_10578204)), g->edx, g->eax, 0u);
            wr32((uint32_t)((int)param_1 + 0x1c), iVar2);
            return;
          }
        }
        wr32((uint32_t)((int)param_1 + 0x1c), iVar2);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10142dd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10142dd0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10142dd1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10142dd2: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10142dd3: register edi, replayed as the entry ran it */
    g->ebx = g->ecx;   /* 0x10142dd7: the value the entry loaded and the decompiler dropped */
    g->ecx = g->edi;   /* 0x10142dd9: the value the entry loaded and the decompiler dropped */
    cow_lift_10142dd0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
