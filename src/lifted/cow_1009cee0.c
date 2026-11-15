/* f_0x1009cee0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1009cee0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1009cee0(Guest* g, CowU32 param_1, CowU32 param_2, CowU32 param_3, CowU32 param_4)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 this;
    CowU32 uVar1;
    CowU32 pbVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    CowU32 puVar6;
    uVar4 = (CowU32)rd16((uint32_t)(param_3 + 4u * (uint32_t)(1)));
      uVar1 = uVar4 & 0x3f;
      if (uVar1 == 2) {
        pbVar2 = (CowU32)0x0;
        if (((0x8ff < (uVar4 & 0xffc0)) &&
            (iVar5 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)((int)param_3 + 6))))), iVar5 != 0)) &&
           (pbVar2 = (CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))), rd8((uint32_t)(iVar5 + 0x78)) == pbVar2)) {
          wr16((uint32_t)(iVar5 + 0x2a0), rd16((uint32_t)(param_3 + 4u * (uint32_t)(3))));
          wr32((uint32_t)(iVar5 + 0x29c), rd32((uint32_t)(param_3 + 4u * (uint32_t)(5))));
          wr8((uint32_t)(iVar5 + 0x200), (CowU8)((CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))) >> 0x15) & 0xf);
          wr8((uint32_t)(iVar5 + 0x201), (CowU8)((CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))) >> 0x19) & 0xf);
          wr8((uint32_t)(iVar5 + 0x1da), (CowU8)((CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))) >> 1) & 1);
          if ((int)rd32(COW_IMG(COW_ADDR_LIFT_10485F7A)) == (CowU32)rd16((uint32_t)((int)param_3 + 6))) {
            cow_bridge_1009ab40(g, COW_IMG(COW_ADDR_LIFT_1009D062), 1u, (const CowU32[]){ param_3 + 4u * (uint32_t)(6) }, g->ecx, g->edx, g->eax, 0u);
            uVar3 = cow_bridge_100f9620(g, COW_IMG(COW_ADDR_LIFT_1009D070), 2u, (const CowU32[]){ param_1, rd32((uint32_t)(param_3 + 4u * (uint32_t)(8))) }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100f9740(g, COW_IMG(COW_ADDR_LIFT_1009D07A), 2u, (const CowU32[]){ param_1, (((uint32_t)(((CowU32)uVar3 >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)(param_3 + 4u * (uint32_t)(9)))) & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100f98a0(g, COW_IMG(COW_ADDR_LIFT_1009D084), 2u, (const CowU32[]){ param_1, (((uint32_t)(((CowU32)g->ecx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_3 + 0x25))) & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100f98e0(g, COW_IMG(COW_ADDR_LIFT_1009D08E), 2u, (const CowU32[]){ param_1, (((uint32_t)(((CowU32)g->edx >> 8)) & 0xffffffu) << 8 | ((uint32_t)(rd8((uint32_t)((int)param_3 + 0x26))) & 0xffu)) }, g->ecx, g->edx, g->eax, 0u);
            cow_bridge_100f9780(g, COW_IMG(COW_ADDR_LIFT_1009D09B), 2u, (const CowU32[]){ param_1, rd8((uint32_t)((int)param_3 + 0x27)) & 1 }, g->ecx, g->edx, g->eax, 40u);
          }
          pbVar2 = (CowU32)(rd32((uint32_t)(iVar5 + 0x130)) ^
                           (((CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))) >> 2 & 0xff) << 0x17 ^ rd32((uint32_t)(iVar5 + 0x130))) &
                           0x800000);
          wr8((uint32_t)(iVar5 + 0x130), pbVar2);
        }
      }
      else if (uVar1 == 3) {
        pbVar2 = (CowU32)0x0;
        if (((0x4ff < (uVar4 & 0xffc0)) &&
            (this = (CowU32)rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_10480AF0) + 4u * (uint32_t)(rd16((uint32_t)((int)param_3 + 6))))), this != (CowU32)0x0)) &&
           (pbVar2 = (CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(2))), rd8((uint32_t)((int)this + 0x78)) == pbVar2)) {
          wr16((uint32_t)((int)this + 0x2a4), rd16((uint32_t)(param_3 + 4u * (uint32_t)(3))));
          wr8((uint32_t)((int)this + 0x200), rd8((uint32_t)((int)param_3 + 0x13)) & 0xf);
          wr8((uint32_t)((int)this + 0x201), (CowU8)((CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))) >> 0x1c));
          wr8((uint32_t)((int)this + 0x1da), (CowU8)((CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))) >> 1) & 1);
          pbVar2 = (CowU32)(param_3 + 4u * (uint32_t)(5));
          wr32((uint32_t)((int)this + 0x130), rd32((uint32_t)((int)this + 0x130)) ^
               (((CowU32)rd32((uint32_t)(param_3 + 4u * (uint32_t)(4))) >> 2 & 0xff) << 0x16 ^ rd32((uint32_t)((int)this + 0x130))) & 0x400000);
          if (0x20 < rd8((uint32_t)pbVar2)) {
            uVar1 = cow_bridge_10093430(g, COW_IMG(COW_ADDR_LIFT_1009CFC7), 1u, (const CowU32[]){ pbVar2 }, this, g->edx, g->eax, 0u);
            g->eax = (CowU32)(uVar1 & 0xffffff00); return;
          }
        }
      }
      else {
        pbVar2 = (CowU32)(uVar1 - 4);
        if ((pbVar2 == (CowU32)0x0) && (0x5ff < (uVar4 & 0xffc0))) {
          puVar6 = COW_IMG(COW_ADDR_LIFT_10482F28);
          for (iVar5 = 6; param_3 = param_3 + 4u * (uint32_t)(1), iVar5 != 0; iVar5 = iVar5 + -1) {
            wr32((uint32_t)puVar6, rd32((uint32_t)param_3));
            puVar6 = puVar6 + 4u * (uint32_t)(1);
          }
          g->eax = (CowU32)(1); return;
        }
      }
      g->eax = (CowU32)((CowU32)pbVar2 & 0xffffff00); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 4 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 1 push(es) [esi], frame pointer no, 0 locals, pops [esi], ret 0.
   Arguments: 1 register argument(s) [ecx], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1009cee0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_4 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    g->eax = param_4;   /* 0x1009cee0: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1009cee4: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1009cee5: push edi */
    { uint32_t A = (uint32_t)(g->eax + 0x4u); g->ecx = (g->ecx & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x1009cee6: register ecx, replayed as the entry ran it */
    { g->esi = (uint32_t)((uint32_t)(g->eax + 0x4u)); }   /* 0x1009ceea: register esi, replayed as the entry ran it */
    g->eax = g->ecx;   /* 0x1009ceed: the value the entry loaded and the decompiler dropped */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x3Fu; uint32_t r = (uint32_t)(a & b); g->eax = (uint32_t)(r); }   /* 0x1009ceef: register eax, replayed as the entry ran it */
    { uint32_t a = g->eax; uint32_t b = (uint32_t)0x2u; uint32_t r = (uint32_t)(a - b); g->eax = (uint32_t)(r); }   /* 0x1009cef2: register eax, replayed as the entry ran it */
    cow_lift_1009cee0(g, param_1, param_2, param_3, param_4);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 2 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
