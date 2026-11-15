/* f_0x101ae140 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_101ae140 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_101ae140(Guest* g, CowU32 param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU32 uVar1;
    CowU32 pcVar2;
    CowU32 pcVar3;
    CowU32 this_00;
    int iVar4;
    iVar4 = 0x20;
      this_00 = (CowU32)((int)param_1 + 4);
      do {
        cow_bridge_101ade00(g, COW_IMG(COW_ADDR_LIFT_101AE157), 0u, (const CowU32[]){ 0u }, this_00, g->edx, g->eax, 0u);
        this_00 = (CowU32)((int)this_00 + 0x108);
        iVar4 = iVar4 + -1;
      } while (iVar4 != 0);
      wr32((uint32_t)param_1, COW_IMG(COW_ADDR_LIFT_10337920));
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE17B), 4u, (const CowU32[]){ 54u, 270198784u, 272448644u, 4u }, (CowU32)((int)param_1 + 4), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE194), 4u, (const CowU32[]){ 55u, 270199008u, 272448644u, 2u }, (CowU32)((int)param_1 + 0x10c), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE1AD), 4u, (const CowU32[]){ 63u, 270198816u, 272448644u, 4u }, (CowU32)((int)param_1 + 0xd6c), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE1C6), 4u, (const CowU32[]){ 56u, 270198128u, 272084268u, 2u }, (CowU32)((int)param_1 + 0x214), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE1DF), 4u, (const CowU32[]){ 58u, 270198128u, 272084388u, 2u }, (CowU32)((int)param_1 + 0x424), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE1F8), 4u, (const CowU32[]){ 59u, 270198704u, 272084544u, 1u }, (CowU32)((int)param_1 + 0x52c), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE211), 4u, (const CowU32[]){ 60u, 270198128u, 272084260u, 2u }, (CowU32)((int)param_1 + 0x634), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE22D), 4u, (const CowU32[]){ 130u, 270198704u, 272037344u, 3u }, (CowU32)((int)param_1 + 0x73c), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE246), 4u, (const CowU32[]){ 61u, 270198736u, 272032676u, 1u }, (CowU32)((int)param_1 + 0x844), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE25F), 4u, (const CowU32[]){ 127u, 270199216u, 272448644u, 4u }, (CowU32)((int)param_1 + 0x94c), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE27B), 4u, (const CowU32[]){ 128u, 270199248u, 272448644u, 4u }, (CowU32)((int)param_1 + 0xa54), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE297), 4u, (const CowU32[]){ 159u, 270199296u, 272448644u, 4u }, (CowU32)((int)param_1 + 0x1084), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE2B3), 4u, (const CowU32[]){ 129u, 270198704u, 272084532u, 1u }, (CowU32)((int)param_1 + 0xb5c), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE2CC), 4u, (const CowU32[]){ 57u, 270198848u, 272448644u, 4u }, (CowU32)((int)param_1 + 0x31c), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE2E5), 4u, (const CowU32[]){ 62u, 270198128u, 272084356u, 2u }, (CowU32)((int)param_1 + 0xc64), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE301), 4u, (const CowU32[]){ 173u, 270198128u, 272084320u, 2u }, (CowU32)((int)param_1 + 0x1dec), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE31D), 4u, (const CowU32[]){ 174u, 270198128u, 272084336u, 2u }, (CowU32)((int)param_1 + 0x1ef4), g->edx, g->eax, 0u);
      iVar4 = (int32_t)rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 8));
      uVar1 = rd32((uint32_t)(rd32(COW_IMG(COW_ADDR_LIFT_10456A28)) + 0x18)) >> 7 & 1;
      if (((uVar1 != 0) && ((iVar4 == 2 || (iVar4 == 3)))) || (pcVar3 = COW_IMG(COW_ADDR_LIFT_1037AD3C), iVar4 != 0)
         ) {
        pcVar3 = COW_IMG(COW_ADDR_LIFT_1037AD50);
      }
      if (((uVar1 != 0) && ((iVar4 == 2 || (iVar4 == 3)))) || (pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD50), iVar4 != 0)
         ) {
        pcVar2 = COW_IMG(COW_ADDR_LIFT_1037AD3C);
      }
      cow_bridge_101adec0(g, COW_IMG(COW_ADDR_LIFT_101AE37D), 5u, (const CowU32[]){ 0xb4, COW_IMG(COW_ADDR_LIFT_101AE570), pcVar2, pcVar3, 2 }, (CowU32)((int)param_1 + 0x1ffc), g->edx, g->eax, 0u);
      cow_bridge_101ade80(g, COW_IMG(COW_ADDR_LIFT_101AE396), 4u, (const CowU32[]){ 65u, 270199328u, 272448644u, 4u }, (CowU32)((int)param_1 + 0xf7c), g->edx, g->eax, 0u);
      g->eax = (CowU32)(param_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 4 push(es) [ebx, ebp, esi, edi], frame pointer no, 0 locals, pops [edi, esi, ebp, ebx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_101ae140(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x101ae140: push ebx */
    g->esp -= 4u; wr32(g->esp, g->ebp); /* 0x101ae141: push ebp */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x101ae142: push esi */
    g->esi = g->ecx;   /* 0x101ae143: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x101ae145: push edi */
    g->ebp = 32u;   /* 0x101ae146: the value the entry loaded and the decompiler dropped */
    { g->edi = (uint32_t)((uint32_t)(g->esi + 0x4u)); }   /* 0x101ae14b: register edi, replayed as the entry ran it */
    cow_lift_101ae140(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebp = v; } /* pop ebp */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */
