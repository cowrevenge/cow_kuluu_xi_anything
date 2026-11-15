/* f_0x10124440 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10124440 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10124440(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    short sVar3;
    CowU32 puVar4;
    CowU32 piVar5;
    CowU32 piVar6;
    wr32((uint32_t)((int)param_1 + 0x58), 0);
      wr32((uint32_t)((int)param_1 + 0x5c), 0);
      wr32((uint32_t)((int)param_1 + 0x60), 0);
      wr32((uint32_t)((int)param_1 + 100), 0);
      wr32((uint32_t)((int)param_1 + 0x68), 0);
      wr32((uint32_t)((int)param_1 + 0x70), 0xc479c000);
      wr8((uint32_t)((int)param_1 + 0x4d), 0);
      wr8((uint32_t)((int)param_1 + 0x88), 1);
      wr32((uint32_t)((int)param_1 + 0x8c), 0);
      wr32((uint32_t)((int)param_1 + 0x90), 0);
      wr32((uint32_t)((int)param_1 + 0x94), 0);
      wr32((uint32_t)((int)param_1 + 0x98), 0);
      wr32((uint32_t)((int)param_1 + 0x9c), 0);
      wr16((uint32_t)((int)param_1 + 0xa2), 0);
      wr16((uint32_t)((int)param_1 + 0xa4), 0);
      wr8((uint32_t)((int)param_1 + 0xa0), 0);
      iVar1 = (int)(short)((short)rd32(COW_IMG(COW_ADDR_LIFT_106218B8)) - (short)rd32(COW_IMG(COW_ADDR_LIFT_106218B4))) / 2;
      wr32((uint32_t)((int)param_1 + 4), iVar1);
      wr32((uint32_t)((int)param_1 + 0xc), iVar1);
      sVar3 = (((uint64_t)(rd32(COW_IMG(COW_ADDR_LIFT_106218B8))) << 16) & 0xffffu) - (((uint64_t)(rd32(COW_IMG(COW_ADDR_LIFT_106218B4))) << 16) & 0xffffu);
      wr8((uint32_t)((int)param_1 + 0x4c), 0);
      iVar1 = (int)sVar3 / 2;
      wr32((uint32_t)((int)param_1 + 8), iVar1);
      wr32((uint32_t)((int)param_1 + 0x10), iVar1);
      uVar2 = cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_101244E2), 0u, (const CowU32[]){ 0u }, COW_IMG(COW_ADDR_LIFT_104E1BF8), COW_IMG(COW_ADDR_LIFT_1036E6C8), g->eax, 0u);
      wr32((uint32_t)((int)param_1 + 0x40), uVar2);
      wr16((uint32_t)((int)param_1 + 0x44), 0);
      wr32((uint32_t)((int)param_1 + 0x80), 0x3f800000);
      wr16((uint32_t)((int)param_1 + 0x84), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1036E4EC)) == 0) {
        piVar5 = COW_IMG(COW_ADDR_LIFT_1036E4EC);
        do {
          iVar1 = cow_bridge_10120450(g, COW_IMG(COW_ADDR_LIFT_10124518), 1u, (const CowU32[]){ piVar5 + 4u * (uint32_t)(-9) }, COW_IMG(COW_ADDR_LIFT_104E1BF8), g->edx, g->eax, 0u);
          piVar6 = piVar5 + 4u * (uint32_t)(0x10);
          wr32((uint32_t)piVar5, iVar1);
          piVar5 = piVar6;
        } while (rd32((uint32_t)piVar6) == 0);
      }
      wr8((uint32_t)((int)param_1 + 0x4e), 0);
      cow_bridge_101262a0(g, COW_IMG(COW_ADDR_LIFT_1012452F), 0u, (const CowU32[]){ 0u }, param_1, g->edx, g->eax, 0u);
      wr8((uint32_t)((int)param_1 + 0x86), 0);
      wr8((uint32_t)((int)param_1 + 0x87), 0);
      wr16((uint32_t)((int)param_1 + 0xa6), 0);
      if (rd32(COW_IMG(COW_ADDR_LIFT_1045666C)) != 0) {
        cow_bridge_10009780(g, COW_IMG(COW_ADDR_LIFT_10124552), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 0u);
      }
      cow_bridge_10124700(g, COW_IMG(COW_ADDR_LIFT_1012455E), 2u, (const CowU32[]){ (int)param_1 + 4, 0 }, param_1, g->edx, g->eax, 0u);
      iVar1 = 0;
      puVar4 = (CowU32)((int)param_1 + 0x20);
      do {
        wr8((uint32_t)((int)param_1 + iVar1 + 0x34), 0);
        wr32((uint32_t)(puVar4 + 4u * (uint32_t)(-1)), 0);
        wr32((uint32_t)puVar4, 0);
        iVar1 = iVar1 + 1;
        puVar4 = puVar4 + 4u * (uint32_t)(2);
      } while (iVar1 < 3);
      wr32((uint32_t)((int)param_1 + 0xa8), 0);
      wr8((uint32_t)((int)param_1 + 0xac), 0);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10124440(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10124440: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10124441: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10124442: push esi */
    g->esi = g->ecx;   /* 0x10124443: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x10124445: the value the entry loaded and the decompiler dropped */
    cow_lift_10124440(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
