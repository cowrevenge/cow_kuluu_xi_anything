/* f_0x1008a350 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_1008a350 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_1008a350(Guest* g, CowU32 param_1, CowU32 param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 puVar2;
    wr32((uint32_t)(param_1 + 0xdc), 100);
      wr32((uint32_t)(param_1 + 0xe0), 100);
      wr32((uint32_t)(param_1 + 0x30), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x10), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x20), 0x3f800000);
      wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) & 0xffffe07f);
      wr16((uint32_t)(param_1 + 0x11c), 0);
      wr32((uint32_t)(param_1 + 0x2c), 0);
      wr32((uint32_t)(param_1 + 0x28), 0);
      wr32((uint32_t)(param_1 + 0x24), 0);
      wr32((uint32_t)(param_1 + 0xc), 0);
      wr32((uint32_t)(param_1 + 8), 0);
      wr32((uint32_t)(param_1 + 4), 0);
      wr32((uint32_t)(param_1 + 0x1c), 0);
      wr32((uint32_t)(param_1 + 0x18), 0);
      wr32((uint32_t)(param_1 + 0x14), 0);
      wr32((uint32_t)(param_1 + 0x74), 0);
      wr32((uint32_t)(param_1 + 0x78), 0);
      wr8((uint32_t)(param_1 + 0x7c), 0);
      wr32((uint32_t)(param_1 + 0xa0), 0);
      puVar2 = (CowU32)(param_1 + 0xa4);
      for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 1;
      }
      wr32((uint32_t)(param_1 + 0xe8), 0);
      wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) & 0xffffffcf);
      wr8((uint32_t)(param_1 + 0xee), 0);
      wr8((uint32_t)(param_1 + 0xef), 0);
      wr16((uint32_t)(param_1 + 0x166), 0);
      wr32((uint32_t)(param_1 + 0x168), 0x34756f6d);
      puVar2 = (CowU32)(param_1 + 0xfc);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 1;
      }
      wr16((uint32_t)(param_1 + 0xf4), 0);
      wr8((uint32_t)(param_1 + 0xf6), 0);
      wr32((uint32_t)(param_1 + 0xd8), 0);
      wr32((uint32_t)(param_1 + 0x170), 0);
      wr32((uint32_t)(param_1 + 0x16c), 0);
      wr32((uint32_t)(param_1 + 0x178), 0);
      wr32((uint32_t)(param_1 + 0x17c), 0);
      wr32((uint32_t)(param_1 + 0x15c), 0x40a00000);
      wr32((uint32_t)(param_1 + 0x98), 0x40a00000);
      wr32((uint32_t)(param_1 + 0x9c), 0x40a00000);
      wr16((uint32_t)(param_1 + 0xf2), 0);
      wr16((uint32_t)(param_1 + 0xf0), 0);
      wr16((uint32_t)(param_1 + 0x1b8), 0);
      wr32((uint32_t)(param_1 + 0x188), 0);
      wr32((uint32_t)(param_1 + 0x184), 0);
      wr32((uint32_t)(param_1 + 0x180), 0);
      wr16((uint32_t)(param_1 + 0x164), 0);
      wr16((uint32_t)(param_1 + 0x162), 0);
      wr16((uint32_t)(param_1 + 0x160), 0);
      wr32((uint32_t)(param_1 + 0xe4), 0);
      wr8((uint32_t)(param_1 + 0x1bc), 0);
      wr8((uint32_t)(param_1 + 0x1bd), 0);
      wr32((uint32_t)(param_1 + 0x1d4), 0);
      wr16((uint32_t)(param_1 + 0x1d8), 0x17);
      wr32((uint32_t)(param_1 + 0x1d0), 0);
      wr16((uint32_t)(param_1 + 0x148), 0);
      wr16((uint32_t)(param_1 + 0x14e), 0);
      wr16((uint32_t)(param_1 + 0x150), 0);
      wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) & 0x1fb0);
      wr8((uint32_t)(param_1 + 0x144), 0);
      wr32((uint32_t)(param_1 + 0x124), 0x880);
      wr32((uint32_t)(param_1 + 0x140), rd32((uint32_t)(param_1 + 0x140)) & 0xfffffff7);
      wr32((uint32_t)(param_1 + 300), rd32((uint32_t)(param_1 + 300)) & 0x300002);
      wr32((uint32_t)(param_1 + 0x130), rd32((uint32_t)(param_1 + 0x130)) & 0xffff7f00);
      wr32((uint32_t)(param_1 + 0x13c), rd32((uint32_t)(param_1 + 0x13c)) & 0xf0040003 | 0x40000);
      wr16((uint32_t)(param_1 + 0x146), 0);
      wr16((uint32_t)(param_1 + 0x14a), 0);
      wr16((uint32_t)(param_1 + 0x14c), 0);
      wr32((uint32_t)(param_1 + 0x1f0), 0);
      wr8((uint32_t)(param_1 + 0x1ff), 0);
      wr8((uint32_t)(param_1 + 0x200), 0);
      wr8((uint32_t)(param_1 + 0x201), 0);
      wr8((uint32_t)(param_1 + 0x1da), 0);
      wr8((uint32_t)(param_1 + 0x1db), 0);
      wr32((uint32_t)(param_1 + 0x128), 0x20001);
      wr8((uint32_t)(param_1 + 0x145), 0);
      wr16((uint32_t)(param_1 + 0x1f8), 0);
      wr16((uint32_t)(param_1 + 0x2a6), 0);
      wr16((uint32_t)(param_1 + 0x1fa), 0);
      wr16((uint32_t)(param_1 + 0x2a4), 0);
      wr8((uint32_t)(param_1 + 0x1fe), 0);
      wr16((uint32_t)(param_1 + 0x1fc), 0);
      wr32((uint32_t)(param_1 + 0x204), 0xbf800000);
      wr32((uint32_t)(param_1 + 0x208), 0);
      wr32((uint32_t)(param_1 + 0x20c), 0);
      wr16((uint32_t)(param_1 + 0x210), 0);
      wr8((uint32_t)(param_1 + 0x212), 0);
      wr8((uint32_t)(param_1 + 0x213), 0);
      puVar2 = (CowU32)(param_1 + 0x250);
      for (iVar1 = 0xb; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 1;
      }
      wr32((uint32_t)(param_1 + 0x13c), rd32((uint32_t)(param_1 + 0x13c)) & 0x1fffffff);
      wr32((uint32_t)(param_1 + 0x140), rd32((uint32_t)(param_1 + 0x140)) & 0xfffffff8);
      wr32((uint32_t)(param_1 + 0x18c), 0);
      wr32((uint32_t)(param_1 + 0x130), rd32((uint32_t)(param_1 + 0x130)) & 0xfffc80ff);
      puVar2 = (CowU32)(param_1 + 0x27c);
      for (iVar1 = 9; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 1;
      }
      wr8((uint32_t)(param_1 + 0x138), 0);
      wr32((uint32_t)(param_1 + 0x130), rd32((uint32_t)(param_1 + 0x130)) & 0x103ffff);
      wr16((uint32_t)(param_1 + 0x2a0), 0);
      wr16((uint32_t)(param_1 + 0x2a2), 0);
      wr32((uint32_t)(param_1 + 0x134), rd32((uint32_t)(param_1 + 0x134)) & 0xfe000000);
      wr16((uint32_t)(param_1 + 0x202), 0);
      wr32((uint32_t)(param_1 + 0x138), rd32((uint32_t)(param_1 + 0x138)) & 0xff);
      wr32((uint32_t)(param_1 + 0x13c), rd32((uint32_t)(param_1 + 0x13c)) & 0xfffffffc);
      cow_bridge_1008a160(g, COW_IMG(COW_ADDR_LIFT_1008A681), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, 100u, 0u);
      if (param_2 == 0x1000000) {
        wr32((uint32_t)(param_1 + 0x78), 0x1000000);
        wr32((uint32_t)(param_1 + 0x74), 0x900);
        wr32((uint32_t)(param_1 + 0x1d0), rd32((uint32_t)(param_1 + 0x1d0)) | 2);
        wr32((uint32_t)(param_1 + 0x120), rd32((uint32_t)(param_1 + 0x120)) | 0x200);
      }
      else {
        cow_bridge_1008a1a0(g, COW_IMG(COW_ADDR_LIFT_1008A6BF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 100u, 0u);
        cow_bridge_1008d980(g, COW_IMG(COW_ADDR_LIFT_1008A6C6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, 100u, 0u);
      }
      wr32((uint32_t)(param_1 + 0xd4), 0);
      wr32((uint32_t)(param_1 + 0xf8), 0);
      wr16((uint32_t)(param_1 + 0x1c0), 0xffff);
      wr32((uint32_t)(param_1 + 0x1c4), 0);
      wr32((uint32_t)(param_1 + 0x1c8), 0);
      wr32((uint32_t)(param_1 + 0x1cc), 0);
      wr32((uint32_t)(param_1 + 0x1ec), 0);
      wr32((uint32_t)(param_1 + 500), 0);
      wr32((uint32_t)(param_1 + 0x1dc), 0);
      wr16((uint32_t)(param_1 + 0x1e0), 0);
      wr16((uint32_t)(param_1 + 0x1e2), 0);
      wr32((uint32_t)(param_1 + 0x1e4), 0);
      wr16((uint32_t)(param_1 + 0x1e8), 0);
      wr16((uint32_t)(param_1 + 0x1ea), 0);
      wr32((uint32_t)(param_1 + 0x2a8), 0);
      puVar2 = (CowU32)(param_1 + 0x214);
      for (iVar1 = 8; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 1;
      }
      wr8((uint32_t)puVar2, 0);
      puVar2 = (CowU32)(param_1 + 0x235);
      for (iVar1 = 6; iVar1 != 0; iVar1 = iVar1 + -1) {
        wr32((uint32_t)puVar2, 0);
        puVar2 = puVar2 + 1;
      }
      wr8((uint32_t)puVar2, 0);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 3 push(es) [ebx, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebx], ret 4.
   Arguments: 1 register argument(s) [ecx], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_1008a350(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x1008a350: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x1008a351: push esi */
    g->esi = g->ecx;   /* 0x1008a352: the value the entry loaded and the decompiler dropped */
    g->eax = 100u;   /* 0x1008a354: the value the entry loaded and the decompiler dropped */
    g->ebx = 0u;   /* 0x1008a359: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x1008a35b: push edi */
    cow_lift_1008a350(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */
