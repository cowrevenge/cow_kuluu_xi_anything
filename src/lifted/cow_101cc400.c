/* f_0x101cc400 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101cc400 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101cc400(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    int iVar2;
    CowU32 pbVar3;
    CowU32 pbVar4;
    _Bool bVar5;
      
      iVar2 = cow_bridge_101cc510(g, COW_IMG(COW_ADDR_LIFT_101CC406), 0u, (const CowU32[]){ 0u }, param_1, param_2, g->eax, 0u);
      if (iVar2 == 0) {
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(0) & 0xffu)); return;
      }
      pbVar3 = (CowU32)cow_bridge_100fcdc0(g, COW_IMG(COW_ADDR_LIFT_101CC415), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      if (pbVar3 == (CowU32)0x0) {
        g->eax = (CowU32)(0); return;
      }
      if ((int16_t)rd16((uint32_t)(iVar2 + 0x210)) == 0) {
        pbVar4 = (CowU32)(iVar2 + 0x7c);
      }
      else {
        pbVar4 = (CowU32)(iVar2 + 0x214);
      }
      while( 1 ) {
        bVar1 = rd8((uint32_t)pbVar3);
        bVar5 = bVar1 < rd8((uint32_t)pbVar4);
        if (bVar1 != rd8((uint32_t)pbVar4)) break;
        if (bVar1 == 0) {
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        bVar1 = rd8((uint32_t)(pbVar3 + 1u * (uint32_t)(1)));
        bVar5 = bVar1 < rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)));
        if (bVar1 != rd8((uint32_t)(pbVar4 + 1u * (uint32_t)(1)))) break;
        pbVar3 = pbVar3 + 2;
        pbVar4 = pbVar4 + 2;
        if (bVar1 == 0) {
          g->eax = (CowU32)(1); return;
        }
      }
      iVar2 = (1 - (CowU32)bVar5) - (CowU32)(bVar5 != 0);
      g->eax = (CowU32)((((uint32_t)(((CowU32)iVar2 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(iVar2 == 0) & 0xffu))); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101cc400(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101cc400: push esi */
    cow_lift_101cc400(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 1 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
