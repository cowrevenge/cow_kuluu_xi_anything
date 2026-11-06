/* f_0x1028c210 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1028c210 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1028c210(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    int iVar3;
    int iVar4;
    int iVar5;
    int iVar6;
    int iVar7;
    int iVar8;
    CowU32 piVar9;
    CowU32 puVar10;
    int iVar11;
    int iVar12;
    int local_1c;
    iVar8 = param_1;
      iVar12 = 0;
      iVar1 = rd32((uint32_t)(param_1 + 0x24));
      iVar2 = rd32((uint32_t)(param_1 + 0x34));
      iVar3 = rd32((uint32_t)(param_1 + 0x44));
      iVar4 = rd32((uint32_t)(param_1 + 0x58));
      iVar5 = rd32((uint32_t)(param_1 + 0x7c));
      iVar6 = rd32((uint32_t)(param_1 + 0x90));
      iVar7 = rd32((uint32_t)(param_1 + 0x68));
      iVar11 = 0;
      local_1c = 0;
      param_1 = 0;
      if (0 < iVar4) {
        do {
          piVar9 = (CowU32)cow_bridge_102798b0(g, COW_IMG(COW_ADDR_LIFT_1028C262), 2u, (const CowU32[]){ iVar8, iVar12 }, 0u, 0u, g->eax, 0u);
          if (rd32((uint32_t)(piVar9 + 4u * (uint32_t)(0xd))) != 0) {
            local_1c = local_1c + rd32((uint32_t)(rd32((uint32_t)(piVar9 + 4u * (uint32_t)(0xd))) + 0x14));
          }
          if (rd32((uint32_t)piVar9) == 0xa0002) {
            param_1 = param_1 + 1;
          }
          else if (rd32((uint32_t)piVar9) == 0xa0009) {
            iVar11 = iVar11 + rd32((uint32_t)(piVar9 + 4u * (uint32_t)(0x11)));
          }
          iVar12 = iVar12 + 1;
        } while (iVar12 < iVar4);
      }
      cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C2A5), 2u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9AFC) }, 0u, 0u, g->eax, 8u);
      if (iVar4 != 0) {
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C2B8), 3u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9AE8), iVar4 }, 0u, 0u, g->eax, 12u);
      }
      if (iVar11 != 0) {
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C2CB), 3u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9AD4), iVar11 }, 0u, 0u, g->eax, 12u);
      }
      if (param_1 != 0) {
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C2E2), 3u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9AC0), param_1 }, 0u, 0u, g->eax, 12u);
      }
      if (local_1c != 0) {
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C2F9), 3u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9AAC), local_1c }, 0u, 0u, g->eax, 12u);
      }
      cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C307), 2u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9AFC) }, 0u, 0u, g->eax, 0u);
      cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C312), 2u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_10350E4C) }, 0u, 0u, g->eax, 0u);
      if (iVar1 != 0) {
        puVar10 = COW_IMG(COW_ADDR_LIFT_1034F7B0);
        if (iVar1 < 2) {
          puVar10 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C339), 4u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9A94), iVar1, puVar10 }, 0u, 0u, g->eax, 16u);
      }
      if (iVar2 != 0) {
        puVar10 = COW_IMG(COW_ADDR_LIFT_1034F7B0);
        if (iVar2 < 2) {
          puVar10 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C360), 4u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9A7C), iVar2, puVar10 }, 0u, 0u, g->eax, 16u);
      }
      if (iVar4 != 0) {
        puVar10 = COW_IMG(COW_ADDR_LIFT_1034F7B0);
        if (iVar4 < 2) {
          puVar10 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C383), 4u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9A64), iVar4, puVar10 }, 0u, 0u, g->eax, 16u);
      }
      if (iVar3 != 0) {
        puVar10 = COW_IMG(COW_ADDR_LIFT_1034F7B0);
        if (iVar3 < 2) {
          puVar10 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C3AA), 4u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9A4C), iVar3, puVar10 }, 0u, 0u, g->eax, 16u);
      }
      if (iVar5 != 0) {
        puVar10 = COW_IMG(COW_ADDR_LIFT_1034F7B0);
        if (iVar5 < 2) {
          puVar10 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C3D1), 4u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9A38), iVar5, puVar10 }, 0u, 0u, g->eax, 16u);
      }
      if (iVar6 != 0) {
        puVar10 = COW_IMG(COW_ADDR_LIFT_1034F7B0);
        if (iVar6 < 2) {
          puVar10 = COW_IMG(COW_ADDR_LIFT_103D3C84);
        }
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C3F8), 4u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9A24), iVar6, puVar10 }, 0u, 0u, g->eax, 16u);
      }
      if (iVar7 != 0) {
        cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C40F), 3u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_103B9A10), iVar7 }, 0u, 0u, g->eax, 12u);
      }
      cow_bridge_10314d95(g, COW_IMG(COW_ADDR_LIFT_1028C41D), 2u, (const CowU32[]){ param_2, COW_IMG(COW_ADDR_LIFT_10350E4C) }, 0u, 0u, g->eax, 8u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 2 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 28 locals, pops [-], ret 0.
   Arguments: 0 register argument(s) [-], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1028c210(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    g->esp -= 0x1cu;                      /* 0x1028c210: 28 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1028c213: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x1028c214: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1028c215: push esi */
    { uint32_t A = (uint32_t)(g->esp + 0x2Cu); g->esi = (uint32_t)(rd32(A)); }   /* 0x1028c216: register esi, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1028c21a: push edi */
    g->edi = 0u;   /* 0x1028c21b: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x24u); g->eax = (uint32_t)(rd32(A)); }   /* 0x1028c21d: register eax, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x34u); g->ecx = (uint32_t)(rd32(A)); }   /* 0x1028c220: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x44u); g->edx = (uint32_t)(rd32(A)); }   /* 0x1028c223: register edx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x58u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x1028c226: register ebp, replayed as the entry ran it */
    cow_lift_1028c210(g, param_1, param_2);


    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
