/* f_0x102e5db0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_102e5db0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_102e5db0(Guest* g, CowU32 param_1, int32_t param_2)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    int iVar1;
    CowU32 uVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    CowU32 uVar6;
    cow_bridge_102e2047(g, COW_IMG(COW_ADDR_LIFT_102E5DC5), 3u, (const CowU32[]){ param_2, 0, 1 }, param_1, param_2, g->eax, 0u);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10346150));
      if ((int32_t)rd32((uint32_t)(param_2 + 0x18)) == 1) {
        wr32((uint32_t)((int)param_1 + 0x1078), 0);
      }
      else if ((int32_t)rd32((uint32_t)(param_2 + 0x18)) == 2) {
        wr32((uint32_t)((int)param_1 + 0x1078), 1);
      }
      else {
        wr32((uint32_t)((int)param_1 + 0x1078), 3);
      }
      if ((int32_t)rd32((uint32_t)(param_2 + 0x1c)) == 1) {
        wr32((uint32_t)((int)param_1 + 0x107c), 0);
      }
      else if ((int32_t)rd32((uint32_t)(param_2 + 0x1c)) == 2) {
        wr32((uint32_t)((int)param_1 + 0x107c), 1);
      }
      else {
        wr32((uint32_t)((int)param_1 + 0x107c), 3);
      }
      if (((int32_t)rd32((uint32_t)((int)param_1 + 0x1078)) == 3) && ((int32_t)rd32((uint32_t)((int)param_1 + 0x107c)) == 3)) {
        uVar2 = 0;
      }
      else {
        uVar2 = 1;
      }
      wr32((uint32_t)((int)param_1 + 0x1074), uVar2);
      iVar1 = (int32_t)rd32((uint32_t)((int)param_1 + 4));
      if (iVar1 == 0x31545844) {
        wr32((uint32_t)((int)param_1 + 0x1080), 8);
        wr32((uint32_t)((int)param_1 + 0x1088), COW_IMG(COW_ADDR_LIFT_102F379C));
        wr32((uint32_t)((int)param_1 + 0x1084), COW_IMG(COW_ADDR_LIFT_102F349F));
      }
      else if (iVar1 == 0x32545844) {
        wr32((uint32_t)((int)param_1 + 0x1080), 0x10);
        wr32((uint32_t)((int)param_1 + 0x1088), COW_IMG(COW_ADDR_LIFT_102F3D60));
        wr32((uint32_t)((int)param_1 + 0x1084), COW_IMG(COW_ADDR_LIFT_102F3D1A));
      }
      else if (iVar1 == 0x33545844) {
        wr32((uint32_t)((int)param_1 + 0x1080), 0x10);
        wr32((uint32_t)((int)param_1 + 0x1088), COW_IMG(COW_ADDR_LIFT_102F37B4));
        wr32((uint32_t)((int)param_1 + 0x1084), COW_IMG(COW_ADDR_LIFT_102F35DD));
      }
      else if (iVar1 == 0x34545844) {
        wr32((uint32_t)((int)param_1 + 0x1080), 0x10);
        wr32((uint32_t)((int)param_1 + 0x1088), COW_IMG(COW_ADDR_LIFT_102F3D94));
        wr32((uint32_t)((int)param_1 + 0x1084), COW_IMG(COW_ADDR_LIFT_102F3D3D));
      }
      else if (iVar1 == 0x35545844) {
        wr32((uint32_t)((int)param_1 + 0x1080), 0x10);
        wr32((uint32_t)((int)param_1 + 0x1088), COW_IMG(COW_ADDR_LIFT_102F38C8));
        wr32((uint32_t)((int)param_1 + 0x1084), COW_IMG(COW_ADDR_LIFT_102F3660));
      }
      wr32((uint32_t)((int)param_1 + 0x10b0), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x10b4), 0xffffffff);
      wr32((uint32_t)((int)param_1 + 0x109c), rd32((uint32_t)((int)param_1 + 0x1040)));
      uVar3 = (int32_t)rd32((uint32_t)((int)param_1 + 0x1038)) + 3U & 0xfffffffc;
      uVar6 = rd32((uint32_t)((int)param_1 + 0x1030)) & 0xfffffffc;
      wr32((uint32_t)((int)param_1 + 0x1094), uVar3);
      uVar5 = rd32((uint32_t)((int)param_1 + 0x1034)) & 0xfffffffc;
      uVar4 = (int32_t)rd32((uint32_t)((int)param_1 + 0x103c)) + 3U & 0xfffffffc;
      wr32((uint32_t)((int)param_1 + 0x1098), uVar4);
      wr32((uint32_t)((int)param_1 + 0x10a4), uVar3 - uVar6 >> 2);
      wr32((uint32_t)((int)param_1 + 0x10a0), (int32_t)rd32((uint32_t)((int)param_1 + 0x1044)));
      wr32((uint32_t)((int)param_1 + 0x108c), uVar6);
      wr32((uint32_t)((int)param_1 + 0x10b8), 0);
      wr32((uint32_t)((int)param_1 + 0x10bc), 0);
      wr32((uint32_t)((int)param_1 + 0x10c0), 0);
      wr32((uint32_t)((int)param_1 + 0x1090), uVar5);
      wr32((uint32_t)((int)param_1 + 0x10a8), uVar4 - uVar5 >> 2);
      wr32((uint32_t)((int)param_1 + 0x10ac), (int32_t)rd32((uint32_t)((int)param_1 + 0x1044)) - (int32_t)rd32((uint32_t)((int)param_1 + 0x1040)));
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx+edx), stdcall, 2 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx], ret 4.
   Arguments: 2 register argument(s) [ecx, edx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_102e5db0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = g->edx;   /* edx argument */
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x102e5db0: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x102e5db1: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x102e5db2: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x10u); g->edi = (uint32_t)(rd32(A)); }   /* 0x102e5db3: register edi, replayed as the entry ran it */
    g->ebx = 0u;   /* 0x102e5db7: the value the entry loaded and the decompiler dropped */
    { { uint32_t a = g->ebx; uint32_t r = (uint32_t)(a + 1u); g->ebx = (uint32_t)(r); }; }   /* 0x102e5db9: register ebx, replayed as the entry ran it */
    cow_lift_102e5db0(g, param_1, param_2);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 3 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
