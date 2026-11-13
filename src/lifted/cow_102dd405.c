/* f_0x102dd405 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102dd405 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102dd405(Guest* g, CowU32 param_1, CowU32 param_2, int32_t param_3, CowU32 param_4, CowU32 param_5)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    int iVar2;
    CowU32 uVar3;
    CowU32 puVar4;
    CowU32 puVar5;
    int local_24[8];
    local_24[0] = 0;
      local_24[1] = 5;
      local_24[2] = 4;
      local_24[3] = 1;
      local_24[4] = 3;
      local_24[5] = 2;
      local_24[6] = 6;
      local_24[7] = 0;
      iVar2 = param_3;
      do {
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x10)), param_5);
        iVar1 = local_24[local_24[7]];
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x12)), iVar1);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x11)), 3);
        if (iVar1 == 0) {
          iVar2 = cow_bridge_102dd3d5(g, COW_IMG(COW_ADDR_LIFT_102DD4D9), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (iVar1 == 1) {
          iVar2 = cow_bridge_102dbba0(g, COW_IMG(COW_ADDR_LIFT_102DD4CA), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (iVar1 == 2) {
          iVar2 = cow_bridge_102dbe10(g, COW_IMG(COW_ADDR_LIFT_102DD4BB), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (iVar1 == 3) {
          iVar2 = cow_bridge_102dc58d(g, COW_IMG(COW_ADDR_LIFT_102DD4AC), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (iVar1 == 4) {
          iVar2 = cow_bridge_102dcb23(g, COW_IMG(COW_ADDR_LIFT_102DD49D), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (iVar1 == 5) {
          iVar2 = cow_bridge_102dc2b7(g, COW_IMG(COW_ADDR_LIFT_102DD48E), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        else if (iVar1 == 6) {
          iVar2 = cow_bridge_102db144(g, COW_IMG(COW_ADDR_LIFT_102DD47F), 2u, (const CowU32[]){ param_2, param_3 }, g->ecx, g->edx, g->eax, 0u);
        }
        if (-1 < iVar2) break;
        if ((rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) != 0) && (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xe))) != 0)) {
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_102DD4F1), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(1))) }, g->ecx, g->edx, g->eax, 0u);
        }
        if ((rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) != 0) && (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0xf))) != 0)) {
          cow_bridge_10311bf0(g, COW_IMG(COW_ADDR_LIFT_102DD504), 1u, (const CowU32[]){ rd32((uint32_t)(param_1 + 4u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u);
        }
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x13))) != 0) {
          cow_bridge_102db065(g, COW_IMG(COW_ADDR_LIFT_102DD513), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        }
        if (rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x14))) != 0) {
          cow_bridge_102db065(g, COW_IMG(COW_ADDR_LIFT_102DD521), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 0u);
        }
        local_24[7] = local_24[7] + 1;
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(1)), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(2)), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xe)), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xf)), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)), 0);
        wr32((uint32_t)(param_1 + 4u * (uint32_t)(0x14)), 0);
      } while ((CowU32)local_24[7] < 7);
      iVar2 = 7;
      if (local_24[7] == 7) {
        uVar3 = 0x88760b59;
      }
      else {
        puVar4 = param_1;
        if (param_4 != (CowU32)0x0) {
          puVar5 = param_4;
          for (; iVar2 != 0; iVar2 = iVar2 + -1) {
            wr32((uint32_t)puVar5, 0);
            puVar5 = puVar5 + 4u * (uint32_t)(1);
          }
          wr32((uint32_t)param_4, rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))));
          wr32((uint32_t)(param_4 + 4u * (uint32_t)(1)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(4))));
          wr32((uint32_t)(param_4 + 4u * (uint32_t)(2)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))));
          wr32((uint32_t)(param_4 + 4u * (uint32_t)(3)), 1);
          uVar3 = cow_bridge_102d280f(g, COW_IMG(COW_ADDR_LIFT_102DD57E), 1u, (const CowU32[]){ rd32((uint32_t)param_1) }, g->ecx, g->edx, g->eax, 0u);
          wr32((uint32_t)(param_4 + 4u * (uint32_t)(4)), uVar3);
          wr32((uint32_t)(param_4 + 4u * (uint32_t)(5)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x11))));
          wr32((uint32_t)(param_4 + 4u * (uint32_t)(6)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x12))));
          for (puVar5 = param_1; rd32((uint32_t)(puVar5 + 4u * (uint32_t)(0x13))) != 0; puVar5 = (CowU32)rd32((uint32_t)(puVar5 + 4u * (uint32_t)(0x13)))) {
            wr32((uint32_t)(param_4 + 4u * (uint32_t)(3)), rd32((uint32_t)(param_4 + 4u * (uint32_t)(3))) + 1);
          }
        }
        do {
          for (; param_1 != (CowU32)0x0; param_1 = (CowU32)rd32((uint32_t)(param_1 + 4u * (uint32_t)(0x13)))) {
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(8)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(3))));
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(9)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(4))));
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(6)), 0);
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(7)), 0);
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(10)), 0);
            wr32((uint32_t)(param_1 + 4u * (uint32_t)(0xb)), rd32((uint32_t)(param_1 + 4u * (uint32_t)(5))));
          }
          param_1 = (CowU32)rd32((uint32_t)(puVar4 + 4u * (uint32_t)(0x14)));
          puVar4 = param_1;
        } while (param_1 != (CowU32)0x0);
        uVar3 = 0;
      }
      g->eax = (CowU32)(uVar3); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 5 parameter(s), cleanup 16 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 16.
   Arguments: 1 register argument(s) [ecx], 4 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102dd405(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    CowU32 param_5 = rd32((uint32_t)(sp0 + 4u + 0xcu));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x102dd405: push ebp */
    g->ebp = g->esp;                       /* 0x102dd406: mov ebp, esp */
    g->esp -= 0x20u;                      /* 0x102dd408: 32 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102dd40b: push ebx */
    g->ebx = param_3;   /* 0x102dd40c: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102dd40f: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102dd410: push edi */
    g->edi = 0u;   /* 0x102dd411: the value the entry loaded and the decompiler dropped */
    g->esi = g->ecx;   /* 0x102dd413: the value the entry loaded and the decompiler dropped */
    cow_lift_102dd405(g, param_1, param_2, param_3, param_4, param_5);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { g->esp = g->ebp; g->ebp = rd32(g->esp); g->esp += 4u; } /* leave */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 16u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
