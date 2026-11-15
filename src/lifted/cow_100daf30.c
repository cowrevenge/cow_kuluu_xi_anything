/* f_0x100daf30 - MACHINE-LIFTED from Ghidra 12.2 decompilation by tools/cow/ghidra/lift.py.

   This is not a reading. It is what the decompiler said, put into cow's shape: the computation in a
   named function, the guest-facing plumbing in the COW_ADAPTER block, and every guest address behind
   layout/lifted_addresses.h. The frame, the argument convention, the call sites and the stack cleanup
   were NOT taken from the decompiler (it does not know them) but read back off generated/all/funcs_*.c,
   the recompiler's own translation of the same bytes. Nothing here has been reasoned about, so it carries
   no Evidence block and asserts nothing about what the function is for.

   Proven only by: tools/cow/ghidra/lift_proof.py - differential against the generated original, which is
   the thing that decides whether this unit is real. A lift that does not pass cowdiff is not a
   conversion, it is a draft.

   Name: cow_lift_100daf30 (machine guess - no evidence; naming and structs come later, by cluster).
*/
#include "cow.h"
#include "lifted_addresses.h"   /* the guest addresses this body mentions - generated, do not hand edit */
#include "lifted_bridges.h"     /* calls into not-yet-lifted code go through the generated bridges */

