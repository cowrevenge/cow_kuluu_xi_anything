/* f_0x10021dd0 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10021dd0 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10021dd0(Guest* g, CowU32 param_1, CowU32 param_2, float param_3)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    float fVar1;
    CowU8 local_400[1024];
    cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021DF3), 4u, (const CowU32[]){ g->ecx, 1024u, 271913776u, g->eax }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = param_3 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021E23), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021E3C), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_1035131C), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x31)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021E65), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021E81), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_1035130C), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x32)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021EAA), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021EC3), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_103512FC), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x33)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021EEC), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021F08), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_103512EC), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x34)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021F31), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021F4A), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_103512DC), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x35)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021F73), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021F8F), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_103512C8), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x36)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021FB8), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10021FD1), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_103512B8), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x37)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10021FFA), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10022016), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_103512A8), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x38)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_1002203F), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_10022058), 4u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_10351298), (int)(int8_t)rd8((uint32_t)((int)param_1 + 0x39)) }, g->ecx, g->edx, g->eax, 0u);
      fVar1 = fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC));
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_10022081), 4u, (const CowU32[]){ local_400, param_2, fVar1, 0 }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_10313507(g, COW_IMG(COW_ADDR_LIFT_100220B0), 7u, (const CowU32[]){ local_400, 0x400, COW_IMG(COW_ADDR_LIFT_10351284), rd8((uint32_t)((int)param_1 + 0x3a)), rd8((uint32_t)((int)param_1 + 0x3b)), rd8((uint32_t)((int)param_1 + 0x3c)), rd8((uint32_t)((int)param_1 + 0x3d)) }, g->ecx, g->edx, g->eax, 0u);
      cow_bridge_100384b0(g, COW_IMG(COW_ADDR_LIFT_100220D1), 4u, (const CowU32[]){ local_400, param_2, fVar1 + rd32(COW_IMG(COW_ADDR_LIFT_1032A1AC)), 0 }, g->ecx, g->edx, g->eax, 16u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 3 parameter(s), cleanup 8 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 2 push(es) [esi, edi], frame pointer no, 1024 locals, pops [edi, esi], ret 8.
   Arguments: 1 register argument(s) [ecx], 2 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10021dd0(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    CowU32 param_2 = rd32((uint32_t)(sp0 + 4u + 0x0u));
    float param_3 = rdf32((uint32_t)(sp0 + 4u + 0x4u));   /* float argument */
    const CowU32 cow_in_esi = g->esi;   /* esi as the entry was called with */
    const CowU32 cow_in_edi = g->edi;   /* edi as the entry was called with */
    g->esp -= 0x400u;                      /* 0x10021dd0: 1024 bytes of locals */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10021dd6: push esi */
    g->esi = g->ecx;   /* 0x10021dd7: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10021dd9: push edi */
    { g->ecx = (uint32_t)((uint32_t)(g->esp + 0x8u)); }   /* 0x10021dda: register ecx, replayed as the entry ran it */
    { uint32_t A = (uint32_t)(g->esi + 0x30u); g->eax = (uint32_t)((uint32_t)(int32_t)((int8_t)rd8(A))); }   /* 0x10021dde: register eax, replayed as the entry ran it */
    cow_lift_10021dd0(g, param_1, param_2, param_3);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    g->esi = cow_in_esi;   /* every ret of the entry hands esi back as it got it */
    g->edi = cow_in_edi;   /* every ret of the entry hands edi back as it got it */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 8u);
}
/* COW_ADAPTER END */
