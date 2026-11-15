/* f_0x10152240 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10152240 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10152240(Guest* g, int32_t param_1, int32_t param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    switch(param_2) {
      case 1:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) != 0) {
          cow_bridge_10210fc0(g, COW_IMG(COW_ADDR_LIFT_10152272), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        if (((int32_t)rd32((uint32_t)(param_1 + 0xc0)) != 0) && ((int32_t)rd32((uint32_t)(param_1 + 0xc0)) != 1)) {
          if ((param_3 != 0) && (param_3 == (int32_t)rd32((uint32_t)(param_1 + 0x70)))) {
            cow_bridge_10151ad0(g, COW_IMG(COW_ADDR_LIFT_1015229D), 3u, (const CowU32[]){ 0x1a, param_1 + 0x6c, param_1 + 0x7c }, g->ecx, g->edx, g->eax, 12u);
          }
          wr32((uint32_t)(param_1 + 0xc0), 5);
          cow_bridge_10151140(g, COW_IMG(COW_ADDR_LIFT_101522B1), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_10151d90(g, COW_IMG(COW_ADDR_LIFT_101522B6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          return;
        }
        if (param_3 == 0) {
          return;
        }
        if (param_3 == (int32_t)rd32((uint32_t)(param_1 + 0x78))) {
          cow_bridge_10151ad0(g, COW_IMG(COW_ADDR_LIFT_101522E0), 3u, (const CowU32[]){ 0x1a, (CowU32)(param_1 + 0x74), (CowU32)(param_1 + 0x9c) }, g->ecx, g->edx, g->eax, 12u);
          wr8((uint32_t)(param_1 + 0x9c), 0);
          wr32((uint32_t)(param_1 + 0x78), 0);
          wr32((uint32_t)(param_1 + 0xc4), 0);
          wr32((uint32_t)(param_1 + 0xc0), 0);
          wr32((uint32_t)(param_1 + 0x74), 0);
          return;
        }
        if (param_3 == (int32_t)rd32((uint32_t)(param_1 + 0x70))) {
          cow_bridge_10151ad0(g, COW_IMG(COW_ADDR_LIFT_10152316), 3u, (const CowU32[]){ 0x1a, (CowU32)(param_1 + 0x6c), (CowU32)(param_1 + 0x7c) }, g->ecx, g->edx, g->eax, 12u);
          wr8((uint32_t)(param_1 + 0x7c), 0);
          wr32((uint32_t)(param_1 + 0x70), 0);
          wr32((uint32_t)(param_1 + 0xc0), 0);
          wr32((uint32_t)(param_1 + 0x6c), 0);
          return;
        }
        return;
      case 2:
        wr32((uint32_t)(param_1 + 0xc4), 4);
        return;
      default:
        goto switchD_10152256_caseD_3;
      case 4:
      case 5:
      case 7:
      case 8:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) != 0) {
          cow_bridge_10210fc0(g, COW_IMG(COW_ADDR_LIFT_1015238A), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        if (param_3 != 0) {
          if (param_3 == (int32_t)rd32((uint32_t)(param_1 + 0x70))) {
            iVar2 = param_1 + 0x7c;
            iVar1 = param_1 + 0x6c;
          }
          else {
            if (param_3 != (int32_t)rd32((uint32_t)(param_1 + 0x78))) goto L_101523f4;
            iVar2 = param_1 + 0x9c;
            iVar1 = param_1 + 0x74;
          }
          cow_bridge_10151ad0(g, COW_IMG(COW_ADDR_LIFT_10152364), 3u, (const CowU32[]){ 0x1a, iVar1, iVar2 }, g->ecx, g->edx, g->eax, 12u);
        }
    L_101523f4:
        if ((((int32_t)rd32((uint32_t)(param_1 + 0xc0)) == 0) || ((int32_t)rd32((uint32_t)(param_1 + 0xc0)) == 1)) && (param_2 == 7)) {
          wr32((uint32_t)(param_1 + 0x20), 0);
          wr32((uint32_t)(param_1 + 0x24), 0);
          wr32((uint32_t)(param_1 + 0x6c), 0);
          wr32((uint32_t)(param_1 + 0x70), 0);
          wr32((uint32_t)(param_1 + 0xc0), 0);
          return;
        }
        break;
      case 6:
        if ((int32_t)rd32((uint32_t)(param_1 + 0x24)) != 0) {
          cow_bridge_10210fc0(g, COW_IMG(COW_ADDR_LIFT_101523C3), 1u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0xc0)) == 0) {
          return;
        }
        if ((int32_t)rd32((uint32_t)(param_1 + 0xc0)) == 1) {
          return;
        }
        break;
      case 9:
        if (((int32_t)rd32((uint32_t)(param_1 + 0xc0)) != 0) && ((int32_t)rd32((uint32_t)(param_1 + 0xc0)) != 1)) {
          cow_bridge_10151140(g, COW_IMG(COW_ADDR_LIFT_10152355), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        }
        cow_bridge_10151ad0(g, COW_IMG(COW_ADDR_LIFT_101523F1), 3u, (const CowU32[]){ 0x1e, param_1 + 0x6c, param_1 + 0x7c }, g->ecx, g->edx, g->eax, 12u);
        cow_bridge_10151d90(g, COW_IMG(COW_ADDR_LIFT_1015236E), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        return;
      }
      cow_bridge_10151d90(g, COW_IMG(COW_ADDR_LIFT_101523A0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10151140(g, COW_IMG(COW_ADDR_LIFT_101523A7), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
    switchD_10152256_caseD_3:
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 12 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 12.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10152240(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10152240: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10152241: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10152242: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10152243: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x14u); g->edi = (uint32_t)(rd32(A)); }   /* 0x10152244: register edi, replayed as the entry ran it */
    g->esi = g->ecx;   /* 0x10152248: the value the entry loaded and the decompiler dropped */
    { g->eax = (uint32_t)((uint32_t)(g->edi + 0xFFFFFFFFu)); }   /* 0x1015224a: register eax, replayed as the entry ran it */
    cow_lift_10152240(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 12u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
