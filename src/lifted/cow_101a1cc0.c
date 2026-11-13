/* f_0x101a1cc0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101a1cc0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101a1cc0(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    char cVar2;
    CowU32 pcVar3;
    int iVar4;
    CowU32 uVar5;
    char local_40[64];
    if ((int32_t)rd32((uint32_t)(param_1 + 0x21c4)) != -1) {
        if (rd32((uint32_t)rd32(COW_IMG(COW_ADDR_LIFT_10456A28))) != 0x60) {
          cow_bridge_101a1cb0(g, COW_IMG(COW_ADDR_LIFT_101A1CE5), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        }
        if (((int8_t)rd8((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0x59)) == '\0') && ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_1057876C)) + 0xc4)) == 0)) {
          iVar4 = (int32_t)rd32((uint32_t)(param_1 + 0x21c4));
          pcVar3 = (CowU32)cow_bridge_101a1910(g, COW_IMG(COW_ADDR_LIFT_101A1D15), 1u, (const CowU32[]){ iVar4 }, g->ecx, g->edx, g->eax, 0u);
          if ((pcVar3 == (CowU32)0x0) || (rd8((uint32_t)pcVar3) == '\0')) {
            wr32((uint32_t)(param_1 + 0x21c4), 0xffffffff);
            g->eax = (CowU32)(0); return;
          }
          if ((rd8((uint32_t)pcVar3) == '/') && (rd8((uint32_t)(pcVar3 + 1u * (uint32_t)(1))) == '/')) {
            wr32((uint32_t)(param_1 + 0x21c4), iVar4 + 1);
            g->eax = (CowU32)(1); return;
          }
          iVar4 = -(int)pcVar3;
          do {
            cVar2 = rd8((uint32_t)pcVar3);
            wr8((uint32_t)(pcVar3 + 1u * (uint32_t)((int)(local_40 + iVar4))), cVar2);
            pcVar3 = pcVar3 + 1;
          } while (cVar2 != '\0');
          puVar1 = (CowU32)(param_1 + 0x21c8);
          if ((int32_t)rd32((uint32_t)(param_1 + 0x21c8)) == 0) {
            iVar4 = cow_bridge_101a2480(g, COW_IMG(COW_ADDR_LIFT_101A1DA0), 3u, (const CowU32[]){ local_40, param_1 + 0x21cc, puVar1 }, g->ecx, g->edx, g->eax, 0u);
            if (iVar4 == 0) {
              wr32((uint32_t)(param_1 + 0x21c4), (int32_t)rd32((uint32_t)(param_1 + 0x21c4)) + 1);
              cow_bridge_10080dc0(g, COW_IMG(COW_ADDR_LIFT_101A1DD5), 2u, (const CowU32[]){ local_40, 2 }, g->ecx, g->edx, g->eax, 8u);
              g->eax = (CowU32)(1); return;
            }
            wr32((uint32_t)(param_1 + 0x21c4), (int32_t)rd32((uint32_t)(param_1 + 0x21c4)) + 1);
            g->eax = (CowU32)(1); return;
          }
          iVar4 = cow_bridge_100dc120(g, COW_IMG(COW_ADDR_LIFT_101A1D69), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if (rd32((uint32_t)puVar1) <= (CowU32)(iVar4 - (int32_t)rd32((uint32_t)(param_1 + 0x21cc)))) {
            wr32((uint32_t)puVar1, 0);
            g->eax = (CowU32)(1); return;
          }
        }
        else {
          uVar5 = cow_bridge_100dc120(g, COW_IMG(COW_ADDR_LIFT_101A1DFA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_1 + 0x21cc), uVar5);
        }
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 64 locals, pops [edi, esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101a1cc0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 0x40u;                      /* 0x101a1cc0: 64 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101a1cc3: push esi */
    g->esi = g->ecx;   /* 0x101a1cc4: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101a1cc6: push edi */
    cow_lift_101a1cc0(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
