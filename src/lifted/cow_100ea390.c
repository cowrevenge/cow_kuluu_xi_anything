/* f_0x100ea390 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100ea390 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100ea390(Guest* g, int32_t param_1, CowU32 param_2, CowU32 param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 bVar1;
    CowU16 uVar2;
    int iVar3;
    CowU32 uVar4;
    CowU32 local_10;
    CowU32 local_c;
    CowU32 local_8;
    CowU32 local_4;
    iVar3 = cow_bridge_100dde40(g, COW_IMG(COW_ADDR_LIFT_100EA3B4), 5u, (const CowU32[]){ g->edx, 16u, g->ecx, 44u, g->eax }, g->ecx, g->edx, g->eax, 20u);
      if ((iVar3 == 0) ||
         (iVar3 = cow_bridge_100ea4d0(g, COW_IMG(COW_ADDR_LIFT_100EA3C8), 2u, (const CowU32[]){ (((uint32_t)(((CowU32)g->ecx >> 8)) & 0xffffffu) << 8 | ((uint32_t)((char)rd16((uint32_t)(param_3 + 2u * (uint32_t)(0xe)))) & 0xffu)), rd32((uint32_t)(param_3 + 2u * (uint32_t)(2))) }, g->ecx, g->edx, g->eax, 0u), iVar3 == 0)) {
        g->eax = (CowU32)(0); return;
      }
      wr8((uint32_t)(iVar3 + 1), (char)rd16((uint32_t)(param_3 + 2u * (uint32_t)(0xd))));
      wr16((uint32_t)(iVar3 + 0x18), rd16((uint32_t)(param_3 + 2u * (uint32_t)(0xc))));
      wr32((uint32_t)(iVar3 + 0x34), rd32((uint32_t)(param_3 + 2u * (uint32_t)(10))));
      uVar4 = cow_bridge_100dc060(g, COW_IMG(COW_ADDR_LIFT_100EA3F2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      wr32((uint32_t)(iVar3 + 0x1c), uVar4);
      wr32((uint32_t)(iVar3 + 2), local_10);
      wr32((uint32_t)(iVar3 + 6), local_c);
      wr32((uint32_t)(iVar3 + 10), local_8);
      wr32((uint32_t)(iVar3 + 0xe), local_4);
      wr32((uint32_t)(iVar3 + 0x14), rd32((uint32_t)(param_3 + 2u * (uint32_t)(2))));
      wr32((uint32_t)(iVar3 + 0x20), rd32((uint32_t)(param_3 + 2u * (uint32_t)(4))));
      wr32((uint32_t)(iVar3 + 0x24), rd32((uint32_t)(param_3 + 2u * (uint32_t)(6))));
      wr32((uint32_t)(iVar3 + 0x28), rd32((uint32_t)(param_3 + 2u * (uint32_t)(8))));
      wr8((uint32_t)(iVar3 + 0x2c), rd8((uint32_t)((int)param_3 + 0x1d)));
      wr8((uint32_t)(iVar3 + 0x2d), (char)rd16((uint32_t)(param_3 + 2u * (uint32_t)(0xf))));
      wr16((uint32_t)(iVar3 + 0x30), rd16((uint32_t)(param_3 + 2u * (uint32_t)(0x10))));
      if ((int8_t)rd8((uint32_t)((int)param_3 + 0x1b)) == '\0') {
        uVar2 = 0;
      }
      else {
        uVar2 = rd16((uint32_t)(param_3 + 2u * (uint32_t)(0x10)));
        if (uVar2 == 0) {
          uVar2 = rd16((uint32_t)(param_1 + 0x3c350));
        }
      }
      wr16((uint32_t)(iVar3 + 0x1a), uVar2);
      wr8((uint32_t)(iVar3 + 0x69), (char)rd16((uint32_t)(param_3 + 2u * (uint32_t)(0x11))));
      wr8((uint32_t)(iVar3 + 0x6a), rd8((uint32_t)((int)param_3 + 0x23)));
      wr8((uint32_t)(iVar3 + 0x6b), (char)rd16((uint32_t)(param_3 + 2u * (uint32_t)(0x12))));
      wr8((uint32_t)(iVar3 + 0x6c), rd8((uint32_t)((int)param_3 + 0x25)));
      wr8((uint32_t)(iVar3 + 0x6d), (char)rd16((uint32_t)(param_3 + 2u * (uint32_t)(0x13))));
      bVar1 = (rd8((uint32_t)((int)param_3 + 0x27)) ^ rd8((uint32_t)(iVar3 + 0x6e))) & 1 ^ rd8((uint32_t)(iVar3 + 0x6e));
      wr8((uint32_t)(iVar3 + 0x6e), bVar1);
      wr8((uint32_t)(iVar3 + 0x6e), (rd8((uint32_t)((int)param_3 + 0x27)) ^ bVar1) & 2 ^ bVar1);
      if ((int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x3c390)) == (int32_t)rd32((uint32_t)(iVar3 + 0x14))) {
        wr32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) + 0x97f8), rd32((uint32_t)(iVar3 + 0x34)));
      }
      cow_bridge_100e9a70(g, COW_IMG(COW_ADDR_LIFT_100EA4C6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
      g->eax = (CowU32)((g->eax & 0xffff0000u) | ((CowU32)(1) & 0xffffu)); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 3 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 16 locals, pops [edi, esi], ret 0.
   Arguments: 0 register argument(s) [-], 3 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100ea390(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x4u));
    CowU32 param_3 = rd32((uint32_t)(sp0 + 4u + 0x8u));
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x10u;                      /* 0x100ea390: 16 bytes of locals */
    g->eax = 0u;   /* 0x100ea393: the value the entry loaded and the decompiler dropped */
    { g->edx = (uint32_t)((uint32_t)(g->esp)); }   /* 0x100ea395: register edx, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100ea399: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x100ea39a: push edi */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->edi = (uint32_t)(rd32(A)); }   /* 0x100ea39b: register edi, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->edi); g->eax = (g->eax & 0xFFFF0000u) | (uint16_t)(rd16(A)); }   /* 0x100ea39f: register eax, replayed as the entry ran it */
    { g->ecx = (uint32_t)((uint32_t)(g->edi + 0x28u)); }   /* 0x100ea3a2: register ecx, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x9u) & 31u; if (c) { uint32_t a = g->eax; uint32_t r; r = (uint32_t)((uint32_t)a >> c); g->eax = (uint32_t)(r); } }; }   /* 0x100ea3a5: register eax, replayed as the entry ran it */
    cow_lift_100ea390(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
