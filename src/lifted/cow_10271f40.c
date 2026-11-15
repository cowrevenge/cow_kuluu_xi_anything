/* f_0x10271f40 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10271f40 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10271f40(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 puVar1;
    CowU32 puVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    CowU32 uVar5;
    int iVar6;
    int iVar7;
    CowU8 local_18[24];
    iVar6 = param_1 * 0x7c;
      puVar1 = COW_IMG(COW_ADDR_LIFT_1099BCB4) + iVar6;
      puVar2 = COW_IMG(COW_ADDR_LIFT_1099BF20) + iVar6;
      if (rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)) < 1) {
        iVar7 = param_1 * 0x10;
        cow_bridge_10272810(g, COW_IMG(COW_ADDR_LIFT_10271F85), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_103B1B70) + iVar7 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        cow_bridge_1026df20(g, COW_IMG(COW_ADDR_LIFT_10271F8B), 1u, (const CowU32[]){ (g->esi + 278510772u) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        uVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BC4) + iVar7));
        uVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BC8) + iVar7));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD1C) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BC0) + iVar7)));
        uVar5 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BCC) + iVar7));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD20) + iVar6), uVar3);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD24) + iVar6), uVar4);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD28) + iVar6), uVar5);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD2C) + 4u * (uint32_t)(param_1 * 0x1f)), 0x41a00000);
        cow_bridge_1026e210(g, COW_IMG(COW_ADDR_LIFT_10271FBE), 1u, (const CowU32[]){ (g->esi + 278510772u) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        cow_bridge_1026df20(g, COW_IMG(COW_ADDR_LIFT_10271FC4), 1u, (const CowU32[]){ (g->esi + 278511392u) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        uVar3 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BC4) + iVar7));
        uVar4 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BC8) + iVar7));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF88) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BC0) + iVar7)));
        uVar5 = rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_103B1BCC) + iVar7));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF8C) + iVar6), uVar3);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF90) + iVar6), uVar4);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF94) + iVar6), uVar5);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF98) + iVar6), rd32(COW_IMG(COW_ADDR_LIFT_1099C510)));
      }
      else {
        cow_bridge_10272810(g, COW_IMG(COW_ADDR_LIFT_10272005), 2u, (const CowU32[]){ param_1, COW_IMG(COW_ADDR_LIFT_1099C1A0) + param_1 * 0x38 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        cow_bridge_1026df20(g, COW_IMG(COW_ADDR_LIFT_1027200B), 1u, (const CowU32[]){ puVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD1C) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C30C) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD20) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C310) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD24) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C314) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD28) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C318) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BD2C) + 4u * (uint32_t)(param_1 * 0x1f)), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C31C) + iVar6)));
        cow_bridge_1026e210(g, COW_IMG(COW_ADDR_LIFT_1027203C), 1u, (const CowU32[]){ puVar1 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        cow_bridge_1026df20(g, COW_IMG(COW_ADDR_LIFT_10272042), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF88) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C30C) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF8C) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C310) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF90) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C314) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF94) + iVar6), rd32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099C318) + iVar6)));
        wr32((uint32_t)(COW_IMG(COW_ADDR_LIFT_1099BF98) + iVar6), rd32(COW_IMG(COW_ADDR_LIFT_1099C510)));
      }
      cow_bridge_1026e210(g, COW_IMG(COW_ADDR_LIFT_10272074), 1u, (const CowU32[]){ puVar2 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 24u);
      cow_bridge_102806d0(g, COW_IMG(COW_ADDR_LIFT_1027208F), 4u, (const CowU32[]){ COW_IMG(COW_ADDR_LIFT_1099BF3C) + iVar6, 0x3e800000, 0x3e800000, 0x3e800000 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 0u);
      iVar6 = cow_bridge_1026fbd0(g, COW_IMG(COW_ADDR_LIFT_10272099), 1u, (const CowU32[]){ local_18 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 20u);
      if (iVar6 == 0) {
        cow_bridge_102725c0(g, COW_IMG(COW_ADDR_LIFT_102720AB), 2u, (const CowU32[]){ param_1, local_18 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_1099BB70)), 8u);
      }
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 24 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 0 register argument(s) [-], 1 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10271f40(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    const CowU32 cow_in_ebx = g->ebx;   /* ebx as the entry was called with */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    const CowU32 cow_in_ebp = g->ebp;   /* ebp as the entry was called with */
    g->esp -= 0x18u;                      /* 0x10271f40: 24 bytes of locals */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_1099BB70));   /* 0x10271f43: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10271f48: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x10271f49: push ebp */
    { uint32_t A = (uint32_t)(g->esp + 0x24u); g->ebp = (uint32_t)(rd32(A)); }   /* 0x10271f4a: register ebp, replayed as the entry ran it */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10271f4e: push esi */
    g->esi = g->ebp;   /* 0x10271f4f: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10271f51: push edi */
    { { unsigned c = (unsigned)(0x5u) & 31u; if (c) { uint32_t a = g->esi; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->esi = (uint32_t)(r); } }; }   /* 0x10271f52: register esi, replayed as the entry ran it */
    { uint32_t a = g->esi; uint32_t b = (uint32_t)g->ebp; uint32_t r = (uint32_t)(a - b); g->esi = (uint32_t)(r); }   /* 0x10271f55: register esi, replayed as the entry ran it */
    { { unsigned c = (unsigned)(0x2u) & 31u; if (c) { uint32_t a = g->esi; uint32_t r; r = (uint32_t)((uint32_t)a << c); g->esi = (uint32_t)(r); } }; }   /* 0x10271f57: register esi, replayed as the entry ran it */
    cow_lift_10271f40(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->ebx = cow_in_ebx;   /* every ret of the entry hands ebx back as it got it */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->ebp = cow_in_ebp;   /* every ret of the entry hands ebp back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
