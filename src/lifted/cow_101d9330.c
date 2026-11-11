/* f_0x101d9330 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101d9330 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101d9330(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU16 uVar1;
    int iVar2;
    int iVar3;
    char cVar4;
    CowU32 piVar5;
    if (rd32(COW_IMG(COW_ADDR_LIFT_10663428)) != 0) {
        piVar5 = (CowU32)cow_bridge_1020a420(g, COW_IMG(COW_ADDR_LIFT_101D9349), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar2 = rd32(COW_IMG(COW_ADDR_LIFT_10663428));
        uVar1 = rd16((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10663428)) + 0x8c8));
        if (piVar5 != (CowU32)0x0) {
          if (param_2 == 1) {
            cVar4 = cow_bridge_1020a410(g, COW_IMG(COW_ADDR_LIFT_101D9499), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
            if (cVar4 != '\0') {
              cow_bridge_10037c50(g, COW_IMG(COW_ADDR_LIFT_101D94A2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              return;
            }
            if (rd32(COW_IMG(COW_ADDR_LIFT_1066342C)) != 0) {
              iVar3 = rd32((uint32_t)(piVar5 + 4u * (uint32_t)(1)));
              iVar2 = rd32((uint32_t)piVar5);
              cow_bridge_1020b3a0(g, COW_IMG(COW_ADDR_LIFT_101D94C3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_101d8800(g, COW_IMG(COW_ADDR_LIFT_101D94DA), 4u, (const CowU32[]){ (short)iVar3, 0, iVar2 == 4, 1 }, g->ecx, g->edx, g->eax, 0u);
            }
          }
          else if (param_2 == 2) {
            cow_bridge_10140d90(g, COW_IMG(COW_ADDR_LIFT_101D9458), 4u, (const CowU32[]){ 0, 0, COW_IMG(COW_ADDR_LIFT_101D9500), piVar5 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101D9426), 3u, (const CowU32[]){ 272100944u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            if (rd32((uint32_t)piVar5) == 4) {
              cow_bridge_1013e3b0(g, COW_IMG(COW_ADDR_LIFT_101D9485), 3u, (const CowU32[]){ 2u, 0u, 1u }, 2, g->edx, g->eax, 0u);
            }
            else {
              cow_bridge_1013e3b0(g, COW_IMG(COW_ADDR_LIFT_101D9492), 3u, (const CowU32[]){ 2u, 0u, 0u }, 2, g->edx, g->eax, 0u);
            }
          }
          else if (param_2 == 3) {
            cVar4 = rd8((uint32_t)(param_1 + 0x15));
            if (cVar4 == '\0') {
              cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101D943E), 3u, (const CowU32[]){ 272100964u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            }
            else if (cVar4 == '\x01') {
              cow_bridge_1015e350(g, COW_IMG(COW_ADDR_LIFT_101D946B), 3u, (const CowU32[]){ 272037656u, 1u, 0u }, 274864184u, g->edx, g->eax, 0u);
            }
            else if (cVar4 == '\x02') {
              cVar4 = cow_bridge_101d7760(g, COW_IMG(COW_ADDR_LIFT_101D93A3), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
              if (cVar4 == '\0') {
                cow_bridge_10104170(g, COW_IMG(COW_ADDR_LIFT_101D93D9), 3u, (const CowU32[]){ iVar2 + 0x7ec, 9, 0 }, g->ecx, g->edx, g->eax, 0u);
                if (rd32(COW_IMG(COW_ADDR_LIFT_10663448)) != 0) {
                  cow_bridge_101d76f0(g, COW_IMG(COW_ADDR_LIFT_101D93FF), 3u, (const CowU32[]){ 0u, 9u, 0u }, g->ecx, g->edx, g->eax, 0u);
                }
                cow_bridge_101d8140(g, COW_IMG(COW_ADDR_LIFT_101D93C4), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
              }
              else {
                cow_bridge_101d7660(g, COW_IMG(COW_ADDR_LIFT_101D93AD), 1u, (const CowU32[]){ uVar1 }, g->ecx, g->edx, g->eax, 0u);
                cow_bridge_101da6a0(g, COW_IMG(COW_ADDR_LIFT_101D93B5), 1u, (const CowU32[]){ uVar1 }, g->ebp, g->edx, g->eax, 0u);
                cow_bridge_101d8140(g, COW_IMG(COW_ADDR_LIFT_101D940E), 2u, (const CowU32[]){ 0u, 0u }, g->ecx, g->edx, g->eax, 0u);
              }
            }
          }
          cow_bridge_1015e790(g, COW_IMG(COW_ADDR_LIFT_101D94EA), 2u, (const CowU32[]){ rd32((uint32_t)(param_1 + 8)), 1 }, 274864184u, g->edx, g->eax, 0u);
        }
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101d9330(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101d9330: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101d9331: push ebp */
    g->ebp = g->ecx;   /* 0x101d9332: the value the entry loaded and the decompiler dropped */
    g->ecx = rd32(COW_IMG(COW_ADDR_LIFT_10663428));   /* 0x101d9334: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101d933a: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101d933b: push edi */
    cow_lift_101d9330(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
