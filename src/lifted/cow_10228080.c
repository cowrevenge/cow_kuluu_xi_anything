/* f_0x10228080 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10228080 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10228080(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, int32_t param_4, int32_t param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 this;
    uint64_t uVar2;
    CowU32 puVar3;
    CowU8 local_10[16];
    iVar1 = cow_bridge_10193850(g, COW_IMG(COW_ADDR_LIFT_10228090), 1u, (const CowU32[]){ 195u }, g->ecx, g->edx, g->eax, 4u);
      if (iVar1 == 0) {
        return;
      }
      iVar1 = cow_bridge_101039e0(g, COW_IMG(COW_ADDR_LIFT_102280A0), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      this = (CowU32)cow_bridge_10227930(g, COW_IMG(COW_ADDR_LIFT_102280B9), 1u, (const CowU32[]){ param_5 }, param_1, g->edx, g->eax, 0u);
      if (this == (CowU32)0x0) {
        return;
      }
      if ((int32_t)rd32((uint32_t)((int)param_1 + param_5 * 4 + 0x2f0)) == 0x7fffffff) {
        return;
      }
      uVar2 = cow_bridge_10227100(g, COW_IMG(COW_ADDR_LIFT_102280DB), 0u, (const CowU32[]){ 0u }, this, g->edx, g->eax, 0u);
      if ((int)uVar2 == 0xff) {
        return;
      }
      iVar1 = ((int)((uint64_t)uVar2 >> 0x20) + iVar1 * -0x3c + 0x3b) / 0x3c;
      if (iVar1 < 6) {
        return;
      }
      if (iVar1 < 0x57030) {
        if (iVar1 < 0xe10) {
          if (iVar1 < 0x3c) {
            puVar3 = COW_IMG(COW_ADDR_LIFT_10352FF0);
          }
          else {
            iVar1 = iVar1 / 0x3c;
            puVar3 = COW_IMG(COW_ADDR_LIFT_10386278);
          }
          goto L_1022816d;
        }
      }
      else {
        iVar1 = 0x57030;
      }
      iVar1 = iVar1 / 0xe10;
      puVar3 = COW_IMG(COW_ADDR_LIFT_1038627C);
    L_1022816d:
      cow_bridge_10312031(g, COW_IMG(COW_ADDR_LIFT_10228172), 3u, (const CowU32[]){ local_10, puVar3, iVar1 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_101c97b0(g, COW_IMG(COW_ADDR_LIFT_102281A0), 7u, (const CowU32[]){ param_3 + 0xe, param_4 + 0x14, local_10, 0x80808080, 0x3f59999a, 0x3f59999a, 1 }, g->ecx, g->edx, g->eax, 28u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 5 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 16 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 5 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10228080(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    g->esp -= 0x10u;                      /* 0x10228080: 16 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10228083: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10228084: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10228085: push edi */
    cow_lift_10228080(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 6 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
