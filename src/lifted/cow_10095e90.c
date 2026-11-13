/* f_0x10095e90 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10095e90 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10095e90(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar2;
    CowU32 uVar3;
    _Bool bVar1;
      
      bVar1 = 1;
      uVar3 = rd32((uint32_t)(param_1 + 0x120)) >> 5;
      switch(rd32((uint32_t)(param_1 + 0x170))) {
      case 2:
      case 3:
      case 7:
      case 0x21:
      case 0x2c:
      case 0x2f:
      case 0x30:
      case 0x3f:
      case 0x40:
      case 0x41:
      case 0x42:
      case 0x43:
      case 0x44:
      case 0x45:
      case 0x46:
      case 0x47:
      case 0x48:
      case 0x49:
      case 0x4a:
      case 0x4b:
      case 0x4c:
      case 0x4d:
      case 0x4e:
      case 0x4f:
      case 0x50:
      case 0x51:
      case 0x52:
      case 0x53:
        if ((uVar3 & 1) != 0) {
          bVar1 = 0;
        }
      }
      cVar2 = cow_bridge_100956c0(g, COW_IMG(COW_ADDR_LIFT_10095EDA), 1u, (const CowU32[]){ 255u }, g->ecx, g->edx, g->eax, 0u);
      if (((((cVar2 != '\0') || (cVar2 = cow_bridge_10095680(g, COW_IMG(COW_ADDR_LIFT_10095EEA), 1u, (const CowU32[]){ 255u }, g->ecx, g->edx, g->eax, 0u), cVar2 != '\0')) ||
           (cVar2 = cow_bridge_100956a0(g, COW_IMG(COW_ADDR_LIFT_10095EF8), 1u, (const CowU32[]){ 255u }, g->ecx, g->edx, g->eax, 0u), cVar2 != '\0')) || (cVar2 = cow_bridge_10095790(g, COW_IMG(COW_ADDR_LIFT_10095F06), 1u, (const CowU32[]){ 255u }, g->ecx, g->edx, g->eax, 0u), cVar2 != '\0'))
         && ((uVar3 & 1) != 0)) {
        bVar1 = 0;
      }
      if ((rd32((uint32_t)(param_1 + 0x120)) >> 7 & 1) != 0) {
        bVar1 = 0;
      }
      if ((rd32((uint32_t)(param_1 + 0x120)) >> 4 & 1) == 0) {
        if (((uVar3 & 1) != 0) && (!bVar1)) {
          cow_bridge_10092900(g, COW_IMG(COW_ADDR_LIFT_10095F47), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)(param_1 + 0xee), 0);
          wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) & 0xffffffdf | 0x10);
        }
      }
      else {
        if ((int16_t)rd16((uint32_t)(param_1 + 0x166)) == 0) {
          cow_bridge_10092900(g, COW_IMG(COW_ADDR_LIFT_10095F7E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x128), rd32((uint32_t)(param_1 + 0x128)) & 0xbfffffff);
          wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) & 0xffffffcf);
          wr8((uint32_t)(param_1 + 0xee), 0);
          return;
        }
        if (bVar1) {
          cow_bridge_10092900(g, COW_IMG(COW_ADDR_LIFT_10095FBA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr8((uint32_t)(param_1 + 0xee), 2);
          wr32((uint32_t)(param_1 + 0x128), rd32((uint32_t)(param_1 + 0x128)) | 0x40000000);
          wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) & 0xffffffef | 0x20);
          return;
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ecx, ebx, esi], frame pointer no, 0 locals, pops [esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10095e90(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10095e90: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10095e91: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10095e92: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->esi = (uint32_t)(rd32(A)); }   /* 0x10095e93: register esi, replayed as the entry ran it */
    cow_lift_10095e90(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
