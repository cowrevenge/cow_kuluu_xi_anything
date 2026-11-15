/* f_0x100ea810 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ea810 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ea810(Guest* g, int32_t param_1, CowU32 param_2, int32_t param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU8 bVar2;
    int iVar3;
    CowU8 local_14[20];
    bVar1 = rd8((uint32_t)(param_3 + 5));
      iVar3 = (bVar1 >> 6) + 1;
      if (param_1 != 0) {
        switch(rd16((uint32_t)(param_3 + 0x9c))) {
        case 1:
          bVar1 = rd8((uint32_t)(param_3 + 4));
          if ((bVar1 & 0xf) == 0) {
            if ((bVar1 & 0x40) == 0) {
              g->eax = (CowU32)(1); return;
            }
          }
          else {
            if ((bVar1 & 0xf) == 3) goto L_100ea98a;
            if ((bVar1 & 0xf) != 5) {
              cow_bridge_100eab30(g, COW_IMG(COW_ADDR_LIFT_100EA874), 5u, (const CowU32[]){ 7u, 0u, 0u, 0u, 0u }, g->ecx, g->edx, g->eax, 20u);
              g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
            }
          }
          cow_bridge_100ed650(g, COW_IMG(COW_ADDR_LIFT_100EA89B), 3u, (const CowU32[]){ local_14, 0x14, param_3 + 0xa0 }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100eab30(g, COW_IMG(COW_ADDR_LIFT_100EA8B8), 5u, (const CowU32[]){ iVar3, rd32((uint32_t)(param_3 + 0x88)), local_14, param_3 + 0x8c, param_3 + 8 }, g->ecx, g->edx, g->eax, 32u);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        case 2:
          bVar1 = rd8((uint32_t)(param_3 + 4)) & 0xf;
          if (bVar1 != 0) {
            if (bVar1 == 5) {
              cow_bridge_100ed650(g, COW_IMG(COW_ADDR_LIFT_100EA8FD), 3u, (const CowU32[]){ local_14, 0x14, param_3 + 0xa0 }, g->ecx, g->edx, g->eax, 0u);
              cow_bridge_100eaaf0(g, COW_IMG(COW_ADDR_LIFT_100EA8DF), 5u, (const CowU32[]){ 7u, 0u, 0u, 0u, 0u }, g->ecx, g->edx, g->eax, 20u);
              g->eax = (CowU32)(1); return;
            }
            cow_bridge_100eaaf0(g, COW_IMG(COW_ADDR_LIFT_100EA918), 5u, (const CowU32[]){ 7, 0, 0, 0, 0 }, g->ecx, g->edx, g->eax, 32u);
            g->eax = (CowU32)(1); return;
          }
          if ((rd8((uint32_t)(param_3 + 4)) & 0x40) != 0) {
            cow_bridge_100ed650(g, COW_IMG(COW_ADDR_LIFT_100EA93F), 3u, (const CowU32[]){ local_14, 0x14, param_3 + 0xa0 }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100eaaf0(g, COW_IMG(COW_ADDR_LIFT_100EA95C), 5u, (const CowU32[]){ iVar3, rd32((uint32_t)(param_3 + 0x88)), local_14, param_3 + 0x8c, param_3 + 8 }, g->ecx, g->edx, g->eax, 32u);
            g->eax = (CowU32)(1); return;
          }
          break;
        case 3:
          bVar2 = rd8((uint32_t)(param_3 + 4)) & 0xf;
          if (bVar2 == 0) {
            cow_bridge_100eaba0(g, COW_IMG(COW_ADDR_LIFT_100EA97F), 3u, (const CowU32[]){ iVar3, bVar1 & 3, bVar1 >> 2 & 3 }, g->ecx, g->edx, g->eax, 12u);
            g->eax = (CowU32)(1); return;
          }
          if (bVar2 != 3) {
            cow_bridge_100eaba0(g, COW_IMG(COW_ADDR_LIFT_100EA9AB), 3u, (const CowU32[]){ 7, 0xffffffff, 0xffffffff }, g->ecx, g->edx, g->eax, 12u);
            g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
          }
    L_100ea98a:
          cow_bridge_indirect(g, COW_IMG(COW_ADDR_LIFT_104CA3F4), COW_IMG(COW_ADDR_LIFT_100EA990), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          g->eax = (CowU32)(1); return;
        case 6:
          if ((rd8((uint32_t)(param_3 + 4)) & 0xf) != 0) {
            cow_bridge_100eab80(g, COW_IMG(COW_ADDR_LIFT_100EA9C7), 3u, (const CowU32[]){ 7, 0xffffffff, 0xffffffff }, g->ecx, g->edx, g->eax, 12u);
            g->eax = (CowU32)(1); return;
          }
          cow_bridge_100eab80(g, COW_IMG(COW_ADDR_LIFT_100EA9E5), 3u, (const CowU32[]){ iVar3, bVar1 & 3, bVar1 >> 2 & 3 }, g->ecx, g->edx, g->eax, 12u);
        }
      }
      g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 20 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ea810(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->esp -= 0x14u;                      /* 0x100ea810: 20 bytes of locals */
    { uint32_t A = (uint32_t)(g->esp + 0x18u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x100ea813: register ecx, replayed as the entry ran it */
    g->eax = 0u;   /* 0x100ea817: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ea819: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->esi = (uint32_t)(rd32(A)); }   /* 0x100ea81a: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100ea81e: push edi */
    { uint32_t A = (uint32_t)(g->esi + 0x5u); g->eax = (g->eax & 0xFFFFFF00u) | (uint8_t)(rd8(A)); }   /* 0x100ea81f: register eax, replayed as the entry ran it */
    g->edi = g->eax;   /* 0x100ea822: the value the entry loaded and the decompiler dropped */
    { { unsigned c = (unsigned)(0x6u) & 31u; if (c) { uint32_t a = g->edi; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->edi = (uint32_t)(r); } }; }   /* 0x100ea824: register edi, replayed as the entry ran it */
    { { uint32_t a = g->edi; uint32_t r = (uint32_t)(a + 1u); g->edi = (uint32_t)(r); }; }   /* 0x100ea827: register edi, replayed as the entry ran it */
    cow_lift_100ea810(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