void cow_lift_100daf30(Guest* g, int32_t param_1)
{
/* COW_LIFTED BEGIN - machine translation of the decompiler's output, including its control
   flow. Readability rules do not apply here by design; the file's own header says it is not a
   reading, and cowdiff against the generated original is what decides whether it is real. */
    CowU8 uVar1;
    char cVar2;
    CowU32 uVar3;
    CowU32 uVar4;
    int iVar5;
    CowU8 local_1;
    switch(rd32((uint32_t)(param_1 + 8))) {
      case 0:
        local_1 = cow_bridge_100da750(g, COW_IMG(COW_ADDR_LIFT_100DAF4F), 0u, (const CowU32[]){ 0u }, g->esi, g->edx, g->eax, 0u);
        uVar4 = cow_bridge_10310bbd(g, COW_IMG(COW_ADDR_LIFT_100DAF56), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0xb8), uVar4);
        iVar5 = (int32_t)rd32((uint32_t)(param_1 + 0x14));
        if ((((iVar5 != 0xc) && (iVar5 != 0x15)) && ((iVar5 != 0xb && (iVar5 != 0xe)))) &&
           (((uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100DAF88), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar3 & 0x200) != 0 &&
             (uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100DAF92), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar3 & 0x400) == 0)) ||
            ((uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100DAF9C), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar3 & 0x2000) != 0 &&
             (uVar3 = cow_bridge_100fc160(g, COW_IMG(COW_ADDR_LIFT_100DAFAA), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), (uVar3 & 0x4000) == 0)))))) {
          wr32((uint32_t)(param_1 + 8), (int32_t)rd32((uint32_t)(param_1 + 8)) + 1);
          wr32(COW_IMG(COW_ADDR_LIFT_10482F1E), 1);
          g->eax = (CowU32)(local_1); return;
        }
        break;
      case 1:
        uVar1 = cow_bridge_100da750(g, COW_IMG(COW_ADDR_LIFT_100DAFCE), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        uVar4 = cow_bridge_10310bbd(g, COW_IMG(COW_ADDR_LIFT_100DAFD5), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0xb8), uVar4);
        if (rd32(COW_IMG(COW_ADDR_LIFT_10482F1E)) == '\0') {
          wr32((uint32_t)(param_1 + 8), (int32_t)rd32((uint32_t)(param_1 + 8)) + 1);
        }
        cow_bridge_1008abe0(g, COW_IMG(COW_ADDR_LIFT_100DAFEC), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(uVar1); return;
      case 2:
        local_1 = cow_bridge_100da750(g, COW_IMG(COW_ADDR_LIFT_100DAFF9), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        uVar4 = cow_bridge_10310bbd(g, COW_IMG(COW_ADDR_LIFT_100DB000), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 0xb8), uVar4);
        cow_bridge_1008abe0(g, COW_IMG(COW_ADDR_LIFT_100DB00B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        iVar5 = cow_bridge_100f10f0(g, COW_IMG(COW_ADDR_LIFT_100DB010), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if ((iVar5 == 0) && (cVar2 = cow_bridge_100f76d0(g, COW_IMG(COW_ADDR_LIFT_100DB01E), 1u, (const CowU32[]){ 0 }, g->ecx, g->edx, g->eax, 4u), cVar2 == '\x01')) {
          wr32((uint32_t)(param_1 + 8), (int32_t)rd32((uint32_t)(param_1 + 8)) + 1);
          g->eax = (CowU32)(local_1); return;
        }
        break;
      case 3:
        uVar1 = cow_bridge_100da750(g, COW_IMG(COW_ADDR_LIFT_100DB03D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        wr32((uint32_t)(param_1 + 8), (int32_t)rd32((uint32_t)(param_1 + 8)) + 1);
        cow_bridge_10017670(g, COW_IMG(COW_ADDR_LIFT_100DB04B), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        g->eax = (CowU32)(uVar1); return;
      case 4:
        iVar5 = cow_bridge_10016410(g, COW_IMG(COW_ADDR_LIFT_100DB056), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar5 == 0) {
          cow_bridge_100fc180(g, COW_IMG(COW_ADDR_LIFT_100DB064), 1u, (const CowU32[]){ 1024u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100fc180(g, COW_IMG(COW_ADDR_LIFT_100DB06E), 1u, (const CowU32[]){ 16384u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100fc180(g, COW_IMG(COW_ADDR_LIFT_100DB075), 1u, (const CowU32[]){ 1u }, g->ecx, g->edx, g->eax, 12u);
          cow_bridge_100f7960(g, COW_IMG(COW_ADDR_LIFT_100DB07D), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          iVar5 = cow_bridge_100f7a80(g, COW_IMG(COW_ADDR_LIFT_100DB082), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          cow_bridge_100e46a0(g, COW_IMG(COW_ADDR_LIFT_100DB093), 2u, (const CowU32[]){ 1, iVar5 == 1 }, g->ecx, g->edx, g->eax, 8u);
          wr32((uint32_t)(param_1 + 8), 0);
        }
        else {
          cVar2 = cow_bridge_100dbeb0(g, COW_IMG(COW_ADDR_LIFT_100DB0BD), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
          if ((((cVar2 != '\x01') || (cVar2 = cow_bridge_100dbca0(g, COW_IMG(COW_ADDR_LIFT_100DB0C6), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar2 != '\x01')) ||
              (cVar2 = cow_bridge_100dc2c0(g, COW_IMG(COW_ADDR_LIFT_100DB0CF), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar2 != '\x01')) || (cVar2 = cow_bridge_100f9d70(g, COW_IMG(COW_ADDR_LIFT_100DB0D8), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u), cVar2 != '\x01')) {
            g->eax = (CowU32)(0); return;
          }
        }
        iVar5 = cow_bridge_10310dd8(g, COW_IMG(COW_ADDR_LIFT_100DB0A2), 0u, (const CowU32[]){ 0u }, g->ecx, g->edx, g->eax, 0u);
        if (iVar5 == 0) {
          wr32(COW_IMG(COW_ADDR_LIFT_10456900), 0xffffffff);
        }
        g->eax = (CowU32)(1); return;
      default:
        local_1 = (CowU8)((CowU32)param_1 >> 0x18);
      }
      g->eax = (CowU32)(local_1); return;
/* COW_LIFTED END */
}


/* COW_ADAPTER BEGIN - machine-lifted; the readability rules do not apply to this block by design,
   because it is generated guest translation rather than a human's argument.
   Convention: thiscall/fastcall(ecx), cdecl, 1 parameter(s), cleanup 0 bytes.
   Frame, pops and cleanup read back off the entry's generated body: 0 push(es) [-], frame pointer no, 0 locals, pops [esi, ebx, ecx], ret 0.
   Arguments: 1 register argument(s) [ecx], 0 stack word(s).
   The argument reads come FIRST: they are reads of the caller's frame at the esp the entry arrived with
   (sp0), which no push can move, so their position cannot change what they see - and the prologue below
   may name one of them, because an entry that loads its argument into eax before storing it returns that
   argument in eax and the lift has to say so. */
void cow_adapter_100daf30(Guest* g)
{
    uint32_t sp0 = g->esp; /* the caller's esp, before this entry touched it: where the args live */
    CowU32 param_1 = g->ecx;   /* ecx argument */
    g->esp -= 4u; wr32(g->esp, g->ecx); /* 0x100daf30: push ecx */
    g->esp -= 4u; wr32(g->esp, g->ebx); /* 0x100daf31: push ebx */
    g->esp -= 4u; wr32(g->esp, g->esi); /* 0x100daf32: push esi */
    g->esi = g->ecx;   /* 0x100daf33: the value the entry loaded and the decompiler dropped */
    { uint32_t A = (uint32_t)(g->esi + 0x8u); g->eax = (uint32_t)(rd32(A)); }   /* 0x100daf35: register eax, replayed as the entry ran it */
    cow_lift_100daf30(g, param_1);

    { uint32_t v = rd32(g->esp); g->esp += 4u; g->esi = v; } /* pop esi */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ebx = v; } /* pop ebx */
    { uint32_t v = rd32(g->esp); g->esp += 4u; g->ecx = v; } /* pop ecx */
    g->esp = sp0; /* where the entry's own `ret` found it: the return-address slot rt_return pops */
    rt_return(g, g->eax, 0u);
}
/* COW_ADAPTER END */

/* NOTE(machine): this entry also pushes 4 word(s) in the middle of its body that Ghidra turned into a local; the lift does not reproduce that stack write, and cowdiff is what says whether it mattered. */
