/* f_0x101ad290 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101ad290 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101ad290(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    CowU32 pcVar2;
    int iVar3;
    pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD24);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_103378FC));
      do {
        cVar1 = rd8((uint32_t)pcVar2);
        wr8((uint32_t)((int)(param_1 + -0x40deb47) + (int)pcVar2), cVar1);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD24);
      do {
        cVar1 = rd8((uint32_t)pcVar2);
        wr8((uint32_t)((int)(param_1 + -0x40deb27) + (int)pcVar2), cVar1);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      iVar3 = -1;
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x42)), 2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x43)), 2);
      wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), param_2);
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD1C);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x44)), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD18);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x111), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD10);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x112), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD0C);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x113), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1036F9B0);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x45)), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD08);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x115), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD00);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x116), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACFC);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x117), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACF0);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x46)), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACEC);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x119), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACE0);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x11a), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACDC);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x11b), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACD4);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x47)), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACD0);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x11d), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACC4);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x11e), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACC0);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x11f), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACB4);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)(uint32_t)(param_1 + 4u * (uint32_t)(0x48)), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1037ACB0);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x121), ~(CowU8)iVar3);
      iVar3 = -1;
      pcVar2 = COW_IMG(COW_ADDR_LIFT_1034FFB8);
      do {
        if (iVar3 == 0) break;
        iVar3 = iVar3 + -1;
        cVar1 = rd8((uint32_t)pcVar2);
        pcVar2 = pcVar2 + 1;
      } while (cVar1 != '\0');
      wr8((uint32_t)((int)param_1 + 0x122), ~(CowU8)iVar3 - 1);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101ad290(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->edx = g->ecx;   /* 0x101ad290: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101ad292: push esi */
    g->eax = COW_IMG(COW_ADDR_LIFT_1037AD24);   /* 0x101ad293: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101ad298: push edi */
    { g->esi = (uint32_t)((uint32_t)(g->edx + 0x8u)); }   /* 0x101ad299: register esi, replayed as the entry ran it */
    cow_lift_101ad290(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
