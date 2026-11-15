/* f_0x10145240 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_10145240 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_10145240(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    char cVar1;
    int iVar2;
    CowU32 piVar3;
    CowU32 uVar5;
    _Bool bVar4;
      
      if (rd32(COW_IMG(COW_ADDR_LIFT_106631D4)) == 0) {
        return;
      }
      if (rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) == 0) {
        return;
      }
      if ((rd32(COW_IMG(COW_ADDR_LIFT_105782D4)) != '\0') && (cVar1 = cow_bridge_101a8030(g, COW_IMG(COW_ADDR_LIFT_10145274), 3u, (const CowU32[]){ 0u, 1u, 0u }, param_1, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 12u), cVar1 != '\0')) {
        wr32(COW_IMG(COW_ADDR_LIFT_105782D4), '\0');
      }
      iVar2 = cow_bridge_100f97a0(g, COW_IMG(COW_ADDR_LIFT_1014528D), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 4u);
      cVar1 = cow_bridge_101cc1b0(g, COW_IMG(COW_ADDR_LIFT_1014529C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
      bVar4 = cVar1 != '\0';
      cVar1 = cow_bridge_101d5fe0(g, COW_IMG(COW_ADDR_LIFT_101452AC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
      if ((cVar1 == '\0') || (bVar4)) {
        piVar3 = (CowU32)cow_bridge_101c8c30(g, COW_IMG(COW_ADDR_LIFT_101452E6), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
        cVar1 = cow_bridge_100f96e0(g, COW_IMG(COW_ADDR_LIFT_101452F4), 1u, (const CowU32[]){ rd32(COW_IMG(COW_ADDR_LIFT_104DFD98)) }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 8u);
        if (cVar1 != '\0') {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101452C0), 2u, (const CowU32[]){ 5u, 5u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101452CC), 2u, (const CowU32[]){ 5u, 6u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101452D8), 2u, (const CowU32[]){ 5u, 7u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          if (piVar3 != (CowU32)0x0) {
            cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_10145336), 2u, (const CowU32[]){ 6, rd32((uint32_t)(rd32((uint32_t)piVar3) + 0x980)) }, rd32((uint32_t)(param_1 + 8)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          }
          uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10145342), 2u, (const CowU32[]){ 13u, 148u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cow_bridge_1011ade0(g, COW_IMG(COW_ADDR_LIFT_10145350), 2u, (const CowU32[]){ 6, uVar5 }, rd32((uint32_t)(param_1 + 8)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1014535C), 2u, (const CowU32[]){ 14u, 667u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cow_bridge_1011adb0(g, COW_IMG(COW_ADDR_LIFT_1014536A), 2u, (const CowU32[]){ 6, uVar5 }, rd32((uint32_t)(param_1 + 8)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          wr8((uint32_t)(param_1 + 0x16), 0);
          return;
        }
        if ((int8_t)rd8((uint32_t)(param_1 + 0x16)) == '\0') {
          cVar1 = cow_bridge_10097b40(g, COW_IMG(COW_ADDR_LIFT_101453B4), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          if ((cVar1 == '\0') || (bVar4)) {
            uVar5 = 5;
          }
          else {
            uVar5 = 0xb;
          }
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145307), 2u, (const CowU32[]){ 5u, 5u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cVar1 = cow_bridge_10097b40(g, COW_IMG(COW_ADDR_LIFT_101453D3), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          if (((cVar1 == '\0') || (bVar4)) || (iVar2 == 0)) {
            uVar5 = 5;
          }
          else {
            uVar5 = 0xb;
          }
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145313), 2u, (const CowU32[]){ 11u, 6u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_1014531F), 2u, (const CowU32[]){ 5u, 7u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          if (piVar3 == (CowU32)0x0) goto L_10145418;
          uVar5 = rd32((uint32_t)(rd32((uint32_t)piVar3) + 0x978));
        }
        else {
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145388), 2u, (const CowU32[]){ 5u, 5u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145394), 2u, (const CowU32[]){ 5u, 6u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101453A0), 2u, (const CowU32[]){ 5u, 7u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
          if (piVar3 == (CowU32)0x0) goto L_10145418;
          uVar5 = rd32((uint32_t)(rd32((uint32_t)piVar3) + 0x97c));
        }
      }
      else {
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101453CE), 2u, (const CowU32[]){ 5, 5 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_101453F5), 2u, (const CowU32[]){ 5, 6 }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
        cow_bridge_10118b60(g, COW_IMG(COW_ADDR_LIFT_10145401), 2u, (const CowU32[]){ 11u, 6u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
        uVar5 = 0;
      }
      cow_bridge_1011ae50(g, COW_IMG(COW_ADDR_LIFT_10145418), 2u, (const CowU32[]){ 6, uVar5 }, rd32((uint32_t)(param_1 + 8)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
    L_10145418:
      uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_10145424), 2u, (const CowU32[]){ 13u, 147u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
      cow_bridge_1011ade0(g, COW_IMG(COW_ADDR_LIFT_10145432), 2u, (const CowU32[]){ 6, uVar5 }, rd32((uint32_t)(param_1 + 8)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
      uVar5 = cow_bridge_10152ef0(g, COW_IMG(COW_ADDR_LIFT_1014543E), 2u, (const CowU32[]){ 14u, 666u }, g->ecx, g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
      cow_bridge_1011adb0(g, COW_IMG(COW_ADDR_LIFT_1014544C), 2u, (const CowU32[]){ 6, uVar5 }, rd32((uint32_t)(param_1 + 8)), g->edx, rd32(COW_IMG(COW_ADDR_LIFT_106631D4)), 0u);
      return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), stdcall, 1 parameter(s), cleanup 4 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [edi, esi, ebx, ecx], ret 4.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_10145240(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x10145240: push ecx */
    g->eax = rd32(COW_IMG(COW_ADDR_LIFT_106631D4));   /* 0x10145241: the value the entry loaded and the decompiler dropped */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x10145246: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x10145247: push esi */
    g->esp -= 4u; wr32(g->esp, g->edi); /* 0x10145248: push edi */
    cow_lift_10145240(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->edi = v; } /* pop edi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 4u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 5 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
