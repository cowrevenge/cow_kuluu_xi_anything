/* f_0x10099270 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10099270 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10099270(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    int iVar2;
    int iVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    switch(rd16((uint32_t)(param_3 + 4))) {
      case 2:
        wr32(COW_IMG(COW_ADDR_LIFT_10485826), rd32((uint32_t)(param_3 + 8)));
        wr32(COW_IMG(COW_ADDR_LIFT_1048582A), rd32((uint32_t)(param_3 + 0xc)));
        wr32(COW_IMG(COW_ADDR_LIFT_10485824), rd32(COW_IMG(COW_ADDR_LIFT_10485824)) | 2);
        g->eax = (CowU32)(1); return;
      case 3:
        puVar4 = (CowU32)(param_3 + 8);
        puVar5 = COW_IMG(COW_ADDR_LIFT_10482F98);
        for (iVar2 = 0x35; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 4:
        puVar4 = (CowU32)(param_3 + 8);
        puVar5 = COW_IMG(COW_ADDR_LIFT_1048306C);
        for (iVar2 = 0x2b; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_104804CE), 1);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 5:
        puVar4 = (CowU32)(param_3 + 8);
        puVar5 = COW_IMG(COW_ADDR_LIFT_10485830);
        for (iVar2 = 0x25; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_10485824), rd32(COW_IMG(COW_ADDR_LIFT_10485824)) | 4);
        if (rd32((uint32_t)(param_1 + 0x2d610)) != 0) {
          iVar2 = 1;
          do {
            cow_bridge_indirect(g, rd32((uint32_t)((param_1 + 0x2d610u))), COW_IMG(COW_ADDR_LIFT_10099321), 1u, (const CowU32[]){ iVar2 }, g->ecx, g->edx, param_3, 4u);
            iVar2 = iVar2 + 1;
          } while (iVar2 < 0x17);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        break;
      case 6:
        puVar4 = (CowU32)(param_3 + 8);
        puVar5 = COW_IMG(COW_ADDR_LIFT_104858C4);
        for (iVar2 = 0x10; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_10485824), rd32(COW_IMG(COW_ADDR_LIFT_10485824)) | 8);
        g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
      case 7:
        uVar1 = (CowU32)(rd8((uint32_t)(param_3 + 8)) != '\0');
        iVar3 = (CowU32)rd8((uint32_t)(param_3 + 9)) * 0x20;
        puVar4 = (CowU32)(param_3 + 0xc);
        puVar5 = (CowU32)(COW_IMG(COW_ADDR_LIFT_10483164) + (uVar1 * 0x400 + iVar3) * 4);
        for (iVar2 = 0x20; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        if (0x3ff < iVar3 + 0x20U) {
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10483160) + 4u * (uint32_t)(uVar1)), 1);
          wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10483162) + 4u * (uint32_t)(uVar1)), 1);
          g->eax = (CowU32)((g->eax & 0xffffff00u) | ((CowU32)(1) & 0xffu)); return;
        }
        break;
      case 9:
        puVar4 = (CowU32)(param_3 + 8);
        puVar5 = COW_IMG(COW_ADDR_LIFT_10485904);
        for (iVar2 = 0x30; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_10485824), rd32(COW_IMG(COW_ADDR_LIFT_10485824)) | 0x10);
        g->eax = (CowU32)(1); return;
      case 10:
        puVar4 = (CowU32)(param_3 + 8);
        puVar5 = COW_IMG(COW_ADDR_LIFT_104859C4);
        for (iVar2 = 8; iVar2 != 0; iVar2 = iVar2 + -1) {
          wr32((uint32_t)puVar5, rd32((uint32_t)puVar4));
          puVar4 = puVar4 + 1;
          puVar5 = puVar5 + 1;
        }
        wr32(COW_IMG(COW_ADDR_LIFT_10485824), rd32(COW_IMG(COW_ADDR_LIFT_10485824)) | 0x20);
      }
      g->eax = (CowU32)(1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [ebp], frame pointer no, 0 locals, pops [ebp], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10099270(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    g->eax = param_3;   /* 0x10099270: the value the entry loaded and the decompiler dropped */
    g->ecx = 0u;   /* 0x10099274: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10099276: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10099277: push esi */
    { uint32_t A = (uint32_t)(g->eax + 0x4u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x10099278: register ecx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1009927c: push edi */
    { uint32_t a = g->ecx; uint32_t b = (uint32_t)0xFFFFFFFEu; uint32_t r = (uint32_t)(a + b); g->ecx = (uint32_t)(r); }   /* 0x1009927d: register ecx, replayed as the entry ran it */
    cow_lift_10099270(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
