/* f_0x102266e0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102266e0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102266e0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4, CowU32 param_5, CowU32 param_6)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    int iVar2;
    int iVar3;
    if (((-1 < param_5) && (param_5 < rd32((uint32_t)(param_1 + 0x44)))) &&
         (puVar1 = (CowU32)(rd32((uint32_t)(param_1 + 0x20)) + param_5 * 8), puVar1 != (CowU32)0x0))
      {
        iVar2 = cow_bridge_10226620(g, COW_IMG(COW_ADDR_LIFT_10226713), 1u, (const CowU32[]){ g->edi }, g->ecx, g->edx, g->eax, 0u);
        if (-1 < iVar2) {
          iVar3 = cow_bridge_102225f0(g, COW_IMG(COW_ADDR_LIFT_10226724), 1u, (const CowU32[]){ 2u }, g->ecx, g->edx, g->eax, 0u);
          if (param_6 != iVar3) {
            iVar2 = cow_bridge_10226d80(g, COW_IMG(COW_ADDR_LIFT_10226735), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
            if (iVar2 != 0) {
              param_6 = cow_bridge_102225f0(g, COW_IMG(COW_ADDR_LIFT_10226743), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 4u);
            }
          }
          if (((rd32((uint32_t)(param_1 + 0x30)) != param_5) && (rd32((uint32_t)(param_1 + 100)) == 2)) &&
             (rd32((uint32_t)(param_1 + 0x68)) == param_5)) {
            param_6 = cow_bridge_102225f0(g, COW_IMG(COW_ADDR_LIFT_10226761), 1u, (const CowU32[]){ 3u }, g->ecx, g->edx, g->eax, 4u);
          }
          iVar2 = cow_bridge_102265a0(g, COW_IMG(COW_ADDR_LIFT_10226772), 1u, (const CowU32[]){ rd32((uint32_t)puVar1) }, g->ecx, g->edx, g->eax, 0u);
          if (iVar2 != 0) {
            cow_bridge_10129f00(g, COW_IMG(COW_ADDR_LIFT_10226790), 5u, (const CowU32[]){ param_3 + 0x12, param_4, iVar2, 0, param_6 }, g->ecx, g->edx, g->eax, 20u);
          }
          iVar2 = cow_bridge_102265c0(g, COW_IMG(COW_ADDR_LIFT_1022679D), 1u, (const CowU32[]){ rd32((uint32_t)puVar1) }, g->ecx, g->edx, g->eax, 0u);
          if (iVar2 != 0) {
            iVar2 = cow_bridge_10220fc0(g, COW_IMG(COW_ADDR_LIFT_102267A7), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, g->eax, 4u);
            if (iVar2 != 0) {
              cow_bridge_1011fb60(g, COW_IMG(COW_ADDR_LIFT_102267C0), 5u, (const CowU32[]){ param_3, param_4, 0x80808080, 0, 0 }, g->ecx, g->edx, g->eax, 0u);
            }
          }
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 6 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 6 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102266e0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0x10u));
    CowU32 param_6 = rd32((uint32_t)(sp0 + 4u + 0x14u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102266e0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102266e1: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102266e2: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102266e3: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102266e4: register edi, replayed as the entry ran it */
    cow_lift_102266e0(g, param_1, param_2, param_3, param_4, param_5, param_6);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
