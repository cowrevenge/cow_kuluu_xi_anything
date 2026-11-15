/* f_0x102257d0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102257d0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102257d0(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4, int32_t param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    CowU32 uVar3;
    int iVar4;
    CowU32 this;
    if (((-1 < param_5) && (param_5 < (int32_t)rd32((uint32_t)((int)param_1 + 0x44)))) &&
         (puVar1 = (CowU32)((int32_t)rd32((uint32_t)((int)param_1 + 0x20)) + param_5 * 8),
         puVar1 != (CowU32)0x0)) {
        uVar3 = cow_bridge_10225680(g, COW_IMG(COW_ADDR_LIFT_10225805), 2u, (const CowU32[]){ param_1, rd32((uint32_t)puVar1) }, g->ecx, g->edx, g->eax, 0u);
        cVar2 = cow_bridge_102253e0(g, COW_IMG(COW_ADDR_LIFT_1022580B), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 4u);
        if (cVar2 != '\0') {
          param_6 = cow_bridge_102225f0(g, COW_IMG(COW_ADDR_LIFT_10225819), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
        }
        uVar3 = cow_bridge_10225680(g, COW_IMG(COW_ADDR_LIFT_1022582E), 1u, (const CowU32[]){ rd32((uint32_t)puVar1) }, param_1, g->edx, g->eax, 0u);
        cVar2 = cow_bridge_10225430(g, COW_IMG(COW_ADDR_LIFT_10225834), 1u, (const CowU32[]){ uVar3 }, g->ecx, g->edx, g->eax, 4u);
        if (cVar2 != '\0') {
          param_6 = cow_bridge_102225f0(g, COW_IMG(COW_ADDR_LIFT_10225842), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
        }
        if ((((int32_t)rd32((uint32_t)((int)param_1 + 0x30)) != param_5) && ((int32_t)rd32((uint32_t)((int)param_1 + 0x6c)) == 2)) &&
           ((int32_t)rd32((uint32_t)((int)param_1 + 0x70)) == param_5)) {
          param_6 = cow_bridge_102225f0(g, COW_IMG(COW_ADDR_LIFT_1022585E), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 4u);
        }
        iVar4 = cow_bridge_10225560(g, COW_IMG(COW_ADDR_LIFT_1022586D), 1u, (const CowU32[]){ rd32((uint32_t)puVar1) }, param_1, g->edx, g->eax, 0u);
        if (iVar4 != 0) {
          cow_bridge_10129f00(g, COW_IMG(COW_ADDR_LIFT_10225887), 5u, (const CowU32[]){ param_3 + 0x12, param_4, iVar4, 0, param_6 }, g->ecx, g->edx, g->eax, 20u);
        }
        this = (CowU32)cow_bridge_10220fb0(g, COW_IMG(COW_ADDR_LIFT_1022588F), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (this != (CowU32)0x0) {
          cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_102258A6), 5u, (const CowU32[]){ param_3, param_4, 0x80808080, 0, 0 }, this, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102257d0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102257d0: push ebx */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->ebx = (uint32_t)(rd32(A)); }   /* 0x102257d1: register ebx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102257d5: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102257d6: push edi */
    cow_lift_102257d0(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
